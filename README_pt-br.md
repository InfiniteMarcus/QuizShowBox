# QuizShowBox

Escolha um idioma para o README:
- [English](https://github.com/InfiniteMarcus/QuizShowBox/blob/main/README.md)
- 👉 **Portuguese**

## Sobre o projeto

Este projeto é um tipo de caixa com Arduino para shows de perguntas e respostas entre duas pessoas e com um juiz.

O juiz lê as perguntas e, em seguida, os competidores precisam apertar seus próprios botões. O primeiro a pressioná-lo pode tentar responder à pergunta.

A caixa fará um alerta sonoro de um segundo e ficará colorida na cor específica do competidor (por padrão, vermelho ou azul).

O juiz pode reiniciar o sistema com um botão de controle.

## Começando

### Circuito

![Imagem do circuito](https://github.com/InfiniteMarcus/QuizShowBox/blob/main/imgs/circuit.png)

A imagem do circuito foi originalmente criada com o [TinkerCad](https://www.tinkercad.com/), mas algumas adaptações foram feitas para melhor descrever os componentes.

### Lista de componentes

- *Arduino UNO R3*
- *Fonte de energia para o Arduino* [*]
- *Fonte de 12V*
- *Fite de LED RGB 12V*
- *Sirene 12V ou outro dispositivo de saída de som parecido*
- *3 transistores MOSFET (compatíveis com 12V)*
- *3 resistores (calculados para os MOSFETs)*
- *1 resistor de 100 Ohms*
- *3 push buttons (ou outros botões other pull-down)*
- *Protoboard / placa PCB*
- *Jumpers / fios para conectar os componentes*

[*] Necessário se você não quiser criar um circuito a mais para usar a fonte de 12V para alimentar o Arduino.

### Código

Todo o código-fonte necessário pode ser encontrado no arquivo `Program.ino`. Você precisará compilá-lo e enviá-lo para seu Arduino UNO usando algum programa como o [Arduino IDE](https://www.arduino.cc/en/software).