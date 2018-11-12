import java.io.*;

class Inheritance
{
      static Node head;

      	class Node
	{
		int data;
		Node next;
	     Node(int ele)
	     {
		    data = ele;
		    next = null;
             }
	 }
	   Node newNode(int d)
	   {
		   Node newnode = new Node(d);
		   return newnode;
	   }
	     void insert(int data)
	     {
	 	     Node temp = head;
		    Node newnode = newNode(data);
	         if(head == null)
			temp = head = newnode;
		 else
		 {
			 while(temp.next != null)
		        	 temp = temp.next;
			 temp.next = newnode;
		 }
	     }
	     Node inserRec(Node list ,int data)
	     {
		     if(list == null)
			     return newNode(data);
		     else
			     list.next = inserRec(list.next,data);
		   return list;
	     }

	     void display()
	     {
		     Node temp = head;
		     while(temp != null)
		     {
			     System.out.print(temp.data+" ");
			     temp = temp.next;
		     }
		   System.out.println("");
        	}
	 

       public static void main(String args[])
       {
           Inheritance L = new Inheritance();
	//  head = null;
	  // head = L.inserRec(head,10);
	    //      L.inserRec(head,20);
         //		 L.inserRec(head,30);
	  for (int i = 1;i<=5;i++)
		 L.insert(i); 
        L.display();
	}	   

} 
