import java.util.*;

class MergingPoint
{
        static int len(Node list)
	{
	  int count = 0;
          Node temp = list;
           while(temp != null)
	   {
	        count++;
                 temp = temp.next;
           }	 
         return count;
        }	 
	static Node mergingPoint(Node l1,Node l2)
	{
		if(l1 == null || l2 == null)
			return null;
 
        /*     HashSet ht = new HashSet<Node>();
		for(Node temp = l1;temp!=null;temp = temp.next)
			ht.add(temp);

		for(Node temp = l2;temp!=null;temp = temp.next)
			if(ht.contains(temp))
				return temp;*/
           int m = len(l1);
	        int n = len(l2);
		if(m < n)
		{
			Node temp = l1;
			l1 = l2;
			l2 = temp;
		}
		int r = Math.abs(m - n);
	         while(r > 0){
		      l1 = l1.next;
		      r--;
		  }
		 while(l1 != null & l2!=null)
		 {
			 if(l1 == l2)
				 return l1;
			l1 = l1.next;
			l2 = l2.next;
		 }
       	return null;
	}

	class Node
	{
		int data;
		Node next;

		Node (int d)
		{
			this.data = d;
			next = null;
		}
	}
		
	Node newNode(int d)
	 {
			Node newnode = new Node(d);
			return newnode;
	 }

	 Node insert(Node list,int d)
	 {
		 if(list == null)
			 return newNode(d);
		 else
			 list.next = insert(list.next,d);
		return list;
	 }
	 void display(Node list)
	 {
		 Node temp = list;
		 while(temp != null)
		 {
			 System.out.print(temp.data+" ");
			 temp = temp.next;
		 }
		 System.out.println("");
	}

	public static void main(String args[])throws Exception
	{
		MergingPoint m = new MergingPoint();
		Node list = null;
	    list = m.insert(list,1);
	           m.insert(list,2);
		   m.insert(list,3);
		   m.insert(list,4);
		   m.insert(list,5);
	   Node list1 = null;
		    list1 =    m.insert(list1,9);
	                m.insert(list1,12);
			m.insert(list1,32);
		list1.next.next.next = list.next.next;
	   m.display(list);
	   m.display(list1);
	  
	   if(m.mergingPoint(list,list1) != null) 
		   System.out.println("Merge point is "+mergingPoint(list,list1).data);
	   else
	     System.out.println("No merging point");
	 }
}


