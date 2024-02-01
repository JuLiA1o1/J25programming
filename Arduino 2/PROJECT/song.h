// notes frequency 
#define DO2 1046.5
#define DO 523.25
#define SOL 783.99
#define LA 880
#define SI 987.77
#define RE2 1174.66
#define SILENCIO 0

// notes tempos
#define CORCHEA 8
#define NEGRA 4
#define BLANCA 2
#define REDONDA 1

int tempo = 180; // tempo de la cancion, baria entre cancion mas rapida o mas lenta

int buzzer = 8; // punto donde el altaboz se conecta en el rduino

int melody[] = { // [] muestra que algo es un array
//first line
SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,RE2,NEGRA,SOL,NEGRA,LA,NEGRA,SI,REDONDA,
//second line
DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,LA,NEGRA,LA,NEGRA,SI,NEGRA,LA,BLANCA,RE2,BLANCA,
//third line
SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,RE2,NEGRA,SOL,NEGRA,LA,NEGRA,SI,REDONDA,
//fourth line
DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,DO2,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,RE2,NEGRA,RE2,NEGRA,DO2,NEGRA,LA,NEGRA,SOL,BLANCA,SILENCIO,BLANCA
};

int notes = sizeof(melody) / sizeof(melody[0]) / 2; // all notes

int wholenote = (60000 * 4) / tempo; // calculates whole note duration

int divider = 0, noteDuration = 0;

void play() {
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } 
    
      else if (divider < 0) {
      // dotted notes are represented with negative durations!!
        noteDuration = (wholenote) / abs(divider);
        noteDuration *= 1.5; // increases the duration in half for dotted notes
      }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody[thisNote], noteDuration * 0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);

    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}

void stop() {
  
}




