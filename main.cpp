#include <ArduinoJson.h>

const int echoPin = 2;
const int trigPin = 3;

const int ledMerahPin = 6;
const int ledHijauPin = 7;

void setup()
{
  Serial.begin(9600);

  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(ledHijauPin, OUTPUT);
  pinMode(ledmerahPin, OUTPUT);
}

float ultrasonik()
{

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  int durasipantulan = pulseIn(echoPin, HIGH)

                           return durasiPantulan *
                       0.034 / 2;
}

void loop()
{

  float jarak = ultrasonik();

  if (jarak >= 10)
  {

    digitalWrite(ledHijauPin, HIGH);
    digitalWrite(ledMerahPin, LOW);

    Serial.println("tidak ada objek");
  }
  else
  {

    digitalWrite(ledHikauPin, LOW);
    digitalWrite(ledMerahPin, HIGH);

    Serial.println("Ada objek");
  }

  delay((1000));
}
