/**
 * Title: Calculating Functions
 * Description: https://codeforces.com/problemset/problem/486/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>

void main(void) {
  int num;
  scanf("%d", &num);
  int result = 0;
  for(int i = 1; i <= num; i++) {
    if((i % 2) == 0) {
      result += i;
    } else {
      result -= i;
    }
  }
  printf("%d\n", result);
}