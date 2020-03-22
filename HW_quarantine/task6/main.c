#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* êîëè÷åñòâî ýëåìåíòîâ â ìàññèâå */

int main()
{
  int a[N]; /* ìàññèâ a ðàçìåðà N */
  int i;    /* ñ÷åò÷èê */
  srand(time(NULL)); /* íà÷àëüíîå çíà÷åíèå ãåíåðàòîðà ÏÑ× */
  int m = 0;

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
  }

  int v = a[0]%2;
  int v1 = abs(v - 1);

  for(i = 2; i < N; i = i + 2) if (a[i] % 2 != v ) m = 1;
  for(i = 1; i < N; i = i + 2) if (a[i] % 2 != v1 ) m = 1;

  printf("\n");

  if (m == 0) printf("Yes");
  else printf("No");

  return 0;
}
