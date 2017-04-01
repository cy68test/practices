#include <stdio.h>
#define SIZE 100
#define min(x, y) ( (x > y) ? y : x)

int main()
{
  printf("Hello World!\n");
  printf("Size %d\n", SIZE);
  printf("min %d\n", min(3, 5));
  return 0;
}
