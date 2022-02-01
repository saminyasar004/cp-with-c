/**
 * Title: First & last digit
 * Description: https://www.codechef.com/problems/FLOW004
 * Author: Samin Yasar
 * Date: 27/January/2022
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int testCase = 0;
  scanf("%d", &testCase);
  int currentTestCase = 0;
  int results[testCase];
  while (testCase > 0) {
    int num;
    scanf("%d", &num);
    int lastDigit = num % 10;
    int digit;
    while (num > 0) {
      digit = num % 10;
      num /= 10;
    }
    results[currentTestCase] = lastDigit + digit;
    currentTestCase++;
    testCase--;
  }
  for (int i = 0; i < currentTestCase; i++) {
    printf("%d\n", results[i]);
  }
  return 0;
}