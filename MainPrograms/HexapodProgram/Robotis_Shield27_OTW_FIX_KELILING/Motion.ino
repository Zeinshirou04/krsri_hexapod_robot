void pos_robot(){
  deka();
  tengka();
  beka();
  deki();
  tengki();
  beki();
}

//motion angkat
void angkat_kaki145(int kec){
    
    dyn(13, ID13-80, 300);
    dyn(6, ID6-80, 300);
    dyn(19, ID19-80, 300);
    
    dyn(12, ID12-80,kec ); //-naik +turun
    dyn(5, ID5-80,kec ); //-naik +turun
    dyn(18, ID18-80,kec ); //-naik +turun  
}
void turun_kaki145(int kec){
    dyn(13, ID13, 300);
    dyn(6, ID6, 300);
    dyn(19, ID19, 300);
    
    dyn(12, ID12,kec );
    dyn(5, ID5,kec ); 
    dyn(18, ID18,kec );   
}
void angkat_kaki236(int kec){
    dyn(2, ID2-80,kec ); //-naik +turun
    dyn(15, ID15-80,kec ); //-naik +turun
    dyn(8, ID8-80,kec ); //-naik +turun
    
    dyn(9, ID9-80, 300);
    dyn(16, ID16-80, 300);
    dyn(3, ID3-80, 300);
}
void turun_kaki236(int kec){
    dyn(2, ID2,kec );
    dyn(15, ID15,kec );
    dyn(8, ID8,kec );
    
    dyn(9, ID9, 300);
    dyn(16, ID16, 300);
    dyn(3, ID3, 300);
}

//MOTION MAJU
void coxa145_maju(int kec, int sudut){
    dyn(11, ID11+sudut,kec );
    dyn(4, ID4-10,kec);
    dyn(17, ID17+sudut,kec ); 
}
void coxa236_maju(int kec, int sudut){
    dyn(1, ID1-10,kec );
    dyn(14, ID14+sudut,kec);
    dyn(7, ID7-10,kec );
}

void coxa145_idle(int kec){
    dyn(11, ID11,kec );
    dyn(4, ID4,kec);
    dyn(17, ID17,kec ); 
}
void coxa236_idle(int kec){
    dyn(1, ID1,kec );
    dyn(14, ID14,kec);
    dyn(7, ID7,kec );
}

//MOTION BELOK KIRI
void coxa145_beki(int kec, int sudut){
    dyn(11, ID11-sudut,kec );
    dyn(4, ID4-sudut,kec);
    dyn(17, ID17-sudut,kec ); 
}
void coxa236_beki(int kec, int sudut){
    dyn(1, ID1-sudut,kec );
    dyn(14, ID14-sudut,kec);
    dyn(7, ID7-sudut,kec );
}

//MOTION BELOK KANAN
void coxa145_beka(int kec, int sudut){
    dyn(11, ID11+sudut,kec );
    dyn(4, ID4+sudut,kec);
    dyn(17, ID17+sudut,kec ); 
}
void coxa236_beka(int kec, int sudut){
    dyn(1, ID1+sudut,kec );
    dyn(14, ID14+sudut,kec);
    dyn(7, ID7+sudut,kec );
}

//MOTION MUNDUR
void coxa145_mundur(int kec, int sudut){
    dyn(11, ID11-sudut,kec );
    dyn(4, ID4+10,kec);
    dyn(17, ID17-sudut,kec ); 
}
void coxa236_mundur(int kec, int sudut){
    dyn(1, ID1+10,kec );
    dyn(14, ID14-sudut,kec);
    dyn(7, ID7+10,kec );
}

// MOTION KANAN program baru masih trial
void angkat_kanan145(int kec,int sudut){
    dyn(11, ID11,kec );
    dyn(4, ID4,kec ); 
    dyn(17, ID17,kec ); 
    
    dyn(13, ID13-(2*sudut), 300);//-keluar +masuk
    dyn(6, ID6+sudut, 300); //-keluar +masuk
    dyn(19, ID19-(2*sudut), 300); //-keluar +masuk
    
    dyn(12, ID12-10,kec );
    dyn(5, ID5-10,kec ); 
    dyn(18, ID18-10,kec ); 
}
void turun_kanan145(int kec){
    dyn(11, ID11,kec );
    dyn(4, ID4,kec ); 
    dyn(17, ID17,kec ); 
    
    dyn(13, ID13, 300);
    dyn(6, ID6, 300);
    dyn(19, ID19, 300);
    
    dyn(12, ID12,kec );
    dyn(5, ID5,kec ); 
    dyn(18, ID18,kec );  
}
void angkat_kanan236(int kec, int sudut){
    dyn(1, ID1,kec );
    dyn(14, ID14,kec ); 
    dyn(7, ID7,kec ); 
    
    dyn(9, ID9+sudut, 300);
    dyn(16, ID16-(2*sudut), 300);
    dyn(3, ID3+sudut, 300);
    
    dyn(2, ID2-10,kec );
    dyn(15, ID15-10,kec );
    dyn(8, ID8-10,kec );
}
void turun_kanan236(int kec){
    dyn(1, ID1,kec );
    dyn(14, ID14,kec ); 
    dyn(7, ID7,kec ); 

    dyn(9, ID9, 300);
    dyn(16, ID16, 300);
    dyn(3, ID3, 300);
    
    dyn(2, ID2,kec );
    dyn(15, ID15,kec );
    dyn(8, ID8,kec );
}


// MOTION KIRI program baru masih trial
void angkat_kiri145(int kec,int sudut){
    dyn(11, ID11,kec );
    dyn(4, ID4,kec ); 
    dyn(17, ID17,kec ); 
    
    dyn(13, ID13+sudut, 300);//-keluar +masuk
    dyn(6, ID6-(2*sudut), 300); //-keluar +masuk
    dyn(19, ID19+sudut, 300); //-keluar +masuk
    
    dyn(12, ID12-10,kec );
    dyn(5, ID5-10,kec ); 
    dyn(18, ID18-10,kec ); 
}
void turun_kiri145(int kec){
    dyn(11, ID11,kec );
    dyn(4, ID4,kec ); 
    dyn(17, ID17,kec ); 
    
    dyn(13, ID13, 300);
    dyn(6, ID6, 300);
    dyn(19, ID19, 300);
    
    dyn(12, ID12,kec );
    dyn(5, ID5,kec ); 
    dyn(18, ID18,kec );  
}
void angkat_kiri236(int kec, int sudut){
    dyn(1, ID1,kec );
    dyn(14, ID14,kec ); 
    dyn(7, ID7,kec ); 
    
    dyn(9, ID9-(2*sudut), 300);
    dyn(16, ID16+sudut, 300);
    dyn(3, ID3-(2*sudut), 300);
    
    dyn(2, ID2-10,kec );
    dyn(15, ID15-10,kec );
    dyn(8, ID8-10,kec );
}
void turun_kiri236(int kec){
    dyn(1, ID1,kec );
    dyn(14, ID14,kec ); 
    dyn(7, ID7,kec ); 

    dyn(9, ID9, 300);
    dyn(16, ID16, 300);
    dyn(3, ID3, 300);
    
    dyn(2, ID2,kec );
    dyn(15, ID15,kec );
    dyn(8, ID8,kec );
}
