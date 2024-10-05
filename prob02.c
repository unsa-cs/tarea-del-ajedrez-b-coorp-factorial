#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);
    char** pairSquare = join(blackSquare,whiteSquare);
    char** lineSquare = repeatH(pairSquare,4);
    interpreter(lineSquare);
}

