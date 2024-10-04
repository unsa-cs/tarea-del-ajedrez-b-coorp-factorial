#include "chess.h"
#include "figures.h"

void display(){
  char** gwhiteSquare = repeatH((whiteSquare),7);
  char** gknight=reverse( knight);
  char** s=superImpose(gwhiteSquare,gknight);
  interpreter(s);
}
