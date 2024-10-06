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
    char** upperTable = createTablero(1,1);
    char** downTable = reverse(createTablero(1,1));
     
    char** wknight1 = rotateL(knight);
    char** wknight2 = rotateL(wknight1);
    char** wknights[]={wknight1, wknight2};
    char** flinefichas=wknights[0];
    for(int i = 1; i < 2; i++) {
        flinefichas = join(flinefichas,wknights[i]);
    }
    char** bknights = reverse(flipV(flinefichas));
   
    char** wtableroFichas = superImpose(flinefichas,upperTable);
    char** btableroFichas = superImpose(bknights,downTable);

    char** table = up(wtableroFichas,btableroFichas);

    interpreter(table);
}
