#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = repeatH(reverse(knight),7);
  interpreter(blackKnight);
}
