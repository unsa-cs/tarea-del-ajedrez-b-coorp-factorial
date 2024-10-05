#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);
    
    char** pawn0=superImpose(pawn,whiteSquare);
    char** pawn1=superImpose(pawn,blackSquare);
    
    char** table=join(pawn1,pawn0);
    char** table1=repeatH(table,4);

    interpreter(table1);
}
