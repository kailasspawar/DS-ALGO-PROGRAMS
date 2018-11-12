/** 
  this is a comment
*/
#include <stdio.h>
int main()
{
char ch = ‘A’;
char str[20] = “fresh2refresh.com”;
float flt = 10.234;
int no = 150;
//this is declaration parts
int thisis, itisnot; 
char ched;
char strng[100];
printf(“Enter any character \n”);
scanf(“%c”, &ch);
printf(“Entered character is %c \n”, ch);
printf(“Enter any string ( upto 100 character ) \n”);
scanf(“%s”, &str);
printf(“Entered string is %s \n”, str);
printf(“Character is %c \n”, ch);
printf(“String is %s \n” , str);
printf(“Float value is %f \n”, flt);
printf(“Integer value is %d\n” , no);
printf(“Double value is %lf \n”, dbl);
printf(“Octal value is %o \n”, no);
printf(“Hexadecimal value is %x \n”, no);
return 0;
//end of program
}     
