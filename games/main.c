#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  int colors[n][2];

  int match = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &colors[i][0], &colors[i][1]);
  }

  for (int x = 0; x < n; x++) {
    int home = colors[x][0];

    for (int y = 0; y < n; y++) {
      int away = colors[y][1];

      if (home == away) {
        match++;
      }
    }
  }

  printf("%d\n", match);

  return 0;
}