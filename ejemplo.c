#include "chess.h"
#include "figures.h"

void display(){
/*  char** gwhiteSquare = repeatH((whiteSquare),7);
  char** gknight=reverse( knight);
  char** s=superImpose(gknight,gwhiteSquare);
  interpreter(s);*/
    char** gwhiteSquare = repeatH(join(reverse(whiteSquare),whiteSquare),4);
    interpreter(gwhiteSquare);
    

}
