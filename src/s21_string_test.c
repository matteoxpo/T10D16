#include "s21_string.h"

#include <stdio.h>
#include <stdlib.h>

void test_strlen(char *test1, char *test2, char *test3) {
  int size = 0;
  size = s21_strlen(test1);
  if (size == 3)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  size = s21_strlen(test2);
  if (size == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  size = s21_strlen(test3);
  if (size == 1)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");
}

int main() {
  char *test1 = "123";
  char *test2 = "";
  char *test3 = "1";
  test_strlen(test1, test2, test3);
}