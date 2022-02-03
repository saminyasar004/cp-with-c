/**
 * Title: Word
 * Description: https://codeforces.com/problemset/problem/59/A
 * Author: Samin Yasar
 * Date: 13/January/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_upper_case(char string[]) {
  int count = 0;
  int length = (int)strlen(string);
  for(int i = 0; i < length; i++) {
    if(string[i] >= 65 && string[i] <= 90) {
      count++;
    } else {
      continue;
    }
  }
  return count;
}

int count_lower_case(char string[]) {
  int count = 0;
  int length = (int)strlen(string);
  for(int i = 0; i < length; i++) {
    if(string[i] >= 97 && string[i] <= 122) {
      count++;
    } else {
      continue;
    }
  }
  return count;
}

char *to_upper_case(char string[]) {
  int length = strlen(string);
  for(int i = 0; i < length; i++) {
    if(string[i] >= 97 && string[i] <= 122) {
      string[i] -= 32;
    } else {
      continue;
    }
  }
  char *result = string;
  return result;
}

char *to_lower_case(char string[]) {
  int length = strlen(string);
  for(int i = 0; i < length; i++) {
    if(string[i] >= 65 && string[i] <= 90) {
      string[i] += 32;
    } else {
      continue;
    }
  }
  char *result = string;
  return result;
}

void main(void) {
  char string[1000];
  scanf("%s", string);
  int upper_cases = count_upper_case(string);
  int lower_cases = count_lower_case(string);
  if(upper_cases > lower_cases) {
    printf("%s\n", to_upper_case(string));
  } else {
    printf("%s\n", to_lower_case(string));
  }
}