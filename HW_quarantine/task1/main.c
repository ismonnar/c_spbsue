#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* êîëè÷åñòâî ýëåìåíòîâ ìàññèâà */

int main()
{
  int a[N]; /* ìàññèâ a ðàçìåðà N */
  int i, max, min, pos1, pos2;    /* ñ÷åò÷èê */
  srand(time(NULL)); /* íà÷àëüíîå çíà÷åíèå ãåíåðàòîðà ÏÑ× */
  a[0] = rand()%100;
  max = a[0];
  min = a[0];
  printf("%d\n", a[0]);
  for(i = 1; i < N; i++){
    a[i] = rand()%100;

    if(a[i]>max){
      max = a[i];
      pos1 = i;
    }
    if(a[i]<min){
      min = a[i];
      pos2 = i;
    }
    printf("%d\n", a[i]);

  }
  a[pos1] = min;
  a[pos2] = max;
  printf("\n");
  for(i=0;i<N;i++)
    printf("%d\n", a[i]);
  return 0;
}
