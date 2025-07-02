# MY-PROGRAMS

I started with the LED blink project

1ST PART

    byte PinEntry = 9;

    void setup(){
    pinMode(PinEntry, OUTPUT);   
    }

    void loop()  {  
    digitalWrite(PinEntry, HIGH);   
    delay(1000);    
    digitalWrite(PinEntry, LOW);  
    delay(1000);    
    }



2ND CHANGE



    int PinEntry = 9;
    int brightness = 20; 
    int delayshrt = 150;
    int delaylng = 400;
    int delayfin = 1000;


    void setup() { 

    pinMode(PinEntry, OUTPUT); 
    }



    void loop()  {   
    digitalWrite(PinEntry, HIGH);    
    delay(delayshrt);             
    digitalWrite(PinEntry, LOW);    
    delay(delayshrt);              



    digitalWrite(PinEntry, HIGH);    
    delay(delayshrt);             
    digitalWrite(PinEntry, LOW);    
    delay(delaylng);  


    digitalWrite(PinEntry, HIGH);    
    delay(delayshrt);             
    digitalWrite(PinEntry, LOW);    
    delay(delayshrt);              


    digitalWrite(PinEntry, HIGH);    
    delay(delayshrt);             
    digitalWrite(PinEntry, LOW);    
    delay(delayfin);  
    
    }





3RD (and final) CHANGE

    int PinEntry = 9;
    int delayshrt = 150;
    int delaylng = 300;
    int Final = 1000;

    void setup()     { 

    pinMode(PinEntry, OUTPUT); 

    }



    void loop()   {   

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
