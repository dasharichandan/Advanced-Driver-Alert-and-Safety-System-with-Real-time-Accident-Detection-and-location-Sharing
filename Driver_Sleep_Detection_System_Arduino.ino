const int motorpin =4;
const int buzzer_Pin = 3;
const int led_Pin =2;
char sleep_status = 0;

void setup() {
  
  Serial.begin(9600);  {
  pinMode(motorpin,OUTPUT);
  pinMode(buzzer_Pin, OUTPUT);
  pinMode(led_Pin, OUTPUT);
  
  
  digitalWrite(buzzer_Pin, LOW); 
  digitalWrite(led_Pin, LOW);
  digitalWrite(motorpin, HIGH);
  }
}
void loop() 
{
     while(Serial.available() > 0) 
  {
    sleep_status = Serial.read();
    if(sleep_status == 'a')
    { 
         


        
        digitalWrite(motorpin, LOW);

        digitalWrite(buzzer_Pin, HIGH); 
        digitalWrite(led_Pin, HIGH);
        
        delay(2000);
        
    }
    else if(sleep_status == 'b')
    {
        
        digitalWrite(motorpin, HIGH);
        digitalWrite(buzzer_Pin, LOW); 
        digitalWrite(led_Pin, LOW);

                delay(2000);
     

    }
    else
    {
    }
  }
}
