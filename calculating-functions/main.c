/**
 * Title: Calculating Functions
 * Description: https://codeforces.com/problemset/problem/486/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {
  long long num;
  scanf("%lld", &num);
  long long result = 0;
  // for(int i = 1; i <= num; i++) {
  //   if((i % 2) == 0) {
  //     result += i;
  //   } else {
  //     result -= i;
  //   }
  // }
  for(int i = 1; i <= num; i++) {
    result += pow((-1), i) * i;
  }
  printf("%lld\n", result);
}