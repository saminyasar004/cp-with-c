/**
 * Title: Bit++
 * Description: https://codeforces.com/problemset/problem/282/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t = 0;
    int x = 0;
    scanf("%d", &t);
    while(t > 0) {
        // code here...
        char expression[3];
        scanf("%s", expression);
        if(strcmp(expression, "++X") == 0) {
            ++x;
        } else if(strcmp(expression, "X++") == 0) {
            x++;
        } else if(strcmp(expression, "--X") == 0) {
            --x;
        } else if(strcmp(expression, "X--") == 0) {
            x--;
        }
        t--;
    }
    printf("%d\n", x);
    return 0;
}
