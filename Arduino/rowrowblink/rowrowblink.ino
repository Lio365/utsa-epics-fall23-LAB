int C4 = 262;
int halfnote = 900;
int output = 13;
int D4 = 294;
int E4 = 330;
int F4 = 349;
int G4 = 392;
int dotquarter = 900;
int quarter = 667;
int sixteenth = 333;
int dothalf = 2000;

  int led_pin1=13;
  int led_pin2=12;
  int blink_duration1 = 500;
    int blink_duration2 = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,led_pin1);
  digitalWrite(13,HIGH);
  delay(blink_duration1);
  pinMode(13,led_pin1);
  digitalWrite(13,LOW);
  delay(blink_duration1);

  for (int i = 0; i < 3; i++){
    // Measure 1, 2 seconds
    // C4
    tone(output, C4);    // tone(outputPin,frequency)
      delay(dotquarter);  //  delay(milliseconds) 
    noTone(output);
      delay(100);
    // C4
    tone(output, C4);   
      delay(dotquarter);   
    noTone(output);  
      delay(100);  
    // Measure 2, 2 seconds
    // C4
    tone(output, C4);    
      delay(quarter);  
    // D4
    tone(output, D4);    
      delay(sixteenth);  
    // E4
    tone(output, E4);    
      delay(dotquarter);   
    noTone(output);
      delay(100);
    // Measure 3, 2 seconds
    // E4
    tone(output, E4);    
      delay(quarter); 
    // D4 
    tone(output, D4);  
      delay(sixteenth); 
    // E4
    tone(output, E4);    
      delay(quarter); 
    // F4
    tone(output, F4);    
      delay(sixteenth); 
    // Measure 4, 2 seconds
    // G4
    tone(output, G4);    
      delay(dothalf); 
  
    // END
    noTone(output); // stop playing
  } 
  pinMode(12,led_pin1);
  digitalWrite(12,HIGH);
  delay(blink_duration2);
  pinMode(12,led_pin1);
  digitalWrite(12,LOW);
  delay(blink_duration2);
}

void loop() {
  // put your main code here, to run repeatedly:
 
}
