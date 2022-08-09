#include "s21_string.h"

#include <stdio.h>
#include <stdlib.h>

void s21_strlen_test() {
  printf("s21_strlen_test\n");
  char *test1 = "123\0";
  char *test2 = "\0";
  char *test3 = "1\0";
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

void s21_strcmp_test() {
  printf("s21_strcmp_test\n");
  char *test1 = "123\0";
  char *test2 = "\0";
  char *test3 = "1\0";
  char *test4 = "123\0";
  int res = 0;

  res = s21_strcmp(test1, test2);
  if (res == 1)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strcmp(test3, test4);
  if (res == -1)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strcmp(test1, test3);
  if (res == 1)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strcmp(test1, test4);
  if (res == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");
}

void s21_strcpy_test() {
  printf("s21_strcpy_test\n");
  char *test1 = "123\0";
  char *test2 = "\0";
  char *test3 = "-123-12-33\0";
  char *copy = malloc(s21_strlen(test1) * sizeof(char));
  copy[0] = '\0';
  s21_strcpy(copy, test1);
  if (!s21_strcmp(test1, copy))
    printf("SUCCESS\n");
  else
    printf("FAIL\n");
  free(copy);

  copy = malloc(s21_strlen(test2) * sizeof(char));
  copy[0] = '\0';
  s21_strcpy(copy, test2);
  if (!s21_strcmp(test2, copy))
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  free(copy);

  copy = malloc(s21_strlen(test3) * sizeof(char));
  copy[0] = '\0';
  s21_strcpy(copy, test3);
  if (!s21_strcmp(test3, copy))
    printf("SUCCESS\n");
  else {
    printf("TEST:%s -  RES:%s\nFAIL\n", test3, copy);
  }
  free(copy);
}

void s21_strcat_test() {
  char *test0 = "OK\0";
  char *test1 = ",\0";
  char *test2 = " we are\0";
  char *test3 = " f***d up\0";
  char *str = malloc(sizeof(char));

  char *res0 = "OK\0";
  s21_strcat(str, test0);
  if (s21_strcmp(res0, str) == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  char *res1 = "OK,\0";
  s21_strcat(str, test1);
  if (s21_strcmp(res1, str) == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  char *res2 = "OK, we are\0";
  s21_strcat(str, test2);
  if (s21_strcmp(res2, str) == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  char *res3 = "OK, we are f***d up\0";
  s21_strcat(str, test3);
  if (s21_strcmp(res3, str) == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  free(str);
}

void s21_strchr_test() {
  char *test1 = "123\0";
  char *test2 = "\0";
  char *test3 = "abc";

  char *res;

  res = s21_strchr(test1, '3');
  if (*res == '3')
    printf("SUCCESS\n");
  else
    printf("FAIL\n");
}
int main() {
#ifdef STRLEN
  s21_strlen_test();
#elif STRCMP
  s21_strcmp_test();
#elif STRCPY
  s21_strcpy_test();
#elif STRCAT
  s21_strcat_test();
#elif STRCAT
  s21_strcat_test();
#endif
}