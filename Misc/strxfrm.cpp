#include <stdio.h>
#include <string.h>
int main()
{
    char src[10], dest[10];
    int len;
    strcpy(src, "geeksforgeeks");
    len = strxfrm(dest, src, 10);
    printf("Length of string %s is: %d", dest, len);
 
    return (0);
}


