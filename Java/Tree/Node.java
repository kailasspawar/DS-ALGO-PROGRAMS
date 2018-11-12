package Tree;

   public class Node
    {
	public int data ;
	public Node left ;
	public Node right;
       
	public Node()
	{}
	public Node(int d)
	{
		this.data = d;
		left = right = null;
	}
    
    public  Node newNode(int d)
    {
	    Node newnode = new Node(d);
	    return newnode;
    }
    public void inorder(Node root)
    {
	    if(root == null)
		    return;
	    inorder(root.left);
	    System.out.print(root.data + " ");
	    inorder(root.right);
    }
}
