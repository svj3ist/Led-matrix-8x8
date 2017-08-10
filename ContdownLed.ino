int DATA=8;// Контакт Data на сдвиговом регистре, на 8 контакт ардуино.
int LATCH=9;// Контакт Latch, на 9 контакт.
int CLK=10;// Контакт Clock, на 10 контакт.

  const byte digits[][8] = {
{
  B11100111,//Сам рисунок для матрицы 8X8,Восемь строк, по восемь бит.Единица, светодиод горит. Ноль не горит.Массив из изобрахений
  B10100101,
  B10100101,
  B10100101,
  B10100101,
  B10100101,
  B10100101,
  B11100111
},{
  B11100001,
  B10100001,
  B10100001,
  B10100001,
  B10100001,
  B10100001,
  B10100001,
  B11100001
},{
  B11100111,
  B10100101,
  B10100001,
  B10100001,
  B10100001,
  B10100010,
  B10100100,
  B11100111
},{
  B11100111,
  B10100001,
  B10100001,
  B10100111,
  B10100001,
  B10100001,
  B10100001,
  B11100111
},{
  B11100101,
  B10100101,
  B10100101,
  B10100111,
  B10100001,
  B10100001,
  B10100001,
  B11100001
},{
  B11100111,
  B10100100,
  B10100100,
  B10100111,
  B10100001,
  B10100001,
  B10100001,
  B11100111
},{
  B11100111,
  B10100100,
  B10100100,
  B10100111,
  B10100101,
  B10100101,
  B10100101,
  B11100111
},{
  B11100111,
  B10100001,
  B10100001,
  B10100001,
  B10100001,
  B10100001,
  B10100001,
  B11100001
},{
  B11100111,
  B10100101,
  B10100101,
  B10100111,
  B10100101,
  B10100101,
  B10100101,
  B11100111
},{
  B11100111,
  B10100101,
  B10100101,
  B10100111,
  B10100001,
  B10100001,
  B10100001,
  B11100111
},{
  B00100111,
  B00100101,
  B00100101,
  B00100101,
  B00100101,
  B00100101,
  B00100101,
  B00100111
},{
  B00100001,
  B00100001,
  B00100001,
  B00100001,
  B00100001,
  B00100001,
  B00100001,
  B00100001
},{
  B00100111,
  B00100101,
  B00100001,
  B00100001,
  B00100001,
  B00100010,
  B00100100,
  B00100111
},{
  B00100111,
  B00100001,
  B00100001,
  B00100111,
  B00100001,
  B00100001,
  B00100001,
  B00100111
},{
  B00100101,
  B00100101,
  B00100101,
  B00100111,
  B00100001,
  B00100001,
  B00100001,
  B00100001
},{
  B00100111,
  B00100100,
  B00100100,
  B00100111,
  B00100001,
  B00100001,
  B00100001,
  B00100111
},{
  B00100111,
  B00100100,
  B00100100,
  B00100111,
  B00100101,
  B00100101,
  B00100101,
  B00100111
},{
  B00100111,
  B00100001,
  B00100001,
  B00100001,
  B00100001,
  B00100001,
  B00100001,
  B00100001
},{
  B00100111,
  B00100101,
  B00100101,
  B00100111,
  B00100101,
  B00100101,
  B00100101,
  B00100111
},{
  B00100111,
  B00100101,
  B00100101,
  B00100111,
  B00100001,
  B00100001,
  B00100001,
  B00100111
},{
  B11100111,
  B10100101,
  B00100101,
  B00100101,
  B00100101,
  B01000101,
  B10000101,
  B11100111
},{
  B01100110,
  B10011001,
  B10000001,
  B10000001,
  B10000001,
  B01000010,
  B00100100,
  B00011000 
},{
  B10000001,
  B01000010,
  B00100100,
  B00011000,
  B00011000,
  B00100100,
  B01000010,
  B10000001
},{
  B00000000,
  B00111100,
  B01100110,
  B01100110,
  B01111110,
  B01100110,
  B01100110,
  B01100110
},{
  B00000000,
  B01111100,
  B01100110,
  B01100110,
  B01111100,
  B01100110,
  B01100110,
  B01111100
},{
  B00000000,
  B00111100,
  B01100110,
  B01100000,
  B01100000,
  B01100000,
  B01100110,
  B00111100
},{
  B00000000,
  B01111100,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01111100
},{
  B00000000,
  B01111110,
  B01100000,
  B01100000,
  B01111100,
  B01100000,
  B01100000,
  B01111110
},{
  B00000000,
  B01111110,
  B01100000,
  B01100000,
  B01111100,
  B01100000,
  B01100000,
  B01100000
},{
  B00000000,
  B00111100,
  B01100110,
  B01100000,
  B01100000,
  B01101110,
  B01100110,
  B00111100
},{
  B00000000,
  B01100110,
  B01100110,
  B01100110,
  B01111110,
  B01100110,
  B01100110,
  B01100110
},{
  B00000000,
  B00111100,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00111100
},{
  B00000000,
  B00011110,
  B00001100,
  B00001100,
  B00001100,
  B01101100,
  B01101100,
  B00111000
},{
  B00000000,
  B01100110,
  B01101100,
  B01111000,
  B01110000,
  B01111000,
  B01101100,
  B01100110
},{
  B00000000,
  B01100000,
  B01100000,
  B01100000,
  B01100000,
  B01100000,
  B01100000,
  B01111110
},{
  B00000000,
  B01100011,
  B01110111,
  B01111111,
  B01101011,
  B01100011,
  B01100011,
  B01100011
},{
  B00000000,
  B01100011,
  B01110011,
  B01111011,
  B01101111,
  B01100111,
  B01100011,
  B01100011
},{
  B00000000,
  B00111100,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B00111100
},{
  B00000000,
  B01111100,
  B01100110,
  B01100110,
  B01100110,
  B01111100,
  B01100000,
  B01100000
},{
  B00000000,
  B00111100,
  B01100110,
  B01100110,
  B01100110,
  B01101110,
  B00111100,
  B00000110
},{
  B00000000,
  B01111100,
  B01100110,
  B01100110,
  B01111100,
  B01111000,
  B01101100,
  B01100110
},{
  B00000000,
  B00111100,
  B01100110,
  B01100000,
  B00111100,
  B00000110,
  B01100110,
  B00111100
},{
  B00000000,
  B01111110,
  B01011010,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000
},{
  B00000000,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B00111110
},{
  B00000000,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B00111100,
  B00011000
},{
  B00000000,
  B01100011,
  B01100011,
  B01100011,
  B01101011,
  B01111111,
  B01110111,
  B01100011
},{
  B00000000,
  B01100011,
  B01100011,
  B00110110,
  B00011100,
  B00110110,
  B01100011,
  B01100011
},{
  B00000000,
  B01100110,
  B01100110,
  B01100110,
  B00111100,
  B00011000,
  B00011000,
  B00011000
},{
  B00000000,
  B01111110,
  B00000110,
  B00001100,
  B00011000,
  B00110000,
  B01100000,
  B01111110
},{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
},{
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00000110,
  B00111110,
  B01100110,
  B00111110
},{
  B00000000,
  B01100000,
  B01100000,
  B01100000,
  B01111100,
  B01100110,
  B01100110,
  B01111100
},{
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B01100110,
  B01100000,
  B01100110,
  B00111100
},{
  B00000000,
  B00000110,
  B00000110,
  B00000110,
  B00111110,
  B01100110,
  B01100110,
  B00111110
},{
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B01100110,
  B01111110,
  B01100000,
  B00111100
},{
  B00000000,
  B00011100,
  B00110110,
  B00110000,
  B00110000,
  B01111100,
  B00110000,
  B00110000
},{
  B00000000,
  B00000000,
  B00111110,
  B01100110,
  B01100110,
  B00111110,
  B00000110,
  B00111100
},{
  B00000000,
  B01100000,
  B01100000,
  B01100000,
  B01111100,
  B01100110,
  B01100110,
  B01100110
},{
  B00000000,
  B00000000,
  B00011000,
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B00111100
},{
  B00000000,
  B00001100,
  B00000000,
  B00001100,
  B00001100,
  B01101100,
  B01101100,
  B00111000
},{
  B00000000,
  B01100000,
  B01100000,
  B01100110,
  B01101100,
  B01111000,
  B01101100,
  B01100110
},{
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000
},{
  B00000000,
  B00000000,
  B00000000,
  B01100011,
  B01110111,
  B01111111,
  B01101011,
  B01101011
},{
  B00000000,
  B00000000,
  B00000000,
  B01111100,
  B01111110,
  B01100110,
  B01100110,
  B01100110
},{
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B01100110,
  B01100110,
  B01100110,
  B00111100
},{
  B00000000,
  B00000000,
  B01111100,
  B01100110,
  B01100110,
  B01111100,
  B01100000,
  B01100000
},{
  B00000000,
  B00000000,
  B00111100,
  B01101100,
  B01101100,
  B00111100,
  B00001101,
  B00001111
},{
  B00000000,
  B00000000,
  B00000000,
  B01111100,
  B01100110,
  B01100110,
  B01100000,
  B01100000
},{
  B00000000,
  B00000000,
  B00000000,
  B00111110,
  B01000000,
  B00111100,
  B00000010,
  B01111100
},{
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B01111110,
  B00011000,
  B00011000,
  B00011000
},{
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B00111110
},{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01100110,
  B00111100,
  B00011000
},{
  B00000000,
  B00000000,
  B00000000,
  B01100011,
  B01101011,
  B01101011,
  B01101011,
  B00111110
},{
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B00111100,
  B00011000,
  B00111100,
  B01100110
},{
  B00000000,
  B00000000,
  B00000000,
  B01100110,
  B01100110,
  B00111110,
  B00000110,
  B00111100
},{
  B00000000,
  B00000000,
  B00000000,
  B00111100,
  B00001100,
  B00011000,
  B00110000,
  B00111100
}};

