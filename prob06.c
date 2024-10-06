#include "chess.h"
#include "figures.h"
void display(){

    char** blackSquare = reverse(whiteSquare);
    char** bpatron=join(blackSquare, whiteSquare);
    char** wpatron=join(whiteSquare, blackSquare);

    char** fourpatron=up(bpatron,wpatron);
    char** tablero=repeatH(repeatV(fourpatron,4),4);

    char** figures[]={rook, knight, bishop, queen, king, bishop, knight, rook};
    char** fichas=figures[0];
    
    for(int i = 1; i<8; i++) {
        fichas= join(fichas,figures[i]);
    }
    char** gpawn= repeatH(pawn,8);
    char** upfichas=up(fichas,gpawn);
    char** tableroFichas= superImpose(upfichas,tablero);
    interpreter(tableroFichas);
}

