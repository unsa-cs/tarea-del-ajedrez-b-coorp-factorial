#include "chess.h"
#include "figures.h"
#include <stdlib.h>
 
char** createTablero (int fil, int col){
 
    char** blackSquare = reverse(whiteSquare);
    char** bpatron = join(blackSquare, whiteSquare);
    char** wpatron = join(whiteSquare, blackSquare);
 
    char** fourpatron = up(bpatron,wpatron);
    char** tablero = repeatH(repeatV(fourpatron,fil),col);
    return tablero;
}


void display(){
    char** upperTable = createTablero(2,2);
    char** downTable = createTablero(2,2);
     
    char** blacknight = reverse(knight);
    char** wknights = repeatH(rotateL(knight),2); 
    char** bknights = repeatH(rotateR(blacknight),2);
   
    char** wtableroFichas = superImpose(wknights,upperTable);
    char** btableroFichas = superImpose(bknights,downTable);

    char** table = up(wtableroFichas,btableroFichas);

    interpreter(table);
}
