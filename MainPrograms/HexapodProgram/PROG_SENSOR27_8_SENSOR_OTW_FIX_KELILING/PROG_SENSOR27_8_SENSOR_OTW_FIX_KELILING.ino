/*-----------LIBRARY----------------*/
#include <NewPing.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

/*-----------SENSOR ULTRASONIK----------------*/
NewPing sonar1(3, 2, 200); // (PIN TRIG, PIN ECHO, MAX DISTANCE)
NewPing sonar2(9, 8, 200);
NewPing sonar3(5, 4, 200);
NewPing sonar4(22, 23, 200);
NewPing sonar5(24, 25, 200);
NewPing sonar6(26, 27, 200);
NewPing sonar7(28, 29, 200);
NewPing sonar8(32, 33, 200);

int jarak1, jarak2, jarak3, jarak4, jarak5, jarak6, jarak7, jarak8;
float ajarak, bjarak, ejarak, hasil, emir, erjarak;
int err, errr, lurus, err1, errr1, errr2, erk;
int data = 0, data1, dataatas;

/*-----------TANDA SKENARIO----------------*/
#define maju 0
#define kiri1 1
#define kiri2 2
#define kanan1 3
#define kanan2 4
#define kanan 5
#define kiri 6
/*-----------garis----------------*/
#define O1 44
int garis1;
/*-----------servo----------------*/
Servo servo;

/*-----------huskylens----------------*/
#include "HUSKYLENS.h"
#include "SoftwareSerial.h"
//int result;
HUSKYLENS huskylens;
SoftwareSerial mySerial(10, 11); // RX, TX
//HUSKYLENS green line >> Pin 10; blue line >> Pin 11
void printResult(HUSKYLENSResult result);

/*-----------jalan----------------*/
int skenario = 1;
#define Home 1
#define jalan 2
#define cekpoint1 3
#define korbanki 4
#define korbanka 5
#define cekpoint2 6
#define korban1 7
#define posisi1 8
#define sukses 9
#define jalan1 10
#define detect 11

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(115200);//115200
  Serial2.begin(115200);
  //
  //    servo.attach(45);
  //  //
  //  //servo.write(79);//set tengah
  //  servo.write(170);

  /*-----------huskylens----------------*/
  mySerial.begin(9600);
  sethusky();
  /*-----------LCD----------------*/
  lcd.init();
  lcd.backlight();
  //pinMode(limit, INPUT_PULLUP);
  //servo.attach(45);
  //
  //servo.write(79);//set tengah
  //servo.write(170);
}

void loop() {
  Skenario_Robot();
  //garis();
  // runhusky();
  //  limitstate = digitalRead(limit);
  //  Serial.println(limitstate);
  //  limitt();
  //    kirimdata(76);
  //kirimdata(83);
  //servo.write(155);
  //  servo.write(50);
  //  cobamulai();
  //  cobapoint1(maju);
  //  poskorban1(maju);
  //  ambilkorban1(maju);
  //  sukses1(maju);
  //  point1(maju);
  //  cobapoint2(maju);
  //  cobapoint3(maju);
  //ultra(0);
  //ultra(2);
}
