#include<stdio.h>
#include<math.h>
int main() {

      int n,i;
      scanf("%d",&n);
      int a[n-1];
      for( i=0;i<n;++i)
      {
          int stick;
          scanf("%d",&stick);
          a[i]=stick;
      } 
       int f=0;
      do
      {
          int count=0,small=99;
          f=0;
          for( i=0;i<n;++i)
          {
              if(a[i]>0&&a[i]<small)
                  small=a[i];
          }   
          for( i=0;i<n;++i)
          {
              if(a[i]!=0)
              {
                  a[i]=a[i]-small;
                  ++count;
                  f=1;
              }    
          }
          if(count)
         printf("%d\n",count);
      }while(f==1);    

    return 0;
}
