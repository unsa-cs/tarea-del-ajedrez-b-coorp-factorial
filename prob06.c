#include "chess.h"
#include "figures.h"
void display(){
    char** blackSquare = reverse(whiteSquare);
    char** bpatron=join(blackSquare, whiteSquare);
    char** wpatron=join(whiteSquare,blackSquare);

    char** fila1=repeatH(bpatron,4);
    char** fila2=repeatH(wpatron,4);

    char** figures[]={rook, knight, bishop,queen, king, bishop, knight, rook};
    char** fichas=figures[0];
    
    for(int i = 1; i<8; i++) {
        fichas= join(fichas,figures[i]);
    }
    char** casillasFichas= superImpose(fichas,fila1);
    char** gpawn= repeatH(pawn,8);
    char** casillasPawn= superImpose(gpawn,fila2);
    char** twofilas= up(casillasFichas,casillasPawn);
    interpreter(twofilas);
}

