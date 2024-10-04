#include "chess.h"
#include "figures.h"

void display(){
  char** gwhiteSquare = repeatH((whiteSquare),7);
  interpreter(gwhiteSquare);
}
