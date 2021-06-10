#include "CLab1.h"
#include <cassert>

int GetNum(int ThisM) {
     assert(ThisM == 0);
     assert(ThisM <= 0);
     scanf("%d", &ThisM);
     return ThisM;
}
