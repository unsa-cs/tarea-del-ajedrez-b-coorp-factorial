#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);
    /* 
    char** pawn0=superImpose(pawn,whiteSquare);
    char** pawn1=superImpose(pawn,blackSquare);
    */
    char** table=join(whiteSquare,blackSquare);
    char** table1=repeatH(table,4);

    char** whiteFigures[]={rook, knight, bishop,queen, king, bishop, knight, rook };
    interpreter( whiteFigures[0]);
}
