#include <Servo.h>

Servo motor1, motor2, motor3;
const int botao = 12;
bool estadoBotao = false;

void setup() {
  motor1.attach(3);
  motor2.attach(4);
  motor3.attach(5);
  pinMode(botao, INPUT_PULLUP); // Usa o resistor interno de pull-up
}

void loop() {
  estadoBotao = digitalRead(botao);

  if (estadoBotao == LOW) { // LOW = botão pressionado com INPUT_PULLUP
    dobrarRoupas();
  } else {
    // Deixa os motores na posição inicial
    motor1.write(0);
    motor2.write(0);
    motor3.write(0);
  }
}

void dobrarRoupas() {
  motor1.write(175);
  delay(1000);
  motor1.write(0);
  delay(1000);

  motor2.write(175);
  delay(1000);
  motor2.write(0);
  delay(1000);

  motor1.write(175);
  delay(1000);
  motor1.write(0);
  delay(1000);

  motor3.write(175);
  delay(1000);
  motor3.write(0);
  delay(1000);
}
