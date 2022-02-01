/**
 * Title: Sum of digits
 * Description: https://www.codechef.com/problems/FLOW006
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
    // code here
    int num;
    scanf("%d", &num);
    int sum = 0;
    while (num > 0) {
      int lastDigit = num % 10;
      sum += lastDigit;
      num /= 10;
    }
    results[currentTestCase] = sum;
    currentTestCase++;
    testCase--;
  }
  for (int i = 0; i < currentTestCase; i++) {
    printf("%d\n", results[i]);
  }
  return 0;
}