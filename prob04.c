#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);

    char** wpairSquare = join(whiteSquare,blackSquare);
    
    char** bishop=superImpose(bishop,whiteSquare);
    char** bishop1=superImpose(bishop,blackSquare);
    char** table=join(bishop,bishop1);
    char** table1=repeatH(table,4);

    interpreter(table1);
}
