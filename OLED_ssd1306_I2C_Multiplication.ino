/*
 * 
***************************
*12c ssd1306 128*64 oled display
*ekranda kucuk bir çarpım tablosu olusturur ve carpılacak olan sayıların cevaplarını yazar. 
**************************
ad: Albeza
mail: albezaaselbvv@gmail.com
Cezeri Yeşil Teknoloji MTAL' de Yenilenebilir Enerji Sistemleri öğrencisi
***************************
*
*
*/



#include "U8glib.h"
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);

void A();
void B();
void C();
void D();
void E();
void AK();
void G();
void H();
void I();
void J();
void K();
void L();
void M();
void N();
void O();
void P();
void R();
void S();
void T();
void U();
void V();
void Y();
void Z();
void AA();
void AB();
void AC();
void AD();
void AE();
void AF();
void AG();
void AH();
void AI();
void AJ();
void AN();
void AL();

const int sayfaSayisi = 35;
int p;
void (*sayfalar[sayfaSayisi])() = { A, B, C, D, E, AK, G, H, I, J, K, L, M, N, O, P, R, S, T, U, V, Y, Z, AA, AB, AC, AD, AE, AF, AG, AH ,AI, AJ, AN, AL };
int sure [sayfaSayisi] = { 1000, 1500, 500, 500, 500, 500, 500, 500, 1500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500,  500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 400, 2500,};

void setup() {
  u8g.setFont(u8g_font_unifont);
  u8g.setColorIndex(1);
  p = 0;
 }

void loop() {
  u8g.firstPage();
  do {
    (*sayfalar[p])();
  }while( u8g.nextPage() );
  delay(sure[p]);
  p = p+1;
  if (p == sayfaSayisi)
     p=0;
}

void A() {u8g.drawStr( 1, 1, "___________________________");
          u8g.drawStr( 4, 1, "___________________________");
          u8g.drawStr( 40, 13, "ALBEZA");
          u8g.drawStr( 1, 14, "___________________________");
          u8g.drawStr( 4, 14, "___________________________");
          u8g.drawStr( 1, 21, "........................");
          u8g.drawStr( 1, 31, "........................");
          u8g.drawStr( 1, 41, "........................");
          u8g.drawStr( 1, 51, "..........................");
          u8g.drawStr( 1, 61, "..........................");
          u8g.drawStr( 1, 71, ".........................");
}
void B() {u8g.drawStr( 1, 2, "_________________");
          u8g.drawStr( 3, 2, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 60, "_________________");
          u8g.drawStr( 3, 60, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 1, 10, "|");
          u8g.drawStr( 1, 20, "|");
          u8g.drawStr( 1, 30, "|");
          u8g.drawStr( 1, 40, "|");
          u8g.drawStr( 1, 50, "|");
          u8g.drawStr( 1, 60, "|");
          u8g.drawStr( 1, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 120, 10, "|");
          u8g.drawStr( 120, 20, "|");
          u8g.drawStr( 120, 30, "|");
          u8g.drawStr( 120, 40, "|");
          u8g.drawStr( 120, 50, "|");
          u8g.drawStr( 120, 60, "|");
          u8g.drawStr( 120, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
          
    }

    
void C() {u8g.drawStr( 1, 7, "_________________");
          u8g.drawStr( 3, 7, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 55, "_________________");
          u8g.drawStr( 3, 55, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 6, 10, "|");
          u8g.drawStr( 6, 20, "|");
          u8g.drawStr( 6, 30, "|");
          u8g.drawStr( 6, 40, "|");
          u8g.drawStr( 6, 50, "|");
          u8g.drawStr( 6, 60, "|");
          u8g.drawStr( 6, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 115, 10, "|");
          u8g.drawStr( 115, 20, "|");
          u8g.drawStr( 115, 30, "|");
          u8g.drawStr( 115, 40, "|");
          u8g.drawStr( 115, 50, "|");
          u8g.drawStr( 115, 60, "|");
          u8g.drawStr( 115, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ

}


void D() {u8g.drawStr( 1, 12, "_________________");
          u8g.drawStr( 3, 12, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 50, "_________________");
          u8g.drawStr( 3, 50, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 11, 10, "|");
          u8g.drawStr( 11, 20, "|");
          u8g.drawStr( 11, 30, "|");
          u8g.drawStr( 11, 40, "|");
          u8g.drawStr( 11, 50, "|");
          u8g.drawStr( 11, 60, "|");
          u8g.drawStr( 11, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 110, 10, "|");
          u8g.drawStr( 110, 20, "|");
          u8g.drawStr( 110, 30, "|");
          u8g.drawStr( 110, 40, "|");
          u8g.drawStr( 110, 50, "|");
          u8g.drawStr( 110, 60, "|");
          u8g.drawStr( 110, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
  
  }
void E() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 16, 10, "|");
          u8g.drawStr( 16, 20, "|");
          u8g.drawStr( 16, 30, "|");
          u8g.drawStr( 16, 40, "|");
          u8g.drawStr( 16, 50, "|");
          u8g.drawStr( 16, 60, "|");
          u8g.drawStr( 16, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 105, 10, "|");
          u8g.drawStr( 105, 20, "|");
          u8g.drawStr( 105, 30, "|");
          u8g.drawStr( 105, 40, "|");
          u8g.drawStr( 105, 50, "|");
          u8g.drawStr( 105, 60, "|");
          u8g.drawStr( 105, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
  
  }


void AK() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 21, 10, "|");
          u8g.drawStr( 21, 20, "|");
          u8g.drawStr( 21, 30, "|");
          u8g.drawStr( 21, 40, "|");
          u8g.drawStr( 21, 50, "|");
          u8g.drawStr( 21, 60, "|");
          u8g.drawStr( 21, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 100, 10, "|");
          u8g.drawStr( 100, 20, "|");
          u8g.drawStr( 100, 30, "|");
          u8g.drawStr( 100, 40, "|");
          u8g.drawStr( 100, 50, "|");
          u8g.drawStr( 100, 60, "|");
          u8g.drawStr( 100, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ

}

void G() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
  

}
void H() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
  
