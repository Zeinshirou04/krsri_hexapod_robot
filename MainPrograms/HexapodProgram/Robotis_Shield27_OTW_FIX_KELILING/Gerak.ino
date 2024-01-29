void dyn(int ID, float pos, float speed) {
  pos = pos ;
  dxl.setGoalPosition(ID, pos, UNIT_DEGREE);
  dxl.setGoalVelocity(ID, speed);
}

void maju(int kec, int tunda) {
  angkat_kaki145(kec); //angkat145
  coxa145_maju(kec, 15); // maju145
  coxa236_idle(kec); //awal236
  delay (tunda);
  turun_kaki145(kec); //turun145
  delay (tunda);
  
  angkat_kaki236(kec); //angkat236
  coxa236_maju(kec, 15); //maju236
  coxa145_idle(kec); //awal145
  delay (tunda);
  turun_kaki236(kec); //turun236
  delay (tunda);

//  angkat_kaki145(kec); //angkat145
//  coxa145_maju(kec, 25); // maju145
//  coxa236_idle(kec); //awal236
//  delay (tunda);
//  turun_kaki145(kec); //turun145
//  delay (tunda);
//  
//  angkat_kaki236(kec); //angkat236
//  coxa236_maju(kec, 25); //maju236
//  coxa145_idle(kec); //awal145
//  delay (tunda);
//  turun_kaki236(kec); //turun236
//  delay (tunda);
}

void kanan(int kec, int tunda) {
  angkat_kanan145(kec, 20); //angkat kanan145
  delay (tunda);
  turun_kanan145(kec); //turun kanan145
  angkat_kanan236(kec, 20); //angkat kiri236
  delay (tunda);
  turun_kanan236(kec); //turun kiri236
}

void kiri(int kec, int tunda) {
  angkat_kiri145(kec, 20); //angkat kanan145
  delay (tunda);
  turun_kiri145(kec); //turun kanan145
  angkat_kiri236(kec, 20); //angkat kiri236
  delay (tunda);
  turun_kiri236(kec); //turun kiri236
}

void beki(int kec, int tunda) {
  angkat_kaki145(kec); //angkat145
  coxa145_beki(kec, 10); // maju145
  coxa236_idle(kec); //awal236
  delay (tunda);
  turun_kaki145(kec); //turun145
  delay (tunda);
  angkat_kaki236(kec); //angkat236
  coxa236_beki(kec, 10); //maju236
  coxa145_idle(kec); //awal145
  delay (tunda);
  turun_kaki236(kec); //turun236
  delay (tunda);
}

void beka(int kec, int tunda) {
  angkat_kaki145(kec); //angkat145
  coxa145_beka(kec, 10); // maju145
  coxa236_idle(kec); //awal236
  delay (tunda);
  turun_kaki145(kec); //turun145
  delay (tunda);
  angkat_kaki236(kec); //angkat236
  coxa236_beka(kec, 10); //maju236
  coxa145_idle(kec); //awal145
  delay (tunda);
  turun_kaki236(kec); //turun236
  delay (tunda);
}

void mundur(int kec, int tunda) {
  angkat_kaki145(kec); //angkat145
  coxa145_mundur(kec, 15); // maju145
  coxa236_idle(kec); //awal236
  delay (tunda);
  turun_kaki145(kec); //turun145
  delay (tunda);
  angkat_kaki236(kec); //angkat236
  coxa236_mundur(kec, 15); //maju236
  coxa145_idle(kec); //awal145
  delay (tunda);
  turun_kaki236(kec); //turun236
  delay (tunda);
}
