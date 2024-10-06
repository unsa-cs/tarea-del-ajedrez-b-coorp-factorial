#include "chess.h"
#include "figures.h"
 
char** createTablero (int fil, int col){
 
    char** blackSquare = reverse(whiteSquare);
    char** bpatron = join(blackSquare, whiteSquare);
    char** wpatron = join(whiteSquare, blackSquare);
 
    char** fourpatron = up(bpatron,wpatron);
    char** tablero[][] = repeatH(repeatV(fourpatron,fil),col);
    return tablero;
}
void display(){
    char** upperTable = createTablero(1,4);
    char** middleTable[][] = createTablero(2,4);
    char** downTable = createTablero(1,4);

    char** figures[] = {rook, knight, bishop, queen, king, bishop, knight, rook};
    char** fichas = figures[0];
 
    for(int i = 1; i < 8; i++) {
        fichas = join(fichas,figures[i]);
    }
    char** gpawn = repeatH(pawn,8);
    char** upfichas = up(fichas,gpawn);
    char** downfichas = reverse(up(gpawn,fichas));
   
    char** wtableroFichas = superImpose(upfichas,upperTable);
    char** btableroFichas = superImpose(downfichas,downTable);
    
    char** middleupTable = up(wtableroFichas, middleTable);
    char** table = up(middleupTable,btableroFichas);
    
    char** voltear = rotateL(table);

    interpreter(*middleTable[0][0]);
}
 

