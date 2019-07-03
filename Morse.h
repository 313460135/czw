#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void a_space();
    void b_space();
  private:
    int _pin;
};
#endif /*_MORSE_H*/
