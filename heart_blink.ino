int PinEntry = 9;
int delayshrt = 150;
int delaylng = 300;
int Final = 1000;


void setup()
    { 
    pinMode(PinEntry, OUTPUT); // sets the output pin

}

void loop()                    {   
//          ******************** MAIN LED BEATS ******************** 


    Part_1();
    Final_part();    
    delay(Final);  
    


}

//          ******************** RUNNING FUNCTIONS ******************** 


    void Part_1()    {

        digitalWrite(PinEntry, HIGH);    
        delay(delayshrt);             
        digitalWrite(PinEntry, LOW);    
        delay(delayshrt);              

        digitalWrite(PinEntry, HIGH);    
        delay(delayshrt);             
        digitalWrite(PinEntry, LOW);    
        delay(delaylng);  


    }


    void Final_part() { 
        digitalWrite(PinEntry, HIGH);    
        delay(delayshrt);             
        digitalWrite(PinEntry, LOW);    
        delay(delayshrt);              

        digitalWrite(PinEntry, HIGH);    
        delay(delayshrt);             
        digitalWrite(PinEntry, LOW); 

    }