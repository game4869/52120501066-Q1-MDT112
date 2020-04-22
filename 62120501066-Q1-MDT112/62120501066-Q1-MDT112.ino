void setup() {
Serial.begin(9600);
pinMode(2, INPUT_PULLUP); 
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);  
pinMode(5, OUTPUT); 
pinMode(6, OUTPUT); 
pinMode(7, OUTPUT); 
pinMode(8, OUTPUT); 
pinMode(9, OUTPUT);  
pinMode(10, OUTPUT);
pinMode(11, OUTPUT); 
pinMode(12, OUTPUT);  
pinMode(13, OUTPUT);   
tone(8,200,500);
delay(250);
tone(8,400,100);
}
int count = 1;  
int led = 3;  
int times = 100;

void loop() {

digitalWrite(3,1);  
delay(100); 
digitalWrite(4,1);
delay(100);
digitalWrite(5,1);
delay(100);
digitalWrite(6,1);   
delay(100);
digitalWrite(7,1);
delay(100);
digitalWrite(8,1);
delay(100);
digitalWrite(9,1);   
delay(100);
digitalWrite(10,1);
delay(100);
digitalWrite(11,1);
delay(100);
digitalWrite(12,1);
delay(100);
digitalWrite(13,1);
delay(100);
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(10,0);
digitalWrite(11,0);
digitalWrite(12,0);
digitalWrite(13,0);
delay(100);
 if(count==1){
    times*2;
    Serial.println("Faster X2 (Current Speed : X"+String(2)+")");
    count++;
    }
else if(count==2){
    times*2;
    Serial.println("Faster X2 (Current Speed : X"+String(4)+")");
    count++;
}
else if(count==3){
    times*2;
    Serial.println("Faster X2 (Current Speed : X"+String(8)+")");
    count++;
}
else if(count>3){
    times*2;
    Serial.println("Faster X2 (Current Speed : X"+String(count*count)+")");
    count++;
}
}