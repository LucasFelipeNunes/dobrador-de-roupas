#include <Servo.h>
Servo motor1, motor2, motor3;
int botao = 12;
bool estadoBotao = false;
void setup() {
	motor1.attach[3];
	motor2.attach[4];
	motor3.attach[5];
	pinMode(botao, INPUT);
}

void loop() {
	estadoBotao = digitalRead(botao);
	if(estadoBotao == HIGH){
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
	else{
		motor1.write(0);
		motor2.write(0);
		motor3.write(0);
	}
}
