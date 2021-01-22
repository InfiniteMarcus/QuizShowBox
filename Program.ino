
//----------Variables----------
// Led pinout
int ledA = 4;
int ledB = 8;

// Siren pinout
int siren = 3;

// Button pinout
int buttonA = 12;
int buttonB = 7;
int buttonC = 2;

// State variables
bool stateA, stateB, stateC;
//-----------------------------

//----------Program------------
void setup() {

  // Setting output leds and siren
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

      // Get player button states (A and B)
      stateA = digitalRead(buttonA);
      stateB = digitalRead(buttonB);

      // Activating led of player A/B
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
    // Reseting states, leds and siren
    stateA = LOW;
    stateB = LOW;
    stateC = LOW;
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(siren, LOW);
  } 
}
//-----------------------------
