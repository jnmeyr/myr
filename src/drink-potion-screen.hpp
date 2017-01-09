#ifndef DRINK_POTION_SCREEN_HEADER
#define DRINK_POTION_SCREEN_HEADER

#include "screen.hpp"

const int DRINK_POTION_WIDTH = 15;
const int DRINK_POTION_HEIGHT = 14;
const unsigned int DRINK_POTION_1_PIXELS [DRINK_POTION_HEIGHT * DRINK_POTION_WIDTH] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 27990705, 27990705, 31283952, 31283952, 27990705, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 11213489, 27990705, 27990705, 27990705, 11213489, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 27990705, 31953650, 33554431, 33554431, 27990705, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 27990705, 31283952, 31283952, 31953650, 33554431, 31953650, 27990705, 0, 0, 0, 0,
  0, 0, 0, 0, 27990705, 31283952, 31283952, 31283952, 31953650, 31283952, 27990705, 0, 0, 0, 0,
  0, 0, 0, 0, 27990705, 31283952, 31283952, 31283952, 31953650, 31283952, 27990705, 0, 0, 0, 0,
  0, 0, 0, 0, 11213489, 27990705, 27990705, 27990705, 27990705, 27990705, 11213489, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 11213489, 11213489, 11213489, 11213489, 11213489, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};
const unsigned int DRINK_POTION_2_PIXELS [DRINK_POTION_HEIGHT * DRINK_POTION_WIDTH] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 27304096, 27304096, 29343679, 29343679, 27304096, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 10526880, 27304096, 27304096, 27304096, 10526880, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 27304096, 30791125, 33554431, 33554431, 27304096, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 27990705, 31283952, 31283952, 31953650, 33554431, 31953650, 27990705, 0, 0, 0, 0,
  0, 0, 0, 0, 27990705, 31283952, 31283952, 31283952, 31953650, 31283952, 27990705, 0, 0, 0, 0,
  0, 0, 0, 0, 27990705, 31283952, 31283952, 31283952, 31953650, 31283952, 27990705, 0, 0, 0, 0,
  0, 0, 0, 0, 11213489, 27990705, 27990705, 27990705, 27990705, 27990705, 11213489, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 11213489, 11213489, 11213489, 11213489, 11213489, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};
const unsigned int DRINK_POTION_3_PIXELS [DRINK_POTION_HEIGHT * DRINK_POTION_WIDTH] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 27304096, 27304096, 29343679, 29343679, 27304096, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 10526880, 27304096, 27304096, 27304096, 10526880, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 27304096, 30791125, 33554431, 33554431, 27304096, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 27304096, 29343679, 29343679, 30791125, 33554431, 30791125, 27304096, 0, 0, 0, 0,
  0, 0, 0, 0, 27304096, 29343679, 29343679, 29343679, 30791125, 29343679, 27304096, 0, 0, 0, 0,
  0, 0, 0, 0, 27304096, 29343679, 29343679, 29343679, 30791125, 29343679, 27304096, 0, 0, 0, 0,
  0, 0, 0, 0, 10526880, 27304096, 27304096, 27304096, 27304096, 27304096, 10526880, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 10526880, 10526880, 10526880, 10526880, 10526880, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

class DrinkPotionScreen: public Screen {

  private:

    unsigned int loops;

  public:

    DrinkPotionScreen(State * state);

    bool Display();

    Screen * Handle(Button button);

};

#endif
