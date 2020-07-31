int lDo = 13;
int lRe = 12;
int lMi = 11;
int lFa = 10;
int lSol = 9;
int lLa = 8;
int lSi = 7;

int tDo = 261;
int tRe = 293;
int tMi = 329;
int tFa = 349;
int tSol = 392;
int tLa = 440;
int tSi = 493;

int tDo1 = 522;
int tRe1 = 586;
int tMi1 = 658;
int tFa1 = 698;
int tSol1 = 784;
int tLa1 = 880;
int tSi1 = 986;

int tDo2 = 1044;
int tRe2 = 1172;
int tMi2 = 1316;
int tFa2 = 1396;
int tSol2 = 1568;
int tLa2 = 1760;
int tSi2 = 1972;

int minim = 1000;
int crotchet = 500;

int buzzer = 6;

void playLed(int notePin, int state) {
    digitalWrite(notePin, state);
}

void playTone(int buzzerPin, int scaleNote) {
    tone(buzzerPin, scaleNote);
}

void play(int buzzerPin, int scaleNote, int notePin, int time) {
    playLed(notePin, HIGH);
    playTone(buzzerPin, scaleNote);
    delay(time);
    playLed(notePin, LOW);
    noTone(buzzerPin);
    delay(10);
}

void setup()
{
    pinMode(lDo, OUTPUT);
    pinMode(lRe, OUTPUT);
    pinMode(lMi, OUTPUT);
    pinMode(lFa, OUTPUT);
    pinMode(lSol, OUTPUT);
    pinMode(lLa, OUTPUT);
    pinMode(lSi, OUTPUT);
}

void firstSystem(int fermata) {
      // 1o time
    play(buzzer, tDo2, lDo, crotchet);
    play(buzzer, tDo2, lDo, crotchet);
    play(buzzer, tSi1, lSi, crotchet);
    play(buzzer, tLa1, lLa, crotchet);

    // 2o time
    play(buzzer, tSol1, lSol, minim);
    play(buzzer, tSol1, lSol, minim);

    // 3o time
    play(buzzer, tLa1, lLa, crotchet);
    play(buzzer, tSi1, lSi, crotchet);
    play(buzzer, tDo2, lDo, crotchet);
    play(buzzer, tRe2, lRe, crotchet);

    // 4o time
    play(buzzer, tDo2, lDo, minim);
    play(buzzer, tSi1, lSi, minim);

    // 5o time
    play(buzzer, tRe2, lRe, crotchet);
    play(buzzer, tSi1, lSi, crotchet);
    play(buzzer, tSol1, lSol, crotchet);
    play(buzzer, tFa1, lFa, crotchet);

    // 6o time
    play(buzzer, tMi1, lMi, crotchet);
    play(buzzer, tSol1, lSol, crotchet);
    play(buzzer, tDo2, lDo, crotchet);
    play(buzzer, tSi1, lSi, crotchet);

    // 7o time
    play(buzzer, tLa1, lLa, crotchet);
    play(buzzer, tSol1, lSol, crotchet);
    play(buzzer, tFa1, lFa, crotchet);
    play(buzzer, tMi1, lMi, crotchet);

    // 8o time
    play(buzzer, tMi1, lMi, minim);
    play(buzzer, tRe1, lRe, minim);
}

void secondSystem(int fermata) {
    // 1o time
    play(buzzer, tRe1, lRe, crotchet);
    play(buzzer, tMi1, lMi, crotchet);
    play(buzzer, tFa1, lFa, crotchet);
    play(buzzer, tSol1, lSol, crotchet);

    // 2o time
    play(buzzer, tMi1, lMi, crotchet);
    play(buzzer, tSol1, lSol, crotchet);
    play(buzzer, tDo2, lDo, minim);
    
    // 3o time
    play(buzzer, tRe1, lRe, crotchet);
    play(buzzer, tMi1, lMi, crotchet);
    play(buzzer, tFa1, lFa, crotchet);
    play(buzzer, tSol1, lSol, crotchet);

    // 4o time
    play(buzzer, tMi1, lMi, crotchet);
    play(buzzer, tSol1, lSol, crotchet);
    play(buzzer, tDo2, lDo, minim);

    // 5o time
    play(buzzer, tLa1, lLa, crotchet);
    play(buzzer, tSi1, lSi, crotchet);
    play(buzzer, tDo2, lDo, crotchet);
    play(buzzer, tRe2, lRe, crotchet);

    // 6o time
    play(buzzer, tSi1, lSi, crotchet);
    play(buzzer, tSol1, lSol, crotchet);
    play(buzzer, tDo2, lDo, crotchet);
    play(buzzer, tSol1, lSol, crotchet);

    // 7o time
    play(buzzer, tLa1, lLa, crotchet);
    play(buzzer, tRe2, lRe, crotchet);
    play(buzzer, tDo2, lDo, crotchet);
    play(buzzer, tSi1, lSi, crotchet);

    // 8o time
    play(buzzer, tRe2, lRe, minim);
    play(buzzer, tDo2, lDo, minim + fermata);
}

void loop() {
  delay(1000);
  firstSystem(0);
  //ritornello
  firstSystem(0);

  secondSystem(0);
  //ritornello
  secondSystem(1000); // fermata on last execution
  delay(2000);
}
