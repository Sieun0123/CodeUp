#include <stdio.h>

int main()
{
  int h, w, n, l, d, x, y;
  int a[101][101] = {};

  scanf("%d %d", &h, &w);
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    scanf("%d %d %d %d", &l, &d, &x, &y);
    for (int i = 0; i < l; i++)
    {
      if (d == 0)
      {
        a[x][y + i] += 1;
      }
      else
      {
        a[x + i][y] += 1;
      }
    }
  }

  for (int i = 1; i <= h; i++)
  {
    for (int j = 1; j <= w; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
