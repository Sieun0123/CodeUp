#include <stdio.h>

int main()
{
  int n, k;

  scanf("%d", &n);

  int a[10001] = {};

  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &k);
    a[i] = k;
  }

  int min_num = a[1];
  for (int j = 1; j <= n; j++)
  {
    if (a[j] < min_num)
    {
      min_num = a[j];
    }
  }
  printf("%d", min_num);
}
