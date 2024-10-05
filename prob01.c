#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);
    char** pairSquare = join(whiteSquare,blackSquare); 
    char** lineSquare = repeatH(pairSquare,4);
    interpreter(lineSquare);
}
