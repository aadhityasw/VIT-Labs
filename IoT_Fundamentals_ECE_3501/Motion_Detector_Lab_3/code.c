#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int inches = 0;

 

int cm = 0;

 

long readUltrasonicDistance(int triggerPin, int echoPin)

{

  pinMode(triggerPin, OUTPUT);  // Clear the trigger

  digitalWrite(triggerPin, LOW);

  delayMicroseconds(2);

  // Sets the trigger pin to HIGH state for 10 microseconds

  digitalWrite(triggerPin, HIGH);

  delayMicroseconds(10);

  digitalWrite(triggerPin, LOW);

  pinMode(echoPin, INPUT);

  // Reads the echo pin, and returns the sound wave travel time in microseconds

  return pulseIn(echoPin, HIGH);

}

// initialize the library with the numbers of the interface pins

void setup() {

  // set up the LCD's number of columns and rows:

  lcd.begin(16, 2);

  Serial.begin(9600);

 

}

int cm1 = 0;

int cm2 = 0 ;

int cm3 = 0;

int total = 0;

void loop() {

  int count = 0;

  // set the cursor to column 0, line 1

  // (note: line 1 is the second row, since counting begins with 0):

  lcd.setCursor(10, 1);

  cm1 = 0.01723 * readUltrasonicDistance(7, 7);

  cm2 = 0.01723 * readUltrasonicDistance(6, 6);

  cm3 = 0.01723 * readUltrasonicDistance(8, 8);

  if (cm1 > 150)

  {

    count++;

  }

  if(cm2 > 150)

  {

    count++;

  }

  if(cm3 > 150)

  {

    count++;

  }

  lcd.setCursor(0,0);

  lcd.print(count);

  lcd.print(" free ");

  lcd.print("slots");

  lcd.setCursor(0,1);

  lcd.print("Slot ");

  if (cm3 > 150)

    lcd.print("1 ");

  if (cm2 > 150)

    lcd.print("2 ");

  if (cm1 > 150)

    lcd.print("3 ");

  lcd.print("free");

  if (cm3<150 & cm2<150 & cm1<150)

    lcd.print(" = 0");

  delay(500);

  lcd.clear();
}

