//problem tkwi w deklaracji stałych ale niestety nie potrafię go rozwiązać. Kiedy zmieniam na static to
//pojawiają się errory o niezainicjowaniu stałej.

#include <stdio.h>


static const double PI;
static const double E;

int main()


{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
