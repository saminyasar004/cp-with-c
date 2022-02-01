/**
 * Title: Chef & Relational Operators
 * Description: https://www.codechef.com/problems/CHOPRT
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int testCase = 0;
  scanf("%d", &testCase);
  int currentTestCase = 0;
  char results[testCase];
  while (testCase > 0) {
    // code here...
    long a, b;
    scanf("%ld %ld", &a, &b);
    if (a > b) {
      results[currentTestCase] = '>';
    } else if (a < b) {
      results[currentTestCase] = '<';
    } else if (a == b) {
      results[currentTestCase] = '=';
    }
    currentTestCase++;
    testCase--;
  }
  for (int i = 0; i < currentTestCase; i++) {
    printf("%c\n", results[i]);
  }
  return 0;
}