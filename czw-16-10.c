#include <stdio.h>
#include <math.h>

void zadanie1()
{
  int n;

  puts("podaj liczbe calkowita dodatnia: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++)
  {
    printf("*");
  }

  printf("\n");
}

void zadanie2()
{
  int N = 5;
  unsigned long long silnia = 1;

  for(int i = 1; i <= N; i++)
  {
    silnia *= i;
  }

  printf("Obliczona silnia: %llu\n", silnia);
  puts("Dla unsigned long long max silnie mozna policzyc z liczby 65");
}

void zadanie3()
{
  int suma = 0;
  for(int i = 1; i <= 1000; i++)
  {
    suma += i;
  }

  printf("Suma liczb od 1 do 1000 to %d\n", suma);
}

void zadanie4()
{
  int n;
  while(scanf("%d", &n) && n != 0)
  {
    if(n < 0)
      printf("%d\n", (n*n));
    else
      printf("%.2f\n", sqrt((float)n));
  }
}

int main()
{
  // zadanie1();
  // zadanie2();
  // zadanie3();
  // zadanie4();

  return 0;
}
