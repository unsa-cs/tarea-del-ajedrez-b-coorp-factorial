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
    char** fichas=whiteFigures[0];

    for(int i = 1; i<8; i++) {
        fichas= join(fichas,whiteFigures[i]);
       /* char** table=join(whiteSquare,blackSquare);
        char** table1=repeatH(table,4);*/
 
    }

    interpreter(fichas);
}
