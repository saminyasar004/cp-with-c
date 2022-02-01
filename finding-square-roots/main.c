/**
 * Title: Finding Square Roots
 * Description: https://www.codechef.com/problems/FSQRT
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int testCase = 0;
  scanf("%d", &testCase);
  long results[testCase];
  int currentTestCase = 0;
  while (testCase > 0) {
    // code here...
    long num, result;
    scanf("%ld", &num);
    result = sqrt(num);
    results[currentTestCase] = result;
    currentTestCase++;
    testCase--;
  }
  for (int i = 0; i < currentTestCase; i++) {
    printf("%ld\n", results[i]);
  }
  return 0;
}