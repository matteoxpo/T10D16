#include "s21_string.h"

#include <stdio.h>
#include <stdlib.h>
int s21_strlen(char *mas) {
  int i = 0;
  while (*mas++) i++;
  return i;
}