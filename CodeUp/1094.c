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
  for (int j = n; j >= 1; j--)
  {
    printf("%d ", a[j]);
  }
}
