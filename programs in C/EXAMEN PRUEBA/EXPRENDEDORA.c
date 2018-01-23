#include "EXPRENDEDORA.h"

#include "LCD.C"
#include "KBD.C"

#define LCD_TYPE 1

#int_EXT

   EXT_isr()
{
//#bit Led_Interruptor=6.5
#bit Pulsador_Interruptor=7.0

}

int a;

CHAR O;
//unsigned long int valor;


void main()
{ 
   int16 valor;
   float voltios;
   
   lcd_init();
   
   setup_adc_ports(RA0_ANALOG);
   setup_adc(ADC_CLOCK_INTERNAL);

   //setup_timer_0(RTCC_INTERNAL|RTCC_DIV_256);
   
   set_adc_channel(0);
   
//  ***********************************************
  setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   enable_interrupts(INT_EXT);
   enable_interrupts(GLOBAL);
  
  
  while(1)
   {
      valor=read_adc(); 
      delay_ms(20);
      voltios=valor*5.0/1023;
      lcd_gotoxy(1,1);
     // printf(LCD_PUTC, "VOLTIOS==> %1.2f",voltios);
      
      
 //********************************************     
      
      port_b_pullups(0xff);
      lcd_init();
      kbd_init();
      a=0;
      printf(LCD_PUTC,"\f Pulse una tecla");
      
      while(a==0) a=kbd_getc();
      //printf(LCD_PUTC,"\f La tecla es %C", a);
      //printf("\f La tecla es %C", a);
      printf(LCD_PUTC,"\f Agua");
       delay_ms(1000);  
      while(a==0) a=kbd_getc();
      printf(LCD_PUTC,"\f Chocolatina");
       delay_ms(1000);  
      while(a==0) a=kbd_getc();
      printf(LCD_PUTC,"\f Zumo");
       delay_ms(1000);  
      while(a==0) a=kbd_getc();
      printf(LCD_PUTC,"\f Coca cola");
      delay_ms(1000);  
     while(a==0) a=kbd_getc();
     printf(LCD_PUTC,"\f Naranja");
       delay_ms(1000);  
      while(a==0) a=kbd_getc();
      printf(LCD_PUTC,"\f Limon");
       delay_ms(1000);  
      while(a==0) a=kbd_getc();
      printf(LCD_PUTC,"\f Chicles");
       delay_ms(1000);  
      while(a==0) a=kbd_getc();
      printf(LCD_PUTC,"\f Chuches");
       delay_ms(1000);  
      while(a==0) a=kbd_getc();
      printf(LCD_PUTC,"\f Fritos");
      delay_ms(1000);  
      
      
    // SWITCH(O)
     // {
         //CASE '1':
         //lcd_init();
         //WHILE(GETTECLA()!='=');
         //printf(LCD_PUTC,"\f Agua");
       //  printf("\f Agua");
        // break;

       //  CASE '2':
        // lcd_init();
         //WHILE(GETTECLA()!='=');
       //  printf(LCD_PUTC,"\f Chocolatina");
       //  break;

        // CASE '3':
         //lcd_init();
       //  WHILE(GETTECLA()!='=');
       //  printf(LCD_PUTC,"\f Zumo");
      //   break;

       //  CASE '4':
         //lcd_init();
         //WHILE(GETTECLA()!='=');
      //   printf(LCD_PUTC,"\f Coca cola");
      //   break;

      //   CASE '5':
         //lcd_init();
        // WHILE(GETTECLA()!='=');
     //    printf(LCD_PUTC,"\f Naranja");
     //    break;

        // CASE '6':
         //lcd_init();
        // WHILE(GETTECLA()!='=');
        // printf(LCD_PUTC,"\f Limon");
        //// break;

        // CASE '7':
         //lcd_init();
        // WHILE(GETTECLA()!='=');
       //  printf(LCD_PUTC,"\f Chicles");
       //  break;
        
       // CASE '8':
        // lcd_init();
        // WHILE(GETTECLA()!='=');
        // printf(LCD_PUTC,"\f Chuches");
        // break;
        
       // CASE '9':
         //lcd_init();
        // WHILE(GETTECLA()!='=');
       //  printf(LCD_PUTC,"\f Fritos");
       //  break;
        
       // default:
       //  lcd_init();
       //  printf(LCD_PUTC,"\F ERROR");
       //  break;

     // }
      
   }
}
