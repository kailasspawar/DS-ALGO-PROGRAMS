#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
  char *str1,*str2,*str3;
     int n,n1;
   printf("enter the length of first string\n");
      scanf("%d",&n);
     printf("enter the length of second string\n");
   scanf("%d",&n1);

    str1 = (char *)malloc(sizeof(char)*n);
       str2 = (char *)malloc(sizeof(char)*n1);

      printf("enter the first string\n");
         gets(str1);
           puts(str1); 

      printf("enter the second string\n");
          gets(str2);
  
     str3 = malloc(sizeof(char)*(n+n1));
 str3 = strcpy(str3,str2);
  printf("the first string is\n");
   puts(str1);
  printf("the second string is\n");
   puts(str2); 
  printf("the copied string is :\n");
   puts(str3);
  printf("the length of str3 is %d : \n",strlen(str3));
  
  if(strcmp(str1,str2)==0)
     printf("the two stings are equal\n");
  else
     printf("strings are not equal\n");

    return 0;
}
