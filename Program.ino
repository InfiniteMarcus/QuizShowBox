
//----Variables----

// Led pinout
int ledA = 12;
int ledB = 13;
  
// Siren pinout
int siren = 11;

// Button pinout
int buttonA = 3;
int buttonB = 2;
int buttonC = 1;

// Read state variables
bool stateA, stateB, stateC;

//-------------------

//----Program----

void setup() {

  // Setting OUTPUT leds and siren
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(siren, OUTPUT);

  // Setting input buttons
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonC, INPUT_PULLUP);
}

void loop() {

  // Getting state of reset button (C)
  stateC = digitalRead(buttonC);

  if(stateC){
    if(!digitalRead(ledA) && !digitalRead(ledB)){

      // Getting state of player buttons (A and B)
      stateA = digitalRead(buttonA);
      stateB = digitalRead(buttonB);

      // Activating 
      if(!stateA && stateB)
        digitalWrite(ledA, HIGH);
      else if(stateA && !stateB)
        digitalWrite(ledB, HIGH);
      
      // Activating siren for a second
      if(!stateA || !stateB){
        digitalWrite(siren, HIGH);
        delay(1000);
        digitalWrite(siren, LOW);
      }
    }
  }else{
    // Resetting states, leds and siren
    stateA = LOW;
    stateB = LOW;
    stateC = LOW;
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(siren, LOW);
  } 
}

//-------------------
