#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define N 100
#define M 10

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

void zadanie5()
{
  int n, licznik = 1;

  puts("Podaj liczbe calkowita: ");
  scanf("%d", &n);

  while(n != 1)
  {
    if(n % 2 == 0)
    {
      n /= 2;
    }
    else
    {
      n = n*3 + 1;
    }

    printf("%d\n", n);
    licznik++;
  }

  printf("Wykonano: %d operacji\n", licznik);
}

void zadanie6()
{
    srand(time(NULL));

    int szukana, podana, proby = 0;

    szukana = rand() % 1000 + 1;

    puts("Zakres poszukiwania 1-1000");

    while (1)
    {
        printf("Zgadnij numer: ");
        scanf("%d", &podana);
        printf("\n");
        proby++;

        if (podana == szukana)
        {
            break;
        }

        if (podana > szukana)
        {
            printf("Za duzo\n");
        }
        else
        {
            printf("za malo\n");
        }
    }

    printf("%d jest liczba szukana\n", szukana);
    printf("Udalo ci sie zgadnac w %d prubach\n", proby);
}

void zadanie7()
{
    int tab[N];
    int max, min;
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        tab[i] = rand() % 81 + 10;
    }

    max = tab[0];
    min = tab[0];

    for (int i = 0; i < N; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }

        if (tab[i] < min)
        {
            min = tab[i];
        }
    }

    printf("Wartosci max: %d, min: %d\n", max, min);
}

void zadanie8()
{
    int tab[M];
    int suma = 0, szukana, wystapienia = 0;
    float srednia;

    printf("Podaj %d liczb\n", M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &tab[i]);
        suma += tab[i];
    }

    srednia = (float)suma / (float)M;
    printf("Srednia tych liczb to: %.2f\n", srednia);

    puts("Podaj liczbe do znalezienia: ");
    scanf("%d", &szukana);

    for (int i = 0; i < M; i++)
    {
        if (tab[i] == szukana)
        {
            wystapienia++;
        }
    }

    if (wystapienia)
    {
        printf("Wartosc %d, wystepuje %d razy\n", szukana, wystapienia);
    }
    else
    {
        printf("Szukana wartosc nie wystepuje\n");
    }
}


int main()
{
  // zadanie1();
  // zadanie2();
  // zadanie3();
  // zadanie4();
  zadanie5();

  return 0;
}
