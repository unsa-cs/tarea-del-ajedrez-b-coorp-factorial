#include "chess.h"
#include "figures.h"

void display(){
  char** gwhiteSquare = repeatH((whiteSquare),7);
  char** gknight=reverse( knight);
  char** superImpose(gwhiteSquare,gknight);
  interpreter(superImpose);
}
