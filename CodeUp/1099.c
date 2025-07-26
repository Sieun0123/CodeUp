#include <stdio.h>

int main()
{
  int a[10][10];
  int i, j;

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  i = 1;
  j = 1;
  while (1)
  {
    if (a[i][j] == 2)
    {
      a[i][j] = 9;
      break;
    }
    else if (a[i][j] == 0)
    {
      a[i][j] = 9;
    }
    else if (a[i][j] == 1)
    {
      break;
    }

    if (a[i][j + 1] != 1)
    {
      j++;
    }
    else if (a[i + 1][j] != 1)
    {
      i++;
    }
    else
    {
      break;
    }
  }

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}

// method 1  --------------------------
#include <stdio.h>
int main(void)
{
  int w = 1, h = 1, map[10][10];
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      scanf("%d", &map[i][j]);
      if (map[w][h] != 2 && map[i][j] != 1 && (w + 1 == i || h + 1 == j))
      {
        map[w][h] = 9;
        if (w + 1 == i)
          w++;
        else
          h++;
      }
    }
  }
  map[w][h] = 9;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }
  return 0;
}

// method 2  --------------------------
#include <stdio.h>
int main()
{
  int map[11][11], x = 2, y = 2, i, j;
  for (i = 1; i <= 10; i++)
    for (j = 1; j <= 10; j++)
      scanf("%d", &map[i][j]);
  while (map[x][y] != 2)
  {
    map[x][y] = 9;
    if (map[x][y + 1] != 1)
      y += 1;
    else if (map[x + 1][y] != 1)
      x += 1;
    else
      break;
  }
  map[x][y] = 9;
  for (i = 1; i <= 10; i++)
  {
    for (j = 1; j <= 10; j++)
      printf("%d ", map[i][j]);
    printf("\n");
  }
  return 0;
}