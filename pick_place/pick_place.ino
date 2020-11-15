char t;

void setup() {
  // put your setup code here, to run once:
  
  //motor drive1
  //wheel 1
pinMode(2,OUTPUT); //in1
pinMode(3,OUTPUT);//in 2
pinMode(4,OUTPUT); // en1
 //wheel 2
pinMode(5,OUTPUT); //in 3
pinMode(6,OUTPUT); // in 4
pinMode(7,OUTPUT); // en2
 //motor drive 2, wheel 1
 
pinMode(8,OUTPUT); // in1
pinMode(9,OUTPUT); // in2 
pinMode(10,OUTPUT);// en1
 // wheel 2
 pinMode(11,OUTPUT); // in3
 pinMode(12,OUTPUT); // in4
 pinMode(13,OUTPUT);// en2


Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 t=Serial.read();
 
  if (t=='a')//forward 
  {analogWrite(2,200);
  digitalWrite(3,0);
  digitalWrite(5,1);
  analogWrite(6,200);
 }
 else if (t=='b')//backward
   { analogWrite(2,0);
    analogWrite(3,100);
    digitalWrite(5,0);
    analogWrite(6,100);
 }
  else if (t=='c')//left;
      {analogWrite(6,75);
      digitalWrite(2,0);
      analogWrite(3,10);
      digitalWrite(5,0);
  }
 else if(t=='d')//right;
  { analogWrite(3,75);
   digitalWrite(2,0);
   digitalWrite(5,0);
   analogWrite(6,10);
   }
   else if (t=='e')//close
   {digitalWrite(8,1);
   digitalWrite(9,0);
   delay(50); 
    }
    else if (t=='f')//open
   { digitalWrite(9,1);
    digitalWrite(8,0);
    delay(50);
    }
    else if(t=='g')//u
    {digitalWrite(11,1);
    digitalWrite(12,0);
    delay(50);
    }
    else if(t=='h')//down
  {  digitalWrite(12,1);
    digitalWrite(11,0);
    delay(50);
    }
    else if (t=='z')// stop
    {
      digitalWrite(3,0);
      digitalWrite(2,0);
      digitalWrite(5,0);
      digitalWrite(6,0);
      digitalWrite(8,0);
      digitalWrite(9,0);
      digitalWrite(11,0);
      digitalWrite(12,0);
    }
}
    
