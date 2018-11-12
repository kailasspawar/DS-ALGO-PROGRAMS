#include<stdio.h>
main()
{
  int a = 5;
  char b = 't';
  void *ptr;
   int c = 10;
   ptr= &a;
   ptr =&b;
  int *p;
   p= &c;


   printf("the value of a is %d:\n ",*(int *)ptr);
     printf("the add of b is %p:\n ",&b);
  printf("the addrs of c is %p\n",p);

  return;
}
      
    
