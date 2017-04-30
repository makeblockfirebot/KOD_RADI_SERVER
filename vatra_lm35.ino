int var=0;
int temp=0;
int gaslevel;

void setup() {

  pinMode(A0, INPUT);
  pinMode(7,OUTPUT);
  pinMode(A1,INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
var = analogRead(A0);
temp=(5*var*100)/1024;
Serial.print("Temp =");
Serial.println(temp);
if(temp>40)
digitalWrite(7,HIGH);
else
digitalWrite(7,LOW);


Serial.print("Gas =");

  


  gaslevel=(analogRead(A1));
  gaslevel=map(gaslevel,0,1023,0,255);
 Serial.print("Gas =");
 
  Serial.println(gaslevel);
  delay(200);

  if (gaslevel>65 || temp>50)
  {
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    delay(2000);
  }
  else
  digitalWrite(6,HIGH);
  
  
  }





