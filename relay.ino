//int relayInput = D4; // the input to the relay pin

void relay_setup() {

  Serial.begin(9600);// setup Serial Monitor to display information
  pinMode(D4, OUTPUT);// connected to Relay 1
  pinMode(D2, OUTPUT);// connected to Relay 2

}
void relay_loop(float a) {

//  Serial.print("#######");
//  Serial.println( a);

  if(a>17){
    
  digitalWrite(D2, LOW); // turn relay 2 OFF 
      Serial.println("Pin 8 LOW");
  digitalWrite(D4,HIGH);// turn relay 1 ON
      Serial.println(" Pin 22 HIGH");
   delay(3000);// keep in relay 2 OFF and relay 1 On for 3 seconds
  digitalWrite(D4, LOW);// turn relay 1 OFF
  digitalWrite(D2,HIGH);// turn relay 2 ON
      Serial.print("Pin 22 LOW");
      Serial.println(" Pin 8 HIGH");
  delay(3000);// keep in relay 1 OFF and relay 2 On for 3 seconds
  }

  else{
    Serial.println(" Temperature Kom !!!!");

    digitalWrite(D2, LOW); // turn relay 2 OFF 
      Serial.println("Pin 8 LOW");
  digitalWrite(D4,HIGH);// turn relay 1 ON
      Serial.println(" Pin 22 HIGH");
   delay(3000);// keep in relay 2 OFF and relay 1 On for 3 seconds
  digitalWrite(D4, LOW);// turn relay 1 OFF
  digitalWrite(D2,HIGH);// turn relay 2 ON
      Serial.print("Pin 22 LOW");
      Serial.println(" Pin 8 HIGH");
  delay(3000);// keep in relay 1 OFF and relay 2 On for 3 seconds
  }

//  digitalWrite(relayInput, HIGH); // turn relay on
//  Serial.print("achi!!!!");
//  delay(1000);
//
//  digitalWrite(relayInput, LOW); // turn relay off
//
//  delay(1000);

}
