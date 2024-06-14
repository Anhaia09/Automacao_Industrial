int vermelho = 3;
int amarelo = 4;
int verde = 5;


//void setup
void setup(){
    //Determina que os pinos 3,4,5
    pinMode(vermelho, OUTPUT);
    pinMode(amarelo,OUTPUT);
    pinMode(verde,OUTPUT);


    //Intermitente 3x

    digitalWrite(amarelo,1);
    delay(tempo_intermitente);
    digitalWrite (amarelo,0);
    delay(tempo_intermitente);
