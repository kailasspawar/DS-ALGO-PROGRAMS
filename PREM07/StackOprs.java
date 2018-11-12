import java.io.*;

class Stack
{
  int top;
  int a[] = new int[10];
  Stack()
  {
   top = -1;
  }

 void push(int ele)
 {
   a[++top] = ele;
 }
 int pop()
 {
   return(a[top--]);
 }

 boolean isFull()
 {
   return(top==9);
 }
 
 boolean isEmpty()
 {
  return(top==-1);
 }
 void reverse()
 { 
   
   System.out.println(a[top--]);
   if(isFull())
     System.out.println("Stack is Empty");
   else
     reverse(); 
 }
}
class StackOpr
{
 public static void main(String args[])
 {
   Stack S = new Stack();
   S.push(10);  S.push(20);
   S.push(30);  S.push(40); 
   S.push(50);  S.push(60); 
   S.push(70);  S.push(80); 
   S.push(90);  S.push(100); 
   S.reverse();
   System.out.println("ele is "+S.pop());
     
   System.out.println("ele is "+S.pop());
 }
} 
