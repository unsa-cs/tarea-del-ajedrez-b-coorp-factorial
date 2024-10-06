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

char** create(int fi,int co){
    char** blackSquare = reverse(whiteSquare);
    char** **tab;
    tab=(char** **) malloc(sizeof(char***)*fi);
    for(int i=0;i<fi;i++){
        for(int j=0;j<co;j++){
            tab[i]=(char***)malloc(sizeof(char**)*co);
            if(i%2==0){
                if(j%2==0){
                    tab[i][j]=blackSquare;
                }
                else{
                    tab[i][j]=whiteSquare;
                }
            }
            else{
                if(j%2==0){
                    tab[i][j]=whiteSquare;
                }
                else{
                    tab[i][j]=blackSquare;
                }
            }
        }
    }
    return **tab;
}

void display(){
    char** upperTable = createTablero(1,4);
    char** middleTable= create(2,4);
    char** downTable = createTablero(1,4);
/*
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
*/
    interpreter(middleTable);
    free(middleTable);
}
