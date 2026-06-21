int startvalue = 5;
int ledPin = 13;
 
 void flashLED(int times){
  int counter = 0;
  while (counter<times) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
    counter++;
  }
 }
    void setup(){
      pinMode(ledPin, OUTPUT);
      Serial.begin(9600);

      Serial.println("=== Smart Cointdown Starting ===");

      int counter = startvalue;

      while(counter>0){
        Serial.print("Count: ");
        Serial.println(counter);

        flashLED(counter);

        delay(1000);

        counter = counter - 1;
      }
      Serial.println("== Countdown Complete ==");
    }
     void loop(){
      //Nothing to repeat- Everything happens once in setup()
     }
 