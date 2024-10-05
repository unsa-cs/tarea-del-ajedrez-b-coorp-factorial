#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);

    char** table=join(blackSquare, whiteSquare);
    char** table1=repeatH(table,4);

    char** whiteFigures[]={rook, knight, bishop,queen, king, bishop, knight, rook };
    char** fichas=whiteFigures[0];

    for(int i = 1; i<8; i++) {
        fichas= join(fichas,whiteFigures[i]);
    }

    char** casillasFichas= superImpose(fichas,table1);

    interpreter(casillasFichas);
}
