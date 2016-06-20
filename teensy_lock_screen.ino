// Works with Teensy LC and a switch between ground and 0.
// Locks screen for Linux (Ctrl + Alt + l) with one button push.

void setup(){
 pinMode(0, INPUT_PULLUP);    // saves us from needing to use a resistor in the circuit
 delay(5000);
}

void loop(){
  if (digitalRead(0) == HIGH) // is the button pressed?
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll();
    delay(500); // wait a half a second
  }
}
