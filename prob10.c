#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display(){

    char** blackSquare=reverse(whiteSquare);
    char** b=blackSquare;
    char** w=whiteSquare;
    
    char **fil [8];

    char** wfigures[]={rook, queen, pawn, bishop ,knight , king };
    char** bfigures[6];
    for (int i=0; i<6; i++){
        bfigures[i]=reverse(wfigures[i]);
    }
    
    char** wb[6], ww[6], bb[6], bw[6];
    for(int i=0; i<6; i++){
        wb[i]=superImpose(wfigures[i], b);
        ww[i]=superImpose(wfigures[i], w);
        bb[i]=superImpose(bfigures[i], b);
        bw[i]=superImpose(bfigures[i], w);
    }
   char** fill1[8];
   char** fill2[8]={bb[2], w, b, w,b,w,b,w};
   char** fill3[8];
   char** fill4[8];
   char** fill5[8];
   char** fill6[8];
   char** fill7[8];
   char** fill8[8];
   char** tab[]={fill1,fill2,fill3,fill4,fill5,fill6,fill7,fill8};

    char** Table=tab[0];

    for(int i=1;i<8;i++){
        Table=up(Table,tab[i]);
    }
    
    interpreter(fill2);
}


