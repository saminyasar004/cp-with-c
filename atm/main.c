/**
 * Title: ATM
 * Description: https://www.codechef.com/problems/HS08TEST
 * Author: Samin Yasar
 * Date: 27/January/2022
 */

#include <stdio.h>

int main(void) {
  long amount;
  double balance;
  double charge = 0.50;
  scanf("%ld %lf", &amount, &balance);
  if ((double)(amount + charge) > balance) {
    printf("%.2lf\n", balance);
  } else if (amount % 5 != 0) {
    printf("%.2lf\n", balance);
  } else {
    printf("%.2lf\n", (balance - (double)(amount + charge)));
  }
  return 0;
}