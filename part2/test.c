#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char str[] = {'D','I','N', 'G', 'U', 'S'};
  char newStr[strlen(&str)+1];
  strcpy(newStr, &str);
  return newStr;
}
