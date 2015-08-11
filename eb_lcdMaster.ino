#include <SoftwareSerial\SoftwareSerial.h>

SoftwareSerial BTSerial(0, 1);

void setup()
{
	// Open serial communications and wait for port to open:
	Serial.begin(9600);
	BTSerial.begin(9600);
	while (!Serial) {
		; // wait for serial port to connect. Needed for Leonardo only
	}


	Serial.println("Goodnight moon!");

	pinMode(13, OUTPUT);

	// set the data rate for the SoftwareSerial port
	//mySerial.begin(9600);
	//mySerial.println("Hello, world?");
}

void loop() // run over and over
{
	byte dataV;
	dataV = Serial.read();
	if (dataV == 1)
		digitalWrite(13, HIGH);
	if (dataV == 2)
		digitalWrite(13, LOW);
}

