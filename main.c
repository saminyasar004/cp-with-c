#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef short bool;
const short true = 1;
const short false = 0;

void main() {
    char ch = 'S';
    int result = ch + 100;
    printf("result = %d\n",result);
}