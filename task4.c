#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 2 /* ���������� ��������� ������� */

int main()
{
  int a[N]; /* ������ a ������� N */
  int i;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */
  int m = 0;

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d\n", a[i]);
  }

  for(i = 1; i < N; i++){
    if (a[i-1] > a[i]) {
        m = 1;
    }
  }

  printf("\n");

  if (m == 0) printf("Increment order");
  else printf("Not increment order");

  return 0;
}
