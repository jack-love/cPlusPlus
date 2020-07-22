
#include "tty.h"

 extern const int ext=10;

int writetty(unsigned char * buffer , int len)
{
  printf("write tty %s %d\n",buffer,ext);
return 0;
}