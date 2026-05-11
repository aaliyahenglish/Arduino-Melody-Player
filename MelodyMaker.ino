#define NOTE_C4 262 // C4 is a label 262 is the frequency
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523

int buzzer = 12; // stores pin number 12 in the variable, this is where my buzzer is connected on Arduino

int melody[] = { // this is the melody array
  NOTE_C4,
  NOTE_D4,
  NOTE_E4,
  NOTE_F4,
  NOTE_G4,
  NOTE_A4,
  NOTE_B4,
  NOTE_C5,
};

int noteDurations[] = { // Duration array
  400,
  400,
  400,
  400,
  400,
  400,
  400,
  800,
};

void setup()
{
  pinMode(buzzer, OUTPUT); 
}

void loop() // main program
{
  int numberOfNotes = sizeof(melody) / sizeof(melody[0]); // calculating the number of notes

  for (int i = 0; i < numberOfNotes; i++) // for loop
  {
    tone(buzzer, melody[i], noteDurations[i]);
    delay(noteDurations[i] + 100);
  }
  noTone(buzzer);
  delay(2000);
}