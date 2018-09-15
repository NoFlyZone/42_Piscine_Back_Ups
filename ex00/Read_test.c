#include <unistd.h>
#include <stdio.h>

int   main(int argc, char **argv)
{
  char buf[30];

  printf("%s", buf);
  printf("%s", "\n");
  printf("%zd", read(0, &buf, 20));
  printf("%s", "\n");
  printf("%s", buf);
  return 0;
}
