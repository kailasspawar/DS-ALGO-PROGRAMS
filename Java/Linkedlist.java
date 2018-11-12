import java.io.*;

class Linkedlist
{
	Node head ;
	class Node
	{
		int data;
		Node next;
		Node(int d)
		{
			data = d;
			next = null;
	        }
	}
       public Node newNode(int d)
	{
		Node new_node = new Node(d);
		return new_node;
	}
	public void push(int d)
	{   
		Node temp = head;
        if(temp == null)
           head = newNode(d);
	else{
          while(temp.next != null)
		  temp = temp.next;
	  temp.next = newNode(d);
	 }
	}

	public void printList()
	{
		Node list = head;
		while(list != null)
		{
			System.out.print(list.data+" ");
			list = list.next;
		}
	   System.out.println("");
	}
	public void middle()
	{
		Node first = head;
		   Node sec = head;
          if(head != null){
	    while(first != null && first.next != null)
	    {
		    first = first.next.next;
		    sec = sec.next;
	    }
	  }
	    System.out.println("middle is "+sec.data);
       }
	


   public static void main(String args[])
   {
	   Linkedlist l = new Linkedlist();
	   for(int i = 1;i<=5;i++)
		l.push(i);
	   l.printList();
	   l.middle();
   }
}


