#include <stdio.h>

int main(void)
{
  int n, count = 0, flag = 1;

  scanf("%d", &n);

  long a[n];

  for (int i = 0; i < n; i++)
    scanf("%ld", &a[i]);

  for (;;) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2) {
        flag = 0;
        break;
      } else {
        a[i] /= 2;
      }
    }

    if (flag == 1)
      count++;
    if (flag == 0)
      break;
  }

  printf("%d\n", count);

  return 0;
}
