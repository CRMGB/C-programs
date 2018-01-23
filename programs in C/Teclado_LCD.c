#include "Teclado_LCD.h"
#include "LCD.C"
#include "Teclado2.c"
unsigned long int valor; //al tratarse de 10 vits debe ser long

int a;
float voltios;
void main()
{
while(1)
   {
    port_b_pullups(0xff);
    lcd_init();
    GETTECLA();
    a=0;
    
    
     printf(LCD_PUTC,"\f Elija un producto");
      delay_ms(500);
   
     //while(a=0) 
     //a=kbd_getc();
     while(a==0) a=GETTECLA();
     //a=kbd_getc();
     // a=getc(); //leer el caracter
     
      
     
     switch   (a)
          { 
         case'1':
         
       ///  while(a==0)a=kbd_getc();
         printf(LCD_PUTC,"\f Agua PVP=1");
         delay_ms(1000);
         
          valor=read_adc(); //leemos el acnal que hemos seleccionado
          delay_ms(10); //tiempo necesario para leer el dato analogico
          voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
          
               if(voltios>=3||voltios<3.99);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
        break;
         
         case'2':
         
       // while(a==0) a=kbd_getc();
         
         printf(LCD_PUTC,"\f Chocolat.PVP=2");
        
          valor=read_adc(); //leemos el acnal que hemos seleccionado
          delay_ms(10); //tiempo necesario para leer el dato analogico
          voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
          
               if(voltios==2);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
            break; 
            
         case'3':
    
            //while(a==0)a=kbd_getc();
            printf(LCD_PUTC,"\f Zumo PVP=3");
            valor=read_adc(); //leemos el acnal que hemos seleccionado
            delay_ms(10); //tiempo necesario para leer el dato analogico
            voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
          
               if(voltios==2);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
        break;
        
         case'4':
         
          // while(a==0) a=kbd_getc();
            printf(LCD_PUTC,"\f barrita PVP=4");
            valor=read_adc(); //leemos el acnal que hemos seleccionado
            delay_ms(10); //tiempo necesario para leer el dato analogico
            voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
          
               if(voltios==2);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
   
   break;
   
         case'5':
         
           //while(a==0) a=kbd_getc();
            printf(LCD_PUTC,"\f coca-cola PVP=5");
            
            valor=read_adc(); //leemos el acnal que hemos seleccionado
            delay_ms(10); //tiempo necesario para leer el dato analogico
            voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
             
               if(voltios==2);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
         break;
         
         
         case'6':
         
       // while(a==0) a=kbd_getc();
         printf(LCD_PUTC,"\f Fant.limonPVP=6");
         
         valor=read_adc(); //leemos el acnal que hemos seleccionado
         delay_ms(10); //tiempo necesario para leer el dato analogico
         voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
          
               if(voltios==2);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
         break;
         
         case'7':
         
        //while(a==0) a=kbd_getc();
         printf(LCD_PUTC,"\f Fant.naranjPVP=7");
         valor=read_adc(); //leemos el acnal que hemos seleccionado
         delay_ms(10); //tiempo necesario para leer el dato analogico
         voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
          
               if(voltios==2);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
         break;
         
         case'8':
         
        // while(a==0)a=kbd_getc();
         printf(LCD_PUTC,"\f aquariusPVP=8");
         valor=read_adc(); //leemos el acnal que hemos seleccionado
         delay_ms(10); //tiempo necesario para leer el dato analogico
         voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
          
               if(voltios==2);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
         break;
   
         case'9':
         
       //  while(a==0)a=kbd_getc();
         printf(LCD_PUTC,"\f patatasPVP=9"); 
         valor=read_adc(); //leemos el acnal que hemos seleccionado
         delay_ms(10); //tiempo necesario para leer el dato analogico
         voltios=valor*5.0/1023;// fórmula para calcular los voltios: VALORdigital*tension de referencia/nº de escalones
          
               if(voltios==2);
               {
               printf(LCD_PUTC,"\fPuede retirar");
               printf(LCD_PUTC,"\n el prducto");
               }
   
   break;
   /*{
      port_b_pullups(0xff);
      lcd_init();
      kbd_init();
      a=0;
      printf(LCD_PUTC,"\f Pulse una tecla");
      while(a==0) a=kbd_getc();
      printf(LCD_PUTC,"\f La tecla es %C", a);
      delay_ms(1000);
      */
      
   }  
   }
}
