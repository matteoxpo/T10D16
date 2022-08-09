#include "s21_string.h"

#include <stdio.h>
#include <stdlib.h>

void s21_strlen_test() {
  char *test1 = "123\0";
  char *test2 = "\0";
  char *test3 = "1\0";
  int size = 0;

  size = s21_strlen(test1);
  printf("%s %d\n", test1, size);
  if (size == 3)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  size = s21_strlen(test2);
  printf("%s %d\n", test2, size);
  if (size == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  size = s21_strlen(test3);
  printf("%s %d\n", test3, size);
  if (size == 1)
    printf("SUCCESS");
  else
    printf("FAIL");
}

void s21_strcmp_test() {
  char *test1 = "123\0";
  char *test2 = "\0";
  char *test3 = "1\0";
  char *test4 = "123\0";
  int res = 0;

  res = s21_strcmp(test1, test2);
  printf("%s %s\n", test1, test2);
  if (res == 1)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strcmp(test3, test4);
  printf("%s %s\n", test3, test4);
  if (res == -1)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strcmp(test1, test3);
  printf("%s %s\n", test1, test3);
  if (res == 1)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strcmp(test1, test4);
  printf("%s %s\n", test1, test4);
  if (res == 0)
    printf("SUCCESS");
  else
    printf("FAIL");
}

void s21_strcpy_test() {
  printf("s21_strcpy_test\n");
  char *test1 = "123\0";
  char *test2 = "\0";
  char *test3 = "-123-12-33\0";

  char *copy = malloc(s21_strlen(test1) * sizeof(char));
  copy[0] = '\0';
  s21_strcpy(copy, test1);
  printf("%s %s\n", test1, copy);
  if (!s21_strcmp(test1, copy))
    printf("SUCCESS\n");
  else
    printf("FAIL\n");
  free(copy);

  copy = malloc(s21_strlen(test2) * sizeof(char));
  copy[0] = '\0';
  s21_strcpy(copy, test2);
  printf("%s %s\n", test2, copy);
  if (!s21_strcmp(test2, copy))
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  free(copy);

  copy = malloc(s21_strlen(test3) * sizeof(char));
  copy[0] = '\0';
  s21_strcpy(copy, test3);
  printf("%s %s\n", test3, copy);
  if (!s21_strcmp(test3, copy))
    printf("SUCCESS");
  else {
    printf("FAIL");
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
  printf("%s %s", str, test0);
  s21_strcat(str, test0);
  printf(" %s\n", str);
  if (s21_strcmp(res0, str) == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  char *res1 = "OK,\0";
  printf("%s %s", str, test1);
  s21_strcat(str, test1);
  printf(" %s\n", str);
  if (s21_strcmp(res1, str) == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  char *res2 = "OK, we are\0";
  printf("%s %s", str, test2);
  s21_strcat(str, test2);
  printf(" %s\n", str);
  if (s21_strcmp(res2, str) == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  char *res3 = "OK, we are f***d up\0";
  printf("%s %s", str, test3);
  s21_strcat(str, test3);
  printf(" %s\n", str);
  if (s21_strcmp(res3, str) == 0)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  free(str);
}

void s21_strchr_test() {
  char *test1 = "123\0";
  char *test2 = "\0";
  char *test3 = "Hello!\0";
  char *test4 = "abc\0";
  char *res;

  res = s21_strchr(test1, '3');

  printf("%s 3 %d", test1, *res);
  if (*res == '3')
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strchr(test2, '\0');
  if (res == NULL)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strchr(test3, '\0');
  if (res == NULL)
    printf("SUCCESS\n");
  else
    printf("FAIL\n");

  res = s21_strchr(test4, 'd');
  if (res == NULL)
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
#elif STRCHR
  s21_strchr_test();
#endif
}