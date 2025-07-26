#include <stdio.h>
int main()
{
  int map[100][100] = {0};
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};

  int n, m;
  int x = 0, y = 0;
  int d = 0;
  scanf("%d %d", &n, &m);

  for (int i = 1; i <= n * m; i++)
  {
    map[x][y] = i;

    // 방향 제어 로직
    // 방향을 제어하는 경우 3가지
    // 1. x+dx[d] 허용 범위가 벗어나면 방향을 바꾸기
    // 2. y+dy[d] 허용 범위가 벗어나면 방향을 바꾸기
    // 3. map[x+dx[d]][y+dy[d]] != 0 방향을 바꾸기
    if (x + dx[d] >= n || x + dx[d] < 0)
    {
      d++;
      d %= 4;
    }
    else if (y + dy[d] >= m || y + dy[d] < 0)
    {
      d++;
      d %= 4;
    }
    else if (map[x + dx[d]][y + dy[d]] != 0)
    {
      d++;
      d %= 4;
    }

    y += dy[d]; // 방향만큼 가라
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }

  return 0;
}