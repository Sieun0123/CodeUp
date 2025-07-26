#include <stdio.h>

int main()
{
  int h, m;
  scanf("%d %d", &h, &m);

  m -= 30;
  if (m < 0)
  {
    m += 60;
    h = (h == 0) ? 23 : h - 1;
  }

  printf("%d %d", h, m);
  return 0;
}