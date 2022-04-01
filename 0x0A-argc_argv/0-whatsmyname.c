#include <stdio.h>

int main (int argc, char *argv[])
{
  int i = 0;
  
  (void)argc;
  printf("new name, argv[%d] is %s\n", i, argv[i]);
  return (0);
}
