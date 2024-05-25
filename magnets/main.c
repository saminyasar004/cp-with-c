/**
 * Title: Magnets
 * Description: https://codeforces.com/problemset/problem/344/A
 * Author: Samin Yasar
 * Date: 25/May/2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // code here...
  int t;
  scanf("%d", &t);

  char *magnets[t];
  int i = 0;
  int group = 1;

  while (t > 0) {
    // get input as string and put it on the magnets array
    char input[1000];
    scanf("%s", input);
    magnets[i] = (char *)malloc(strlen(input) + 1);
    strcpy(magnets[i], input);
    if ((i > 0) && strcmp(magnets[i], magnets[i - 1]) != 0) {
      group++;
    }
    i++;
    t--;
  }

  printf("%d\n", group);

  return 0;
}