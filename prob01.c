#include "chess.h"
#include "figures.h"
void display(){
    char** gwhiteSquare = repeatH(join(whiteSquare,reverse(whiteSquare)),4);
    interpreter(gwhiteSquare);
  }
