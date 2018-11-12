import java.io.*;

class Node
{
  int info;
  
   Node left;
   Node right;
  Node()
  {
    left=null;
    right = null;
  }
}

 class BinaryTree
 {
   Node root;
  void insert(int ele)
  {
   if(root.left==null&&root.right==null)
    root.info=ele;
   else
   {
     if(ele <= root.info)
       root.left.info=ele;
     else
       root.right.info = ele;
   }
  }

 }

 class BinTree
 {
  public static void main(String args[])
  {
    BinaryTree B = new BinaryTree();
    B.insert(5);
     B.insert(3);
   B.insert(7);
  }
 }
