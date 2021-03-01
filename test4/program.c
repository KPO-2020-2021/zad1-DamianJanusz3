//po określeniu typu argumentów w funkcji dodaj program zaczyna działać poprawnie po kompilacji i konsolidacji z g++.

#include <stdio.h>


double Dodaj(double, double);


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
