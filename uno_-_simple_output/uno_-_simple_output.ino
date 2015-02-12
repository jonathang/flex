// reads analog input from the five inputs from your arduino board 
// and sends it out via serial

// variables for input pins and
int analogInput = 0;
  
// variable to store the value 
int value = 0; 
 
void setup()
{
  // declaration of pin modes
    pinMode(analogInput, INPUT);    
  
  // begin sending over serial port
  Serial.begin(9600);
}

void loop()
{
  // read the value on analog input
    value = analogRead(analogInput);
    Serial.println(value);
  
  // wait for a bit to not overload the port
  delay(250);
}

