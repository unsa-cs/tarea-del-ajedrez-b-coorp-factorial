#include "chess.h"
#include "figures.h"
void display(){
    char** gwhiteSquare = repeatH(join(reverse(whiteSquare),whiteSquare),4);
    interpreter(gwhiteSquare);
}
