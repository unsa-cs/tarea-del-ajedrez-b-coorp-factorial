#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = repeatH(knight);
  interpreter(blackKnight);
}
