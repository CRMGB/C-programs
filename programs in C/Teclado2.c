/////////////////////////////////////////////////////////////////////////
//   Manejo de Teclados para PIC16F876/877
//                    (c) 2008, Ramon Navarro Larrosa
//                         Libre distribución
//////////////////////////////////////////////////////////////////////////
//
// Nombre del fichero: Teclado2.c
// Fecha: 11/12/08
// Versión: v1.0
//
// Autor:            Ramon Navarro Larrosa
// Compañía:         IES EL PALMERAL Orihuela (Alicante)
// Email:            catflight3@hotmail.com  
// Url:      
// Modificado por:
// Compañía:
// Email:
// Url:
//
////////////////////////////////////////////////////////////////////////////
//descripción:  El siguiente programa utiliza el puerto b del microcontrolador
//  para manejar teclados de 4x4.Calculadora o teclado hexadecimal.Compatible 
//   con el manejo de un lcd con el mismo puerto
//  
//////////////////////////////////////////////////////////////////////////////



#byte portb=6

char GETTECLA()
   {
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   /*Habilitar el comentario de layaout del teclado y desabilitar los no usados*/
   
   /*INT const TECLAS [4][4] = {{7,8,9,12},  //Layout del teclado.
                              {4,5,6,13},
                              {1,2,3,14},
                              {11,0,16,15}};*/
   /*char const TECLAS[4][4] = {{'7','8','9','/'},
                            {'4','5','6','*'},
                            {'1','2','3','-'},
                            {'C','0','=','+'}};*/
                            

   char const TECLAS[4][4] = {{'7','8','9','/'},
                            {'4','5','6','*'},
                            {'1','2','3','-'},
                            {'C','0','=','+'}};
   //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   char tecla='\0';
   int f,c;
   
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   port_b_pullups(TRUE);
   set_tris_b(0x0f);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   while(tecla=='\0')
      {
         portb=0xef;
         for(f=0;f<4;f++)
           {
               if(f==1) portb=0xdf;
               if(f==2) portb=0xbf;
               if(f==3) portb=0x7f;

               for(c=0;c<4;c++)
               {
                  if((!bit_test (portb, c)))
                  {
                  WHILE((bit_test (portb, C))==0);
                  RETURN TECLA = TECLAS[f][c];
                  }
               }

            }

      }
   }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