int ryad[] = {
  B01111111,
  B10111111,
  B11011111,
  B11101111,
  B11110111,
  B11111011,
  B11111101,
  B11111110};

int timer = 1000;//задержка между изображениями
int frame = 75;//количество изображений в массиве
void setup()
{
  pinMode(DATA,OUTPUT);
  pinMode(LATCH,OUTPUT);
  pinMode(CLK,OUTPUT);
}
void loop()
{
  for(int x=0;x<=frame;x++)
  {
while(timer*x >= millis())
{
      for(int i=0;i<=7;i++)
      {
      


      
      
  digitalWrite(LATCH,LOW);//На Latch подаётся ноль, отщёлкивая регистр.
  shiftOut(DATA,CLK,LSBFIRST,digits[x][i]);//строки, слева на право (1 горит)
  shiftOut(DATA,CLK,MSBFIRST,ryad[i]);//Ряды которые переключаются по очереди слева на право.
  digitalWrite(LATCH,HIGH);//На Latch подаётся единица, защёлкивая регистр.
      
      }
      }//без этого куска, после завершения, некоторые светодиоды продолжают гореть
     digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLK,LSBFIRST,B0000000);
  shiftOut(DATA,CLK,LSBFIRST,B0000000);
  digitalWrite(LATCH,HIGH);

}
 
}
