
// Setting pin outputs
int redLedPin = 10;                
int yellowLedPin = 12;
int greenLedPin = 11;
int buttonPin = 2;

// Initialize pin for rocket signal
int finalPin = 5;     

// Initialize pin for button status
int buttonState = 0;         


void setup()                    // run once, when the sketch starts
{
  
  // This is for printing purposes
  Serial.begin(9600);

  // Sets the digital pin lights as output
  pinMode(redLedPin, OUTPUT);      
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

  // Set digital pin for final rocket signal
  pinMode(finalPin, OUTPUT);

  
}

int i;

void loop(){                    // run over and over again
  
  
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

//  if (buttonState != HIGH) {
//    Serial.println("buttonstate is low");
//  }
  
//  Serial.print(buttonState);
  if (buttonState == HIGH) {
    Serial.println("buttonstate is high");

    
  
    // Count through the LED's
    for (i=0; i <= 2; i++){
  
      // Various if statements to decide when to send the signal
      // Red LED is turned on first
      if(i==0){

        // Warning print!!
        Serial.println("Countdown initiated!!!!");
        Serial.println("30 seconds till launch");

        
        // Turning red LED on
        digitalWrite(redLedPin, HIGH); 
          
        // Waits for 15 seconds
        delay(1000);
        Serial.println("29 seconds till launch");
        delay(1000);
        Serial.println("28 seconds till launch");
        delay(1000);
        Serial.println("27 seconds till launch");
        delay(1000);
        Serial.println("26 seconds till launch");
        delay(1000);
        Serial.println("25 seconds till launch");
        delay(1000);
        Serial.println("24 seconds till launch");
        delay(1000);
        Serial.println("23 seconds till launch");
        delay(1000);
        Serial.println("22 seconds till launch");
        delay(1000);
        Serial.println("21 seconds till launch");
        delay(1000);
        Serial.println("20 seconds till launch");
        delay(1000);
        Serial.println("19 seconds till launch");
        delay(1000);
        Serial.println("18 seconds till launch");
        delay(1000);
        Serial.println("17 seconds till launch");
        delay(1000);
        Serial.println("16 seconds till launch");
        delay(1000);
        Serial.println("15 seconds till launch");
                          
      }
  
      // Red LED is turned off and the yellow LED is turned on 
      if(i==1){
        
        // Turning red LED off
        digitalWrite(redLedPin, LOW); 
        
        // Turning yellow LED on   
        digitalWrite(yellowLedPin, HIGH);   
  
        // Waits for 15 seconds
        
         delay(1000);
        Serial.println("14 seconds till launch");
        delay(1000);
        Serial.println("13 seconds till launch");
        delay(1000);
        Serial.println("12 seconds till launch");
        delay(1000);
        Serial.println("11 seconds till launch");
        delay(1000);
        Serial.println("10 seconds till launch");
        delay(1000);
        Serial.println("9 seconds till launch");
        delay(1000);
        Serial.println("8 seconds till launch");
        delay(1000);
        Serial.println("7 seconds till launch");
        delay(1000);
        Serial.println("6 seconds till launch");
        delay(1000);
        Serial.println("5 seconds till launch");
        delay(1000);
        Serial.println("4 seconds till launch");
        delay(1000);
        Serial.println("3 seconds till launch");
        delay(1000);
        Serial.println("2 seconds till launch");
        delay(1000);
        Serial.println("1 seconds till launch");
        delay(1000);
                
      }
  
      // Yellow LED is turned off and the green LED is turned on
      if(i==2){

        // Waits for a second
        Serial.println("LAUNCHING!!");
  
        // Turning yellow LED off
        digitalWrite(yellowLedPin, LOW);

  
        // Turning green LED on   
        digitalWrite(greenLedPin, HIGH);    
        delay(1000);

        // Sending signal for rocket
        digitalWrite(finalPin, HIGH); 
  
        // Turning green LED off to reset               
        digitalWrite(greenLedPin, LOW);
        
        
      }
    } 
  }
}
