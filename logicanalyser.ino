// C++ code
// Created by V. Dupo, ECE
// 20 Oct 2022

// This is a make shift logic analyser pins 2 - 13 are all configured to be digital inputs 
// Connect them to your I/O pins and 
// Open up the Serial Plotter (Tool-> Plotter on your Arduino IDE)
// Once Open it should show the state of the connected inputs
// 


bool ichi,ni,san,ji,go,roku,nana,hachi,kyu,ju,ctan;
byte ch[8];
long unsigned toki,etoki,oras;



void setup()
{
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  Serial.begin(9600);
  toki=millis();
}



void loop()
{
 ichi=digitalRead(2);
 ni=digitalRead(3); 
 san=digitalRead(4);
 ji=digitalRead(5);
 go=digitalRead(6);
 roku=digitalRead(7);
 nana=digitalRead(8);
 hachi=digitalRead(9);
 kyu=digitalRead(10);
 ju=digitalRead(11);
  if(ichi==HIGH) {ch[0]=30; } else { ch[0]=0; }
  if(ni==HIGH) {ch[1]=50; } else { ch[1]=40; }
  if(san==HIGH) {ch[2]=65; } else { ch[2]=60; }
  if(ji==HIGH) {ch[3]=75; } else { ch[3]=70; }
  if(go==HIGH) {ch[4]=105; } else { ch[4]=100; }
  if(roku==HIGH) {ch[5]=125; } else { ch[5]=120; }
  if(nana==HIGH) {ch[6]=165; } else { ch[6]=160; }
  if(hachi==HIGH) {ch[7]=205; } else { ch[7]=200; }
  if(kyu==HIGH) {ch[8]=235; } else { ch[8]=230; }
  if(ju==HIGH) {ch[9]=255; } else { ch[9]=250; }
 Serial.print(ch[0]);
 Serial.print(" ");
 Serial.print(ch[1]);
 Serial.print(" ");
 Serial.print(ch[2]);
 Serial.print(" ");
 Serial.print(ch[3]);
 Serial.print(" ");
 Serial.print(ch[4]);
 Serial.print(" ");
 Serial.print(ch[5]);
 Serial.print(" ");
 Serial.print(ch[6]);
 Serial.print(" ");
 Serial.print(ch[7]);
 Serial.print(" ");
 Serial.print(ch[8]);
 Serial.print(" ");
 Serial.println(ch[9]);
}
