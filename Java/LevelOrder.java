import Tree.*;
import java.util.*;
class LevelOrder
{
	void levelOrder(Node root)
	{
		Queue<Node> q = new LinkedList<Node>();

		q.insert(root);

		while(!q.empty())
		{
			Node node = q.remove();

			System.out.print(node.data+" ");
			if(node.left!=null)
				q.insert(node.left);
			if(node.right!=null)
				q.insert(node.right);
		}
			System.out.print("");
	}

	public static void main(String args[])
	{
		Node root = null;
                Node t = new Node();
                root = t.newNode(1);
                root.left = t.newNode(2);
                root.right = t.newNode(3);
                root.left.right = t.newNode(5);
                root.left.left = t.newNode(4);
                root.right.left = t.newNode(6);
                root.right.right = t.newNode(7);
             levelOrder(root);
	}
}
		      