// İŞLEM YAPMA TABLOSU HAZIRLANDI
  }


  
void I() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ
  }

  
void J() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
  
  }

  
void K() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
  
  
  }
void L() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK
  
  
  
  }

void M() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
  
  
  
  
  }
void N() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK
  
  
  }
void O() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 43, 36, "?");      // ? İŞARETİ EKLENDİ İLK SONUÇ SATIRINA
              u8g.drawStr( 78, 36, "?"); 
              u8g.drawStr( 110, 36, "?");
  
  
  }

  
void P() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

                   // ? İŞARETİ EKLENDİ İLK SONUÇ SATIRINA 
                   // İLK KUTUDAN ? İSARETİ KALDIRILDI
              u8g.drawStr( 78, 36, "?"); 
              u8g.drawStr( 110, 36, "?");
  
  }
  
void R() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 78, 36, "?"); 
              u8g.drawStr( 110, 36, "?");
  
  }
void S() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 78, 36, ""); // İKİNCİ KUTUDAN SORU İŞARETİ KALDIRILDI
              u8g.drawStr( 110, 36, "?");
  
  }
void T() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 110, 36, "?");
  
  }
void U() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 110, 36, "");  // UCUNCU KUTUNUN SORU İSARETİ KALKTI...
  
  }
void V() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 107, 36, "60");  // UCUNCU KUTUYA CEVABI YAZILDI.        
  
  
  }

  
void Y() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 107, 36, "60");  // UCUNCU KUTUYA CEVABI YAZILDI. 



     // CEVAPLARIN İKİNCİ SATIRI:::::

              u8g.drawStr( 43, 62, "?"); // KUTULARA SORU İŞARETİ KONULDU. 3 KUTUYADA
              u8g.drawStr( 78, 62, "?"); 
              u8g.drawStr( 110, 62, "?");  
  
  }


  
void Z() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 107, 36, "60");  // UCUNCU KUTUYA CEVABI YAZILDI. 



     // CEVAPLARIN İKİNCİ SATIRI:::::

              u8g.drawStr( 43, 62, ""); // İLK KUTUDAN SORU İŞARETİ KALDIRILDI
              u8g.drawStr( 78, 62, "?"); 
              u8g.drawStr( 110, 62, "?");  
  
  
  }
void AA() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 107, 36, "60");  // UCUNCU KUTUYA CEVABI YAZILDI. 



     // CEVAPLARIN İKİNCİ SATIRI:::::

              u8g.drawStr( 40, 62, "30"); // İLK KUTUYA CEVAPI YAZILDI
              u8g.drawStr( 78, 62, "?"); 
              u8g.drawStr( 110, 62, "?");  
  
  
  }
