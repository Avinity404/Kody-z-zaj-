#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define N 100
#define M 10

void zadanie1()
{
  printf("---- zadanie 1\n");

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
  printf("---- zadanie 2\n");

  unsigned long long silnia;

  for(int n = 1; n <= 10; n++)
  {
    silnia = 1;
    for(int i = 1; i <= n; i++)
    {
      silnia *= i;
    }

    printf("Dla liczby %d silnia wynosi %llu\n", n, silnia);
  }
  puts("(...)");

  silnia = 1;
  for(int i = 1; i <= 65; i++)
  {
    silnia *= i;
  }

  puts("Dla typu unsigned long long max silnie mozna policzyc z liczby n = 65");
  printf("Bedzie to liczba %llu\n", silnia);
}

void zadanie3()
{
  printf("---- zadanie 3\n");

  int suma = 0;

  for(int i = 1; i <= 1000; i++)
  {
    suma += i;
  }

  printf("Suma liczb od 1 do 1000 to %d\n", suma);
}

void zadanie4()
{
  printf("---- zadanie 4\n");

  int n;

  puts("Wprowadzaj liczby calkowite: ");

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
  printf("---- zadanie 5\n");

  int n, licznik = 0;

  puts("Podaj liczbe calkowita: ");
  scanf("%d", &n);

  while(n != 1)
  {
    if(n % 2 == 0)
      n /= 2;
    else
      n = n*3 + 1;

    printf("%d\n", n);
    licznik++;
  }

  printf("Wykonano: %d operacji\n", licznik);
}

void zadanie6()
{
    printf("---- zadanie 6\n");

    srand(time(NULL));

    int szukana, podana, proby = 0;

    szukana = rand() % 1000 + 1;

    puts("Zakres poszukiwania 1-1000");

    while(1)
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

    printf("%d to liczba szukana\n", szukana);
    printf("Udalo ci sie zgadnac w %d probach\n", proby);
  }

void zadanie7()
{
    printf("---- zadanie 7\n");

    int tab[N];
    int max, min;
    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        tab[i] = rand() % 81 + 10;
    }

    max = tab[0];
    min = tab[0];

    for(int i = 0; i < N; i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }

        if(tab[i] < min)
        {
            min = tab[i];
        }
    }

    printf("Wartosci min: %d, max: %d\n", min, max);
}

void zadanie8()
{
    printf("---- zadanie 8\n");

    int tab[M];
    int suma = 0, szukana, wystapienia = 0;
    float srednia;

    printf("Podaj %d liczb\n", M);

    for(int i = 0; i < M; i++)
    {
        scanf("%d", &tab[i]);
        suma += tab[i];
    }

    srednia = (float)suma / (float)M;
    printf("Srednia tych liczb to: %.2f\n", srednia);

    puts("Podaj liczbe do znalezienia: ");
    scanf("%d", &szukana);

    for(int i = 0; i < M; i++)
    {
        if(tab[i] == szukana)
        {
            wystapienia++;
        }
    }

    if(wystapienia)
    {
        printf("Wartosc %d, wystepuje %d razy\n", szukana, wystapienia);
    }
    else
    {
        printf("Szukana wartosc nie wystepuje\n");
    }
}

void zadanie9()
{
  printf("---- zadanie 9\n");

  int tabA[11];
  int tabB[15];
  int tabC[12];
  int numA = -25, numB = 3, numC = -2; // przypisane wartosci poczatkowe

  for(int i = 0; i < 11; i++)
  {
    tabA[i] = numA;
    numA += 4;
  }

  for(int i = 0; i < 15; i++)
  {
    if((i+1) % 4 == 0)
    {
      tabB[i] = -99;
    }
    else
    {
      tabB[i] = numB;
    }

    numB += 2;
  }

  for(int i = 0; i < 12; i++)
  {
     tabC[i] = numC;
     numC += (i+1)*(-1);
  }


  for(int i = 0; i < 11; i++)
  {
    printf("%d ", tabA[i]);
  }
  printf("\n");

  for(int i = 0; i < 15; i++)
  {
    printf("%d ", tabB[i]);
  }
  printf("\n");

  for(int i = 0; i < 12; i++)
  {
    printf("%d ", tabC[i]);
  }
  printf("\n");
}

void zadanie10()
{
  printf("---- zadanie 10\n");

  int tabZiel[] = {5, 6, 7, 8, 9, 10, 11, 12};
  int tabNieb[] = {15, 20, 25, 30, 35, 40};
  int tabPoma[12];
  int pomaIter = 0;
  
  for(int i = 0, j = 2; i < 4; i++, j++)
  {
    tabPoma[pomaIter] = (tabZiel[i] - tabNieb[j]);
    pomaIter++;
  }

  for(int i = 4, j = 0; i < 8; i++, j++)
  {
    tabPoma[pomaIter] = (tabZiel[i] * tabZiel[j]);
    pomaIter++;
  }

  for(int i = 4, j = 0; i < 8; i++, j++)
  {
    tabPoma[pomaIter] = (tabNieb[j] + tabZiel[i]);
    pomaIter++;
  }

  // wydruk
  printf("\n");
  printf("        ");
  for(int i = 0; i < 8; i++)
  {
    printf("%3d ", tabZiel[i]);
  }
  for(int i = 0; i < 6; i++)
  {
    printf("%3d ", tabNieb[i]);
  }
  printf("\n");

  for(int i = 0; i < 6; i++)
  {
    printf("%3d ", tabNieb[i]);
  }
  for(int i = 0; i < 8; i++)
  {
    printf("%3d ", tabZiel[i]);
  }
  printf("\n");

  printf("        ");
  for(int i = 0; i < 12; i++)
  {
    printf("%3d ", tabPoma[i]);
  }
  printf("\n");

}

int main()
{
  zadanie1();
  zadanie2();
  zadanie3();
  zadanie4();
  zadanie5();
  zadanie6();
  zadanie7();
  zadanie8();
  zadanie9();
  zadanie10();

  return 0;
}
