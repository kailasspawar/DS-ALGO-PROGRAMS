interface StackInterface
{
  int size = 50;
   void initStack();
   void push(int n);
   int pop();
   boolean isEmpty();
   boolean isFull();
}
class Stack implements StackInterface
{
        int arr[] = new int[size];
	int top ;
      public void initStack()
      {
	      top = -1;
      }

     public void push(int n)
      {
	      if(!isFull())
		      arr[++top] = n;
	      else
		      System.out.println("Stack is full");
       }
      public int pop()
      {
	      int ele = 0;
	      if(!isEmpty())
		      ele = arr[top--];
	      else{
		      System.out.println("Stack is Empty");
		      System.exit(0);
	      }
	   return ele;
      }   

      public boolean isEmpty()
      {
	      return top == -1;
      }
      public boolean isFull()
      {
	      return top == 49;
      }
 }

class StackDemo
{
    public static void main(String args[])
    {
    //	Stack s = new Stack();
        StackInterface si  = new Stack();
	si.initStack();
     for(int i = 1;i<=10;i++)
	     si.push(i);
     for(int i = 1;i<=11;i++)
	     System.out.print(si.pop()+" ");
     System.out.println();

    }
}
