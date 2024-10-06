#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){

    char** blackSquare=reverse(whiteSquare);
    char** b=blackSquare;
    char** w=whiteSquare;   

    char** wr = superImpose(rook,w);
    char** wb = superImpose(bishop,w);
    char** wk = superImpose(knight,w);
    char** wq = superImpose(queen,w);
    char** wki = superImpose(king,w);

    char** br = superImpose(reverse(rook),b);
    char** bb = superImpose(reverse(bishop),b);
    char** bk = superImpose(reverse(knight),b);
    char** bq = superImpose(reverse(queen),b);
    char** bki = superImpose(reverse(king),b);

    char** fila1[]={bk,w,b,w,bk,w,b,w};
    char** fila2[]={w,b,w,b,w,b,w,b};
    char** fila3[]={b,w,bb,w,b,w,b,w};
    char** fila4[]={w,b,w,b,w,b,w,b};
    char** fila5[]={b,w,b,w,b,w,b,w};
    char** fila6[]={w,b,w,b,w,b,w,b};
    char** fila7[]={b,w,b,w,b,w,b,w};
    char** fila8[]={wk,b,w,b,wk,b,w,b};

    char** fill1 = fila1[0];
    char** fill2 = fila2[0];
    char** fill3 = fila3[0];
    char** fill4 = fila4[0];
    char** fill5 = fila5[0];
    char** fill6 = fila6[0];
    char** fill7 = fila7[0];
    char** fill8 = fila8[0];

    for(int i = 1; i < 8; i++) {
        fill1 = join(fill1,fila1[i]);
        fill2 = join(fill2,fila2[i]);
        fill3 = join(fill3,fila3[i]);
        fill4 = join(fill4,fila4[i]);
        fill5 = join(fill5,fila5[i]);
        fill6 = join(fill6,fila6[i]);
        fill7 = join(fill7,fila7[i]);
        fill8 = join(fill8,fila8[i]);
    }

    char** tab[]={fill1,fill2,fill3,fill4,fill5,fill6,fill7,fill8};

    char** Table=tab[0];

    for(int i=1;i<8;i++){
        Table=up(Table,tab[i]);
    }

    interpreter(Table);
}

