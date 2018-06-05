#include <exe18.h>
#define LCD_ENABLE_PIN PIN_B1
#define LCD_RS_PIN PIN_B2
#define LCD_RW_PIN PIN_B4
#define LCD_DATA4 PIN_D4
#define LCD_DATA5 PIN_D5
#define LCD_DATA6 PIN_D6
#define LCD_DATA7 PIN_D7


#define ADC_CLOCK_DIV_16 

#include <lcd.c> //bilbioteca LCD

float i,j, altura;
void main()
{
   setup_adc_ports(AN0); //entrada A0 do pic analogico
   setup_adc(ADC_CLOCK_INTERNAL); 
   lcd_init(); //FUNCAO DO LCD 
   
   lcd_putc("\f Iniciando...");
   delay_ms(1000);
   
   lcd_putc("\f Fazendo \n leitura...");
   delay_ms(1000);
   
   while(TRUE)
   {  
         set_adc_channel(0);
         i = read_adc();
            
         if(i < 20){
            lcd_putc("\f Tensao = 0");
            lcd_putc("\n Altura = 0");
         }
         
         if( ( i > 21) && (i < 62)){
            lcd_putc("\f Tensao = 0.25");
            lcd_putc("\n Altura = 1 ");
         }
         
         if((i > 65) && (i < 105)){
            lcd_putc("\f Tensao = 0.5");
            lcd_putc("\n Altura = 2 ");
         }
         
         if((i > 105) && (i < 155)){
            lcd_putc("\f Tensao = 0.75");
            lcd_putc("\n Altura = 3 ");
         }
         
         if((i > 156) && (i < 185)){
            lcd_putc("\f Tensao = 1");
            lcd_putc("\n Altura = 4 ");
         }
         
         if((i > 186) && (i < 240)){
            lcd_putc("\f Tensao = 1.25");
            lcd_putc("\n Altura = 5 ");
         }
         
         if((i > 241) && (i < 254)){
            lcd_putc("\f Tensao = 1.5");
            lcd_putc("\n Altura = 6 ");
         }
         
         if((i > 259) && (i < 282)){
            lcd_putc("\f Tensao = 1.75");
            lcd_putc("\n Altura = 7 ");
         }
         
         if((i > 283) && (i < 317)){
            lcd_putc("\f Tensao = 2");
            lcd_putc("\n Altura = 8 ");
         }
         
         if((i > 319) && (i < 339)){
            lcd_putc("\f Tensao = 2.25");
            lcd_putc("\n Altura = 9 ");
         }
         
         if((i > 340) && (i < 358)){
            lcd_putc("\f Tensao = 2.5");
            lcd_putc("\n Altura = 10 ");
         }
         
         if((i > 359) && (i < 395)){
            lcd_putc("\f Tensao = 2.75");
            lcd_putc("\n Altura = 11 ");
         }
         
         if((i > 396) && (i < 400)){
            lcd_putc("\f Tensao = 3");
            lcd_putc("\n Altura = 12 ");
         }
         
         if((i > 401) && (i < 431)){
            lcd_putc("\f Tensao = 3.25");
            lcd_putc("\n Altura = 13 ");
         }
         
         if((i > 433) && (i < 440)){
            lcd_putc("\f Tensao = 3.5");
            lcd_putc("\n Altura = 14 ");
         }
         
         if((i > 441) && (i < 456)){
            lcd_putc("\f Tensao = 3.75");
            lcd_putc("\n Altura = 15 ");
         }
         
         if((i > 457) && (i < 464)){
            lcd_putc("\f Tensao = 4");
            lcd_putc("\n Altura = 16 ");
         }
         
         if((i > 465) && (i < 473)){
            lcd_putc("\f Tensao = 4.25");
            lcd_putc("\n Altura = 17 ");
         }
         
         if((i > 474) && (i < 481)){
            lcd_putc("\f Tensao = 4.5");
            lcd_putc("\n Altura = 18 ");
         }
         
         if((i > 482) && (i < 490)){
            lcd_putc("\f Tensao = 4.75");
            lcd_putc("\n Altura = 19 ");
         }
         
         if(i >= 490 ){
            lcd_putc("\f Tensao = 5");
            lcd_putc("\n Altura = 20 ");
         }
         
                 
         //printf(lcd_putc,"\f Sensor : %f",i);
         delay_ms(1000);
   }

}