void AB() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 107, 36, "60");  // UCUNCU KUTUYA CEVABI YAZILDI. 



     // CEVAPLARIN İKİNCİ SATIRI:::::

              u8g.drawStr( 40, 62, "30"); // İLK KUTUYA CEVAPI YAZILDI
              u8g.drawStr( 78, 62, "");  // İKİNCİ KUTUNUN SORU İŞARETİ KALKTI
              u8g.drawStr( 110, 62, "?"); 
  
  }
void AC() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 107, 36, "60");  // UCUNCU KUTUYA CEVABI YAZILDI. 



     // CEVAPLARIN İKİNCİ SATIRI:::::

              u8g.drawStr( 40, 62, "30"); // İLK KUTUYA CEVAPI YAZILDI
              u8g.drawStr( 75, 62, "60"); // İKİNCİ KUTUYA CEVABI YAZILDI
              u8g.drawStr( 110, 62, "?"); 
  
  }
void AD() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 107, 36, "60");  // UCUNCU KUTUYA CEVABI YAZILDI. 



     // CEVAPLARIN İKİNCİ SATIRI:::::

              u8g.drawStr( 40, 62, "30"); // İLK KUTUYA CEVAPI YAZILDI
              u8g.drawStr( 75, 62, "60"); // İKİNCİ KUTUYA CEVABI YAZILDI
              u8g.drawStr( 110, 62, "");  // SON KUTUNUN SORU İŞARETİ KALDIRILDI
  
  }
void AE() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DİKEY DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DİKEY DUZZ ÇİZGİ


          // CARPMA İŞARET EKLENECEK  HEMEN ASSADA

          u8g.drawStr( 10, 10, "x");  // CARPMA EKLENDİ


          //İŞLEMSEL İFADELER


          u8g.drawStr( 39, 10, "10");     // UST KISIM 10 SYSINI EKLEDİK
          u8g.drawStr( 73, 10, "20");     // UST KISIM 20 SYSINI EKLEDİK
          u8g.drawStr( 107, 10, "30");    // UST KISIM 30 SYSINI EKLEDİK

          u8g.drawStr( 10, 36, "2");      // SOL SUTUNA 2 CARPANINI EKLEDİK
          u8g.drawStr( 10, 62, "3");      // SOL SUTUNA 3 CARPANINI EKLEDİK


// İŞLEM SONUÇLARI :::

              u8g.drawStr( 40, 36, "20"); // İLK KUTUNUN CEVABI EKLENDİ
              u8g.drawStr( 75, 36, "40"); // İKİNCİ KUTUYA CEVAP YAZILDI
              u8g.drawStr( 107, 36, "60");  // UCUNCU KUTUYA CEVABI YAZILDI. 



     // CEVAPLARIN İKİNCİ SATIRI:::::

              u8g.drawStr( 40, 62, "30"); // İLK KUTUYA CEVAPI YAZILDI
              u8g.drawStr( 75, 62, "60"); // İKİNCİ KUTUYA CEVABI YAZILDI
              u8g.drawStr( 107, 62, "90");  // SON KUTUYA CEVABI YAZILDI 
  
  
  }
void AF() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DUZ CİZGİ


          u8g.drawStr( 60, 10, "|");
          u8g.drawStr( 60, 20, "|");
          u8g.drawStr( 60, 30, "|");
          u8g.drawStr( 60, 40, "|");
          u8g.drawStr( 60, 50, "|");
          u8g.drawStr( 60, 60, "|");
          u8g.drawStr( 60, 64, "|");  // ORTADKİ DİKEY DUZ CİZGİ
          
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
          //H
  
  }
void AG() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 26, 10, "|");
          u8g.drawStr( 26, 20, "|");
          u8g.drawStr( 26, 30, "|");
          u8g.drawStr( 26, 40, "|");
          u8g.drawStr( 26, 50, "|");
          u8g.drawStr( 26, 60, "|");
          u8g.drawStr( 26, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 95, 10, "|");
          u8g.drawStr( 95, 20, "|");
          u8g.drawStr( 95, 30, "|");
          u8g.drawStr( 95, 40, "|");
          u8g.drawStr( 95, 50, "|");
          u8g.drawStr( 95, 60, "|");
          u8g.drawStr( 95, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
          //G
  }
