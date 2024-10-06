#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){

    char** blackSquare=reverse(whiteSquare);
    char** b=blackSquare;
    char** w=whiteSquare;   
    
    char** wp = superImpose(pawn,w);
    char** wr = superImpose(rook,w);
    char** wb = superImpose(bishop,w);
    char** wk = superImpose(knight,w);
    char** wq = superImpose(queen,w);
    char** wki = superImpose(king,w);

    char** wbp = superImpose(pawn,b);
    char** wbr = superImpose(rook,b);
    char** wbb = superImpose(bishop,b);
    char** wbk = superImpose(knight,b);
    char** wbq = superImpose(queen,b);
    char** wbki = superImpose(king,b);

    char** bp = superImpose(reverse(pawn),b);
    char** br = superImpose(reverse(rook),b);
    char** bb = superImpose(reverse(bishop),b);
    char** bk = superImpose(reverse(knight),b);
    char** bq = superImpose(reverse(queen),b);
    char** bki = superImpose(reverse(king),b);

    char** bwp = superImpose(reverse(pawn),w);
    char** bwr = superImpose(reverse(rook),w);
    char** bwb = superImpose(reverse(bishop),w);
    char** bwk = superImpose(reverse(knight),w);
    char** bwq = superImpose(reverse(queen),w);
    char** bwki = superImpose(reverse(king),w);

    char** fila1[]={bwr,b,w,b,bwki,b,w,b};
    char** fila2[]={b,bwp,b,w,bb,w,b,w};
    char** fila3[]={bwp,b,wp,b,wq,b,w,b};
    char** fila4[]={b,wp,b,w,b,bwk,b,w};
    char** fila5[]={w,b,w,b,w,wbp,bwp,b};
    char** fila6[]={b,wk,b,w,b,w,b,bwr};
    char** fila7[]={w,b,w,wbk,w,b,wki,wbp};
    char** fila8[]={wbr,w,b,w,b,w,b,w};

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
