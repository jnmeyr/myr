#ifndef TITLE_SCREEN_HEADER
#define TITLE_SCREEN_HEADER

#include "screen.hpp"

const int TITLE_WIDTH = 15;
const int TITLE_HEIGHT = 20;
const unsigned int TITLE_PIXELS [TITLE_HEIGHT * TITLE_WIDTH] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 27263233, 0, 27263233, 27263233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 27263233, 27263233, 0, 27263233, 0, 27263233, 0, 27263233, 0, 27263233, 27263233, 0, 0, 0,
  0, 27263233, 0, 0, 33554431, 0, 27263233, 0, 33554431, 0, 27263233, 0, 0, 0, 0,
  0, 33554431, 0, 0, 33554431, 0, 0, 33554431, 33554431, 0, 33554431, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 33554431, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 33554431, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 27106717, 0, 0, 24409204, 27106717, 27106717, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 27106717, 0, 24409204, 27106717, 27106717, 27106717, 24409204, 10329501, 0, 0, 0,
  0, 0, 0, 0, 27106717, 0, 16777216, 33022571, 16777216, 33022571, 24409204, 10329501, 7631988, 0, 0,
  0, 0, 0, 0, 27106717, 0, 33022571, 33022571, 33022571, 33022571, 27432006, 16245355, 7631988, 0, 0,
  0, 0, 0, 0, 33022571, 24409204, 24409204, 27106717, 27106717, 27106717, 23356516, 23356516, 10654790, 0, 0,
  0, 0, 0, 0, 24069143, 0, 24069143, 27106717, 27616546, 27616546, 24069143, 33022571, 6579300, 6579300, 0,
  0, 0, 0, 0, 0, 0, 23356516, 23356516, 23356516, 23356516, 23356516, 10839330, 7291927, 16245355, 0,
  0, 0, 0, 0, 0, 0, 24069143, 0, 6579300, 6579300, 24069143, 6579300, 6579300, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 7291927, 0, 0, 0, 7291927, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

class TitleScreen: public Screen {

  public:

    TitleScreen(State * state);

    bool Display();

    Screen * Handle(Button button);

};

#endif
