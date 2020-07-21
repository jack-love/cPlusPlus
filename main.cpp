
#include "tty.h"

extern int  writetty(unsigned char * buffer , int len);


extern  int ext;

int main(void)
{
 
   unsigned char  sndbuff[20]="hello world"; 
   writetty(sndbuff,20);
    return 0;
}
