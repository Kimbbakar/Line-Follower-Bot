int black=0;
int white=1; 
int lmotor_f=2,lmotor_b=3,lmotor_speed=10;  //declaring 2 motor pins for left motor and 1 pin for controlling speed
int rmotor_f=5,rmotor_b=6,rmotor_speed=11;  //declaring 2 motor pins for right motor and 1 pin for controlling speed
int last=0;

//declaring eight sensor pins

//int sensor1=A0;
int sensor2=A0;
int sensor3=A1;
int sensor4=A2;
int sensor5=A3;
int sensor6=A4;
int sensor7=A5;
//int sensor8=9;


void setup() {
  Serial.begin(9600);
  // setting all motor pins as outputs
  
  pinMode(lmotor_f,OUTPUT);
  pinMode(lmotor_b,OUTPUT);
  pinMode(lmotor_speed,OUTPUT);  
  pinMode(rmotor_f,OUTPUT);
  pinMode(rmotor_b,OUTPUT);
  pinMode(rmotor_speed,OUTPUT);

  //setting all sensor pins as inputs

 // pinMode(sensorwhite,INPUT);
  pinMode(sensor2,INPUT);
  pinMode(sensor3,INPUT);
  pinMode(sensor4,INPUT);
  pinMode(sensor5,INPUT);
  pinMode(sensor6,INPUT);
  pinMode(sensor7,INPUT);
 // pinMode(sensor8,INPUT);
}



void loop() {

  //taking 8 variable and getting reading 0 or 1 from sensors
  //0 means on white surface and 1 means on black line
  //int sen8=digitalRead(sensor1);
  int sen7=digitalRead(sensor2);
  int sen6=digitalRead(sensor3);
  int sen5=digitalRead(sensor4);
  int sen4=digitalRead(sensor5);
  int sen3=digitalRead(sensor6);
  int sen2=digitalRead(sensor7);
  //int sen1=digitalRead(sensor8);


  //Serial.print(digitalRead(sensor1));
  //Serial.print("  ");
  Serial.print(digitalRead(sensor7));
  Serial.print("   ");
  Serial.print(digitalRead(sensor6));
  Serial.print("   ");
  Serial.print(digitalRead(sensor5));
  Serial.print("   ");
  Serial.print(digitalRead(sensor4));
  Serial.print("   ");
  Serial.print(digitalRead(sensor3));
  Serial.print("   ");
  Serial.print(digitalRead(sensor2));
  Serial.print("   ");
  //Serial.print(digitalRead(sensor8));
  Serial.println("   ");
  //delay(100);

// code for forward move

  if(sen2==black && sen3==black && sen4==white && sen5==white && sen6==black && sen7==black)
  { 
    
    forward();  // our middle two sensors are on black line only.
                //so we are going forward
  }
  else if(sen2==black && sen3==black && sen4==black && sen5==white && sen6==white && sen7==black)
  { 
    
    forward();  // our middle two sensors are on black line only.
                //so we are going forward
  }
  else if(sen2==black && sen3==white && sen4==white && sen5==black && sen6==black && sen7==black)
  { 
    
    forward();  // our middle two sensors are on black line only.
                //so we are going forward
  }
  else if(sen2==black && sen3==black && sen4==white && sen5==black && sen6==black && sen7==black)
  { 
    
    forward();  // our middle two sensors are on black line only.
                //so we are going forward
  }
  else if(sen2==black && sen3==black && sen4==black && sen5==white && sen6==black && sen7==black)
  { 
    
    forward();  // our middle two sensors are on black line only.
                //so we are going forward
  }  
//  else if(sen2==black && sen3==black && sen4==black && sen5==black && sen6==black && sen7==black)
//  {
//   Stop();  //try to find the track 
//  }

// code for right move

  else if(sen2==black && sen3==black && sen4==black && sen5==black && sen6==black && sen7==white)
  {
   right(); //our most right sensor is on black line so we are moving right
  }

   else if(sen2==black && sen3==black && sen4==black && sen5==black && sen6==white && sen7==white)
  {
     right(); //our most right sensor is on black line so we are moving right
  }
   else if(sen2==black && sen3==black && sen4==black && sen5==white && sen6==white && sen7==white)
  {
    right(); //our most right sensor is on black line so we are moving right
  }
   else if(sen2==black && sen3==black && sen4==white && sen5==white && sen6==white && sen7==white)
  {
    right(); //our most right sensor is on black line so we are moving right
  }
   else if(sen2==black && sen3==white && sen4==white && sen5==white && sen6==white && sen7==white)
  {
    right(); //our most right sensor is on black line so we are moving right
  }
  else if(sen2==white && sen3==white && sen4==white && sen5==white && sen6==white && sen7==white)
  {
    right();   //all our sensors are on black line so we are moving left
  }
//  else if(sen2==white && sen3==white && sen4==black && sen5==black && sen6==white && sen7==white)
//  {
//    right();   //all our sensors are on black line so we are moving left
//  }
  else if(sen2==black && sen3==white && sen4==white && sen5==white && sen6==white && sen7==white)
  {
    right();   //all our sensors are on black line so we are moving left
  }
  else if(sen2==white && sen3==white && sen4==black && sen5==black && sen6==black && sen7==white)
  {
    right();   //all our sensors are on black line so we are moving left
  }
   else if(sen2==black && sen3==white && sen4==white && sen5==white && sen6==black && sen7==black)
  {
    right();   //our most left sensor is on black line so we are moving left
  }
   else if(sen2==black && sen3==black && sen4==white && sen5==white && sen6==black && sen7==white)
  {
    right();   //our most left sensor is on black line so we are moving left
  }

  
  else if(sen2==white && sen3==black && sen4==black && sen5==black && sen6==black && sen7==black)
  {
   left();   //our most left sensor is on black line so we are moving left
  }
  else if(sen2==white && sen3==white && sen4==black && sen5==black && sen6==black && sen7==black)
  {
    left();   //our most left sensor is on black line so we are moving left
  }
    else if(sen2==white && sen3==white && sen4==white && sen5==black && sen6==black && sen7==black)
  {
  left();   //our most left sensor is on black line so we are moving left
  }

  else if(sen2==white && sen3==white && sen4==white && sen5==white && sen6==black && sen7==black)
  {
  left();   //our most left sensor is on black line so we are moving left
  }
   else if(sen2==white && sen3==white && sen4==white && sen5==white && sen6==white && sen7==black)
  {
  left();   //our most left sensor is on black line so we are moving left
  }
   else if(sen2==black && sen3==black && sen4==black && sen5==black && sen6==black && sen7==black)
   {
     left();
   }

//   else if(sen2==black && sen3==white && sen4==white && sen5==white && sen6==white && sen7==black)
//  {
//    left();   //entering the hexagon
//  }
  else
  {
    if(last==1) forward();
    else if(last==2) left();
    else if(last==3) right(); 
  }

}


