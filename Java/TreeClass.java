import Tree.*;

class TreeClass
{ 
        static int max(int x , int y)
	{
		return x > y ? x : y;
	}
        static int height(Node root)
	{
	   if(root == null)
	    return 0;
          return max(height(root.left) , height(root.right)) + 1;
        }	  
	public static void main(String args[])
	{
	     Node root = null;
              Node t = new Node();

		root = t.newNode(10);
		root.left = t.newNode(5);
		root.left.left = t.newNode(15);
		root.right = t.newNode(50);
		root.right.left = t.newNode(7);
		t.inorder(root);
		System.out.println("");
		System.out.println("Height of Tree is "+height(root));
	}
}
