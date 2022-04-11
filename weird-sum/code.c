/**
 * Title: Weird Sum
 * Description: https://codeforces.com/problemset/problem/1648/A
 * Author: Samin Yasar
 * Date: 31/March/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  // code here... :)
  int row, col;
  scanf("%d %d", &row, &col);
  int matrix[row][col];
  for(int i = 1; i <= row; i++) {
    for(int j = 1;j <= col; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  int result = 0;
  

  for(int i = 1; i <= row; i++) {
    for(int j = 1; j <= col; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}