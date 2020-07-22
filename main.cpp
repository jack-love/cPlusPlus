
#include "tty.h"
/*

const  用法: c++ 那些事

 1.  定义常量  static const uint MSG = 0x04;   定义必须初始化

 2.const char *device_path = "/dev/input";    定义数组常量

 3. 限定返回值不能修改
 const char* workMode::toString(uint id)
 {


 }

 4.限定参数不能修改,起到保护作用
  void  fun（const  int  val）{

     val ++   //error   
 }

5.要使 const 外部文件能够使用 需要加上 extern 
unsigned char  sndbuff[20]="hello world"; 
writetty(sndbuff,20);

6. 修饰指针
 int  i=10,j=20;
  const int * ps=&i;
                   ps=&j;

                   *ps=10; //error: assignment of read-only location '* ps'
 printf("*ps=0x%x\n",*ps);

7.修饰指针
int  i=10,j=20;
   int * const ps=&i;
                   //ps=&j;  // error: assignment of read-only variable 'ps'

                   *ps=10; 
 printf("*ps=0x%x\n",*ps);

 8.
 //也不能使用void 指针保存const对象的地址，必须使用const void 类型的指针保 存const对象的地址
   const int p=10;
   const void *vp=&p;
  // void *vp=&p;      //rror: conflicting declaration 'void* vp'
 

*/


void func(const int * pval){

  //*pval++;  //error: increment of read-only parameter 'val'
printf("%d\n",*pval);
}



extern int  writetty(unsigned char * buffer , int len);
extern  const int ext;

int main(void)
{
  int i=10;

  func(&i);
 

    return 0;
}
