#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);

    char** wpairSquare = join(whiteSquare,blackSquare);
    char** bpairSquare = join(blackSquare,whiteSquare);
    
    char** wlineSquare = repeatH(wpairSquare,4);
    char** blineSquare = repeatH(bpairSquare,4);
    char** uplineSquare= up(blineSquare,wlineSquare);

    char** table=repeatV(uplineSquare, 2);

    interpreter(table);
} 
