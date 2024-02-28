#include <stdio.h>

int main()
 {
  char greetings[] = " World!";
  greetings[0] = 'J';
  printf("%s", greetings);

  return 0;
}