#include <unistd.h>
#define BUF_SIZE 512

char    *ft_get_input(char *str)
{
    int y;
    int x;
    int i;
    int size;
    char buf[BUF_SIZE];

    x = 0;
    y = 0;
    i = 0;
    size = read(0, &buf, BUF_SIZE);
    while (i < size)
    {
      if (buf[i] != '\n' && y == 0);
      {
         x++;
      }
      else if (buf[i] == '\n')
        y++;
      i++;
    }
}
