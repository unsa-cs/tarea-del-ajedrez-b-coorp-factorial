#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){
    char** bSquare=reverse(whiteSquare);
    char** upperTable = join(bSquare,whiteSquare);
    char** downTable = reverse(upperTable);
     
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
