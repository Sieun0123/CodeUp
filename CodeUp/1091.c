#include <stdio.h>

int main()
{
  long a, m, p, n;
  scanf("%ld %ld %ld %ld", &a, &m, &p, &n);

  for (int i = 1; i < n; i++)
  {
    a = (a * m) + p;
  }
  printf("%ld", a);
}
