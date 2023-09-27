  int led_pin1=13;
  int led_pin2=12;
  int blink_duration1 = 500;
  int blink_duration2 = 50;

void setup() {
  // put your setup code here, to run once:


} 

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(13,led_pin1);
  digitalWrite(13,HIGH);
  delay(blink_duration1);
  pinMode(13,led_pin1);
  digitalWrite(13,LOW);
  delay(blink_duration1);

  pinMode(12,led_pin1);
  digitalWrite(12,HIGH);
  delay(blink_duration2);
  pinMode(12,led_pin1);
  digitalWrite(12,LOW);
  delay(blink_duration2);
 
  
}
