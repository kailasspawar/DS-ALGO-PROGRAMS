#include<string.h>
#include<stdio.h>
#include<stdlib.h>

struct stack
{
	char *a; 
	int top;
};

typedef struct stack Stack;

void initstack(Stack *s,int cap)
{
	s->a = (char *)malloc(cap*sizeof(char));
	s->top = -1;
}

void push(Stack *s,int ele)
{
	s->a[++s->top]=ele;
}
int pop(Stack *s)
{
	return(s->a[s->top--]);
}

int isempty(Stack *s)
{ 
	return(s->top==-1);
}

main()
{
	Stack S ;
	initstack(&S,20);
        char  str[20];int i;

/**	push(&S,14);
	push(&S,21);
	push(&S,27);
	push(&S,32);
	push(&S,25);
	if(!isempty(&S))
		printf("Ele popped is: %d\n",pop(&S));
	printf("Ele popped is: %d\n",pop(&S));
	printf("Ele popped is: %d\n",pop(&S));
 */
       printf("Enter the Expression\n");
       scanf("%s",str);
        int match=0;
        int len = strlen(str);
       for(i=0;i<len;i++)
       {  
	 switch(str[i])
         {

           case '(': push(&S,'(');
	              break;
	   case '{': push(&S,'{');
	              break;
	   case '[': push(&S,'[');
	              break;
	   case ']': if(pop(&S)=='[')
	               match+=2;
			 break;
	   case '}': if(pop(&S)=='{')
	              match+=2;
	                break;
   	   case ')': if(pop(&S)=='(')
	              match+=2;
		        break;
	   default: exit;
	  }
       }
        if(isempty(&S))
	  printf("Given String of Paranthesis is Balance\n");
	else
	  printf("String of Paranthesis is not Balanced\n");

	return ;       
}



