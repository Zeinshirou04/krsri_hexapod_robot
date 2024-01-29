/*-----------library----------------*/
#include <DynamixelShield.h>
DynamixelShield dxl;
#include <NewPing.h>
#include <Servo.h>
Servo servo1, servo2, servo3, servo4;
int data;

/*-----------kaki kanan----------------*/
const uint8_t DXL_ID1 =  1;
const uint8_t DXL_ID2 =  2;
const uint8_t DXL_ID3 =  3;
const uint8_t DXL_ID4 =  4;
const uint8_t DXL_ID5 =  5;
const uint8_t DXL_ID6 =  6;
const uint8_t DXL_ID7 =  7;
const uint8_t DXL_ID8 =  8;
const uint8_t DXL_ID9 =  9;

/*-----------kaki kiri----------------*/
const uint8_t DXL_ID11 =  11;
const uint8_t DXL_ID12 =  12;
const uint8_t DXL_ID13 =  13;
const uint8_t DXL_ID14 =  14;
const uint8_t DXL_ID15 =  15;
const uint8_t DXL_ID16 =  16;
const uint8_t DXL_ID17 =  17;
const uint8_t DXL_ID18 =  18;
const uint8_t DXL_ID19 =  19;

/*-----------gripper----------------*/
const uint8_t DXL_ID10 =  10;

/*-----------protocol version----------------*/
const float DXL_PROTOCOL_VERSION = 1.0;
using namespace ControlTableItem;

/*-----------sudut kaki kanan----------------*/
int ID1 = 180; //-maju +mundur191 170
int ID2 = 180; //+turun -naik
int ID3 = 180; //+keluar -masuk
int ID4 = 150; //-maju +mundur150 123
int ID5 = 180; //+turun -naik
int ID6 = 180; //+keluar -masuk
int ID7 = 200; //-maju +mundur188 169
int ID8 = 180; //+turun -naik
int ID9 = 180; //+keluar -masuk

/*-----------sudut kaki kiri----------------*/
int ID11 = 200; //+maju -mundur194 219
int ID12 = 180; //+turun -naik
int ID13 = 180; //+keluar -masuk
int ID14 = 150; //+maju -mundur147 172
int ID15 = 180; //+turun -naik
int ID16 = 180; //+keluar -masuk
int ID17 = 180; //+maju -mundur192 217
int ID18 = 180; //+turun +naik
int ID19 = 180; //+keluar -masuk

/*-----------sudut kaki kanan----------------*/
int ID10 = 70; //-naik +turun

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(115200);//115200
  Serial2.begin(115200);
  dxl.begin(1000000);
  kal();
  /*-----------servo gripper----------------*/
  servo1.attach(34);
  servo2.attach(35);
  servo3.attach(36);
  servo4.attach(37);

  /*-----------posisi awal----------------*/
  //  stanby();
  //  gerak();
  pos_robot();
  stay();
  //  ambil();
  //  delay(5000);
  //servo1.write(100);
  //servo2.write(180);
  ////servo2.write(180);
  //delay(2000);
  //servo2.write(10);
  //servo1.write(10);

  //servo1.write(10);
  // pos_robot();
  //  delay(10000);
}

void loop() {
  //  ambil();
  //  delay(3000);
  //  stay();
  //  delay(3000);
  //  servo1.write(100);
  //  servo2.write(0);
  //  delay(1000);
  //  servo1.write(10);
  //  servo2.write(180);
  //bawah();
  //  tengah();
  //  maju(300, 350);
  //  coxa();
  //    angkat_kaki145(300); //angkat236
  //    coxa145_maju(300, 25);
  //    angkat_kaki236(300); //angkat236
  //    coxa236_maju(300, 25);
  if (Serial2.available()) {
    data = Serial2.read();
    Serial.println(data);
    if (data == 70) { //maju pelan
      maju(300, 200);
    }
    else if (data == 71) { //kiri pelan
      beki(300, 200);
    }
    else if (data == 72) { //kanan pelan
      beka(300, 200);
    }
    else if (data == 73) { //geser kanan pelan
      kanan(300, 200);
    }
    else if (data == 74) { //geser kiri pelan
      kiri(300, 200);
    }
    else if (data == 75) { //robot stanby
      pos_robot();
    }
    else if (data == 76) { //ambil korban
      ambil();
    }
    else if (data == 77) { //capit stanby
      stay();
    }
    else if (data == 78) { //kanan cepat
      beka(300, 70);
    }
    else if (data == 79) { //kiri cepat
      beki(300, 70);
    }
    else if (data == 80) { //mundur pelan
      mundur(300, 200);
    }
    else if (data == 81) { //maju cepat
      maju(300, 70);
    }
    else if (data == 82) { //gripper turun
      gripturun();
    }
    else if (data == 83) { //gripper turun
      bawakorban();
    }
    else if (data == 84) { //gripper turun
      taruh();
    }
    else if (data == 85) { //mundur cepat
      mundur(300, 70);
    }
    //    Serial2.flush();
    Serial2.end();
    Serial2.begin(115200);
  }
}
