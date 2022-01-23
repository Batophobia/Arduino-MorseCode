int pinIn = 9;
String letters = "good news everyone";

void setup() {
  pinMode(pinIn, OUTPUT);
}

void loop() {
  for(int i = 0; i < letters.length(); i++){
    letter(letters[i]);
  }
  delay(2000);
}

void letter(char l){
  switch(l){
    case 'a': dot(); line(); break;
    case 'b': line(); dot(); dot(); dot(); break;
    case 'c': line(); dot(); line(); dot(); break;
    case 'd': line(); dot(); dot(); break;
    case 'e': dot(); break;
    case 'f': dot(); dot(); line(); dot(); break;
    case 'g': line(); line(); dot(); break;
    case 'h': dot(); dot(); dot(); dot(); break;
    case 'i': dot(); dot(); break;
    case 'j': dot(); line(); line(); line(); break;
    case 'k': line(); dot(); line(); dot(); break;
    case 'l': dot(); line(); dot(); dot(); break;
    case 'm': line(); line(); break;
    case 'n': line(); dot(); break;
    case 'o': line(); line(); line(); break;
    case 'p': dot(); line(); line(); dot(); break;
    case 'q': line(); line(); dot(); line(); break;
    case 'r': dot(); line(); dot(); break;
    case 's': dot(); dot(); dot(); break;
    case 't': line(); break;
    case 'u': dot(); dot(); line(); break;
    case 'v': dot(); dot(); dot(); line(); break;
    case 'w': dot(); line(); line(); break;
    case 'x': line(); dot(); dot(); line(); break;
    case 'y': line(); dot(); line(); line(); break;
    case 'z': line(); line(); dot(); dot(); break;
    
    case '0': line(); line(); line(); line(); line(); break;
    case '1': dot(); line(); line(); line(); line(); break;
    case '2': dot(); dot(); line(); line(); line(); break;
    case '3': dot(); dot(); dot(); line(); line(); break;
    case '4': dot(); dot(); dot(); dot(); line(); break;
    case '5': dot(); dot(); dot(); dot(); dot(); break;
    case '6': line(); dot(); dot(); dot(); dot(); break;
    case '7': line(); line(); dot(); dot(); dot(); break;
    case '8': line(); line(); line(); dot(); dot(); break;
    case '9': line(); line(); line(); line(); dot(); break;
    default: endWord(); break;
  }
  endLetter();
}

void dot(){
  digitalWrite(pinIn, HIGH);
  delay(100);
  digitalWrite(pinIn, LOW);
  delay(100);
}

void line() {
  digitalWrite(pinIn, HIGH);
  delay(300);
  digitalWrite(pinIn, LOW);
  delay(100);
}

void endLetter(){
  delay(200);
}

void endWord(){
  delay(400);
}
