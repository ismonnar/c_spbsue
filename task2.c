#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i; /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  double r = 31.765554;
  double min = 100;
  int m;
  double itr;

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    itr = abs(a[i] - r);
    if (min > itr) {
        min = itr;
        m = i;
    }
    printf("%d\n", a[i]);
  }

    printf("Number: %f\n", r);
    printf("Result: %d\n", a[m]);

  return 0;
}