void forward()
{ 
  //writing motor speed value

  last=1;
  analogWrite(lmotor_speed,0);
  analogWrite(rmotor_speed,150);
  
  digitalWrite(lmotor_f,HIGH);
  digitalWrite(lmotor_b,LOW);
  digitalWrite(rmotor_f,HIGH);
  digitalWrite(rmotor_b,LOW); 
}

void special()
{
  Serial.println("sorry sir, im going to left");
  analogWrite(lmotor_speed,120);
  analogWrite(rmotor_speed,180);
  
  digitalWrite(lmotor_f,HIGH);
  digitalWrite(lmotor_b,LOW);
  digitalWrite(rmotor_f,LOW);
  digitalWrite(rmotor_b,HIGH);   
}

void left()
{
  last=2;
  Serial.println("sorry sir, im going to left");
  analogWrite(lmotor_speed,150);
  analogWrite(rmotor_speed,120);
  
  digitalWrite(lmotor_f,HIGH);
  digitalWrite(lmotor_b,LOW);
  digitalWrite(rmotor_f,LOW);
  digitalWrite(rmotor_b,HIGH);
}

void right()
{ 
  last=3;
  Serial.println("sorry nigga, im going to right");
  analogWrite(lmotor_speed,120);
  analogWrite(rmotor_speed,150);
  
  digitalWrite(lmotor_f,LOW);
  digitalWrite(lmotor_b,HIGH);
  digitalWrite(rmotor_f,HIGH);
  digitalWrite(rmotor_b,LOW);
}


void Stop()
{
  analogWrite(lmotor_speed,0);
  analogWrite(rmotor_speed,0);
  
  digitalWrite(lmotor_f,LOW);
  digitalWrite(lmotor_b,LOW);
  digitalWrite(rmotor_f,LOW);
  digitalWrite(rmotor_b,LOW);
}


