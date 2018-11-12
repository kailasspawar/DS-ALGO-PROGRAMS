import java.io.*;

class BinTree
{
//	static Node root;

	class Node 
	{
		int data;
		Node left;
		Node right;
	     Node (int d)
	     {
		     data = d;
		     left = right = null;
	     }
	 }

	Node newNode(int d)
	{
		Node newnode = new Node(d);
		return newnode;
	}

	Node insert(Node root,int d)
	{
		if(root == null)
			return  newNode(d);
		if(root.data > d)
			root.left = insert(root.left,d);
		else if(root.data < d)
			root.right = insert(root.right,d);
	    return root;
	}
	void inorder(Node root)
	{
		if(root == null)
			return ;
		inorder(root.left);
		System.out.print(root.data+" ");
		inorder(root.right);
	}
     public static void main(String args[])
     {
	     BinTree b = new BinTree();
	     Node root = null;
	     root = b.insert(root,10);
	            b.insert(root,20);
		    b.insert(root,5);
		    b.insert(root,12);
		    b.insert(root,4);
	     b.inorder(root);
		System.out.println("");
	     
    }
}