void AH() {u8g.drawStr( 1, 17, "_________________");
          u8g.drawStr( 3, 17, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 45, "_________________");
          u8g.drawStr( 3, 45, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 16, 10, "|");
          u8g.drawStr( 16, 20, "|");
          u8g.drawStr( 16, 30, "|");
          u8g.drawStr( 16, 40, "|");
          u8g.drawStr( 16, 50, "|");
          u8g.drawStr( 16, 60, "|");
          u8g.drawStr( 16, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 105, 10, "|");
          u8g.drawStr( 105, 20, "|");
          u8g.drawStr( 105, 30, "|");
          u8g.drawStr( 105, 40, "|");
          u8g.drawStr( 105, 50, "|");
          u8g.drawStr( 105, 60, "|");
          u8g.drawStr( 105, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
          // VOİD İS ""E"
  }
void AI() {u8g.drawStr( 1, 7, "_________________");
          u8g.drawStr( 3, 7, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 55, "_________________");
          u8g.drawStr( 3, 55, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 6, 10, "|");
          u8g.drawStr( 6, 20, "|");
          u8g.drawStr( 6, 30, "|");
          u8g.drawStr( 6, 40, "|");
          u8g.drawStr( 6, 50, "|");
          u8g.drawStr( 6, 60, "|");
          u8g.drawStr( 6, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 115, 10, "|");
          u8g.drawStr( 115, 20, "|");
          u8g.drawStr( 115, 30, "|");
          u8g.drawStr( 115, 40, "|");
          u8g.drawStr( 115, 50, "|");
          u8g.drawStr( 115, 60, "|");
          u8g.drawStr( 115, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
          //C VOİD  
  
  }
void AJ() {u8g.drawStr( 1, 2, "_________________");
          u8g.drawStr( 3, 2, "_________________");  //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 1, 60, "_________________");
          u8g.drawStr( 3, 60, "_________________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 1, 10, "|");
          u8g.drawStr( 1, 20, "|");
          u8g.drawStr( 1, 30, "|");
          u8g.drawStr( 1, 40, "|");
          u8g.drawStr( 1, 50, "|");
          u8g.drawStr( 1, 60, "|");
          u8g.drawStr( 1, 64, "|");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 120, 10, "|");
          u8g.drawStr( 120, 20, "|");
          u8g.drawStr( 120, 30, "|");
          u8g.drawStr( 120, 40, "|");
          u8g.drawStr( 120, 50, "|");
          u8g.drawStr( 120, 60, "|");
          u8g.drawStr( 120, 64, "|");  // SAĞDAKİ DUZZ ÇİZGİ
  }


void AN(){ u8g.drawStr( 18, 20, "___________");
          u8g.drawStr( 40, 20, "_______");
          u8g.drawStr( 21, 20, "___________");   //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 18, 42, "___________");
          u8g.drawStr( 40, 20, "_______");
          u8g.drawStr( 21, 42, "___________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 20, 10, "");
          u8g.drawStr( 20, 20, "");
          u8g.drawStr( 20, 30, "|");
          u8g.drawStr( 20, 38, "|");
          u8g.drawStr( 20, 44, "|");
          u8g.drawStr( 20, 60, "");
          u8g.drawStr( 20, 64, "");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 100, 10, "");
          u8g.drawStr( 100, 20, "");
          u8g.drawStr( 100, 30, "|");
          u8g.drawStr( 100, 38, "|");
          u8g.drawStr( 100, 44, "|");
          u8g.drawStr( 100, 60, "");
          u8g.drawStr( 100, 64, "");  // SAĞDAKİ DUZZ ÇİZGİ
}

void AL(){ u8g.drawStr( 18, 20, "___________");
          u8g.drawStr( 40, 20, "_______");
          u8g.drawStr( 21, 20, "___________");   //USTTEKİ DUZ CİZGİ 
          
          u8g.drawStr( 18, 42, "___________");
          u8g.drawStr( 40, 20, "_______");
          u8g.drawStr( 21, 42, "___________");  // ALTYAKİ DUZ CİZGİ
          
          u8g.drawStr( 20, 10, "");
          u8g.drawStr( 20, 20, "");
          u8g.drawStr( 20, 30, "|");
          u8g.drawStr( 20, 38, "|");
          u8g.drawStr( 20, 44, "|");
          u8g.drawStr( 20, 60, "");
          u8g.drawStr( 20, 64, "");  //  SOLDAKİ DUZ CİZGİ
          
          u8g.drawStr( 100, 10, "");
          u8g.drawStr( 100, 20, "");
          u8g.drawStr( 100, 30, "|");
          u8g.drawStr( 100, 38, "|");
          u8g.drawStr( 100, 44, "|");
          u8g.drawStr( 100, 60, "");
          u8g.drawStr( 100, 64, "");  // SAĞDAKİ DUZZ ÇİZGİ

          u8g.drawStr( 41, 36, "CeZeRi");

           
}

