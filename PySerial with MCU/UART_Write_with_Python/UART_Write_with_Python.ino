int intSerialVal = 0;

void setup() 
{
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{ 
    delay(1000);

    intSerialVal = Serial.read();     // read user input
    if(intSerialVal%2 == 1)  digitalWrite(LED_BUILTIN, HIGH);
    else  digitalWrite(LED_BUILTIN, LOW);
}
