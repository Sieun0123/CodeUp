#include <stdio.h>

int main()
{
  int y;
  scanf("%d", &y);
  printf("%s", (y % 400 == 0 || (y % 4 == 0 && y % 100)) ? "Leap" : "Normal");
  return 0;
}