#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i, j, m;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  int k = 0;

  for(i = 0; i < N; i++){
    a[i] = rand()%10;
    printf("%d\n", a[i]);
  }

  for (i = 0; i < N-1; i++) {
    m = 1;
    for (j = i+1; j < N; j++){
        if (a[i] == a[j]) {
            m++;
        }
    if (m > k) k = m;
    }
  }

   printf("\n");
   printf("%d\n", k);

  return 0;
}
