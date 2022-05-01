int led1 = D5; 
int led2 = D6;
 

void setup() {
 pinMode(led1, OUTPUT); 
 pinMode(led2, OUTPUT);
 Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", Handler);
}

void loop(){
    Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "wave");
    delay(15000); 
    Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "pat");
    delay(15000); 
}

void Handler(const char *event, const char *data)
{
    if(strcmp(data, "wave")==0)
    {
        digitalWrite(led1, HIGH); 
        delay(500);
        digitalWrite(led1, LOW); 
        delay(500); 
        digitalWrite(led1, HIGH); 
        delay(500);
        digitalWrite(led1, LOW); 
        delay(500); 
        digitalWrite(led1, HIGH); 
        delay(500);
        digitalWrite(led1, LOW); 
          delay(500);
         
    }
    if(strcmp(data,"pat")==0)
    {
        digitalWrite(led2, HIGH); 
        delay(500);
        digitalWrite(led2, LOW); 
        delay(500);
        digitalWrite(led2, HIGH); 
        delay(500);
        digitalWrite(led2, LOW); 
        delay(500);
         
    }
}