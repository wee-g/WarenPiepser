/*
  kasseatt85.ino

Warenscanner fuer einen Spiel Laden
Pieps wenn Gegenstaende auf den Sensor gelegt werden 

 weeg September 2013 
 */
 
int piezo = 4;                  // Pin fuer Piezo Element
int ldr = 3;                    // Pin fuer Photosensor
int ldrval;                     // Wert Photosensor    
int triggerThreshhold = 45;     // Limite Photosensor

// the setup routine runs once 
void setup() {                

  pinMode(piezo, OUTPUT);       // piezo als Ausgang definieren
  pinMode(ldr, INPUT);          // ldr als Eingang definieren


// Dreimal piepsen beim einschalten
  beep(50);     
  beep(50);     
  beep(50);     
 delay(1000);
}

// the loop routine runs over and over again forever:
void loop() {

ldrval= analogRead(ldr);         // Wert von Photosensor auslesen

// Piepsen wenn wert von photosensor die limite unterschreitet
if (ldrval < triggerThreshhold){    
beep(1000);
delay(500);
}
}

// FUNCTIONS

// piepsen
void beep(unsigned char delayms){
analogWrite(piezo, 200);
delay(delayms);    
analogWrite(piezo, 0);    
delay(delayms);    
}
