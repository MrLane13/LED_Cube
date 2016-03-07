/*
 * ORIGINAL AUTHOR: Devin
 * EDITING CONTRIBUTOR: Lane Mills
 * LAST UPDATED: 03/07/16
 * 
 * This code is meant to be used on a 3x3x3 LED Cube
 * comprising of three 3x3 LED platforms, all soldered ontop
 * of one another, with each platform ground being hooked
 * up to one 330 OHm resistor.
 * 
 * First in this project are the methods utilized by the main
 * function. Notice we are using pins 2-10 for the rowxcolumn
 * connections on our LED Cube, and pins 11-13 for our GND
 * or platform grounding connections.
 * 
 */


// Clears the LED's state to off
void Clr()
{
  digitalWrite(2,LOW); 
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW); 
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);//ground platform 1 W/ 330 OHm resistor
  digitalWrite(12,HIGH);//ground platform 2 W/ 330 OHm resistor
  digitalWrite(13,HIGH);//ground platform 3 W/ 330 OHm resistor

}

// Sets the LED's state to all on
void On()
{
  digitalWrite(2,HIGH); 
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH); 
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);//ground
  digitalWrite(12,LOW);//ground
  digitalWrite(13,LOW);//ground
}

// Rotates around center
void Center(int n)
{
  
 Clr();
  digitalWrite(12,LOW);
  digitalWrite(6,HIGH); 
  delay(n);
  digitalWrite(13,LOW);
  digitalWrite(11,LOW);
  delay(n);
  On();
  digitalWrite(12,HIGH);
  delay(n);
  On();
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  delay(n);
  On();
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(n);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(n);
  Clr();
  for(int i=0;i<=1;i++)
  {
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(9,HIGH);
     delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
     delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(8,HIGH);
    delay(n);
    Clr();
 }
}

// n is interval time in ms
void RowStack(int n)
{
  digitalWrite(11,LOW);
  digitalWrite(2,HIGH); 
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(n);
  digitalWrite(12,LOW);
  digitalWrite(2,HIGH); 
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  digitalWrite(2,HIGH); 
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(n);
  Clr();
  digitalWrite(11,LOW);
  digitalWrite(5,HIGH); 
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(n);
  digitalWrite(12,LOW);
  digitalWrite(5,HIGH); 
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(n);
  digitalWrite(13,LOW);
  digitalWrite(5,HIGH); 
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(n);
  Clr();
  digitalWrite(11,LOW);
  digitalWrite(8,HIGH); 
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(n);
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH); 
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(n);
  digitalWrite(13,LOW);
  digitalWrite(8,HIGH); 
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(n);
  Clr();
}

void CenterSpin(int n,int amnt,int increase)
{
  n=n+increase;
 for(int j =0;j<=amnt;j++)
 {
   n=n-increase;

   for(int i=0;i<=1;i++)
   {
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(9,HIGH);
    delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
    delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(8,HIGH);
    delay(n);
    Clr();
  }
 }
}

// Run around the edges
void Edges(int n, int amnt, int increase)
{
  n= n+ increase;
  for(int j =0;j<=amnt;j++)
  {
    n=n-increase;
    digitalWrite(11,LOW);
    digitalWrite(2,HIGH);
    delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(2,HIGH);
    delay(n);
    Clr();
    digitalWrite(13,LOW);
    digitalWrite(2,HIGH);
    delay(n);
    Clr();
    digitalWrite(13,LOW);
    digitalWrite(5,HIGH);
    delay(n);
    Clr();
    digitalWrite(13,LOW);
    digitalWrite(8,HIGH);
    delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(8,HIGH);
    delay(n);
    Clr();
    digitalWrite(11,LOW);
    digitalWrite(8,HIGH);
    delay(n);
    Clr();
    digitalWrite(11,LOW);
    digitalWrite(9,HIGH);
    delay(n);
    Clr();
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(10,HIGH);
    delay(n);
    Clr();
    digitalWrite(13,LOW);
    digitalWrite(10,HIGH);
    delay(n);
    Clr();
    digitalWrite(13,LOW);
    digitalWrite(7,HIGH);
    delay(n);
    Clr();
    digitalWrite(13,LOW);
    digitalWrite(4,HIGH);
    delay(n);
    Clr();
    digitalWrite(12,LOW);
    digitalWrite(4,HIGH);
    delay(n);
    Clr();
    digitalWrite(11,LOW);
    digitalWrite(4,HIGH);
    delay(n);
    Clr();
    digitalWrite(11,LOW);
    digitalWrite(3,HIGH);
    delay(n);
    Clr();
    digitalWrite(11,LOW);
    digitalWrite(2,HIGH);
    delay(n);
    Clr();
    delay(n);
  }
}


// Initialize everything
void setup() 
{
  // put your setup code here, to run once:
 //r1
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  //r2
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  //r3
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  //ground
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(2,LOW); 
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW); 
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);//gound
  digitalWrite(12,HIGH);//gound
  digitalWrite(13,HIGH);//gound
  CenterSpin(500,2,150);
  CenterSpin(150,5,0);
  Edges(350,2,150);
  RowStack(100);
}
