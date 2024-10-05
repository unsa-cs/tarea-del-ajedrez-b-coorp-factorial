#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);

    char** wpairSquare = join(whiteSquare,blackSquare);
    char** bpairSquare = join(blackSquare,whiteSquare);
    
    char** wlineSquare = repeatH(wpairSquare,4);
    char** blineSquare = repeatH(bpairSquare,4);
    char** upSquare= up(whiteSquare,blackSquare);

    interpreter(upSquare);
} 
