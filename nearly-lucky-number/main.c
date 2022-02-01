/**
 * Title: Nearly Lucky Number
 * Description: https://codeforces.com/problemset/problem/110/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
  char num[1000];
  scanf("%s", num);
  int length = strlen(num);
  int count = 0;
  for(int i = 0; i < length; i++) {
    if(num[i] == '7' || num[i] == '4') {
      count++;
    } else {
      continue;
    }
  }
  if(count == 7 || count == 4) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}