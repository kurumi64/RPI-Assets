// Deklarasi Kunci Piano
#include "piano.h"

// Setting Kunci Piano agar jadi sebuah melodi
int melody[] = {
  NOTE_D6, NOTE_E6, NOTE_FS6, NOTE_G6, NOTE_A6, NOTE_A6, 
  NOTE_AS6, NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, 
  NOTE_G6, NOTE_A6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, 
  NOTE_A6, NOTE_F6, NOTE_E6, NOTE_D6, NOTE_D6, NOTE_E6, 
  NOTE_F6, NOTE_G6, NOTE_A6, NOTE_G6, NOTE_F6, NOTE_E6, 
  NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_GS6, NOTE_GS6, 
  NOTE_A6, NOTE_AS6, NOTE_A6, NOTE_D6, 0
};
// durasi tiap kunci, makin besar nilainya semakin cepat ketukannya
int durasiMusiks[] = {4, 4, 4, 4, 2, 3, 1, 4, 4, 4, 4, 2, 3, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 3, 1, 4, 1, 2, 1};

// musik akan terus berjalan sampe nilai yang telah ditentukan
void startUp(){
  for (int kunciPiano = 0; kunciPiano < 41; kunciPiano++) {
    int durasiMusik = 1000 / durasiMusiks[kunciPiano];
    tone(8, melody[kunciPiano], durasiMusik);
    int istirahat = durasiMusik * 1.30;
    delay(istirahat);
    noTone(8);
  }  
}

void setup(){
  //matikan pakai tanda // kalau mau mematikan suara startUp
  startUp();
}

void loop(){
  //Kosong
}
