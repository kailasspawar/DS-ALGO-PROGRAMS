#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};
typedef struct node *tnode;
tnode Node(int ele)
{
	tnode newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = ele;
	newnode->left = newnode->right=NULL;
	return newnode;
}

tnode insert(tnode root,int ele)
{
	tnode newnode = Node(ele);
	if(root==NULL)
	{
		root = newnode;
		return root;
	}
	else
	{
		tnode temp = root;
		if(ele <= temp->data)
			temp->left = insert(temp->left,ele);
		else
			temp->right = insert(temp->right,ele);
		return root;
	}
	return root;
}

int * inorder(tnode root)
{

 static   int *arr =(int *)malloc(20 * sizeof(int));
       if(root==NULL) 
           return arr;

            static   int j = 0;

	if(root!=NULL)
	{
                inorder(root->left);
		arr[j]=root->data;
       //		cout<<arr[j]<<" ";
		inorder(root->right);
        }
       j++;
}
void preorder(tnode root)
{
  if(root!=NULL)
  {
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
  }
}

bool Search(tnode root,int ele)
{
  if(root!=NULL)
  {
  
    if(ele==root->data)
        return true;
  if(ele <= root->data)
    return Search(root->left,ele);
  else
    return Search(root->right,ele);
 }
 return false;
 }

int HeightOfBst(tnode root)
{
  if(root==NULL)
   return -1;
  else
   return max(HeightOfBst(root->left),HeightOfBst(root->right))+1;
}

void printlevel(tnode root,int level)
{
  if(root==NULL)
   return;
  if(level==1)
    cout<<root->data<<" ";
  else if(level > 1)
  {
    printlevel(root->left,level-1);
    printlevel(root->right,level-1);
  }
}
void levelorder(tnode root)
{
  int h = HeightOfBst(root);
  int i; 

  for( i=1;i<=h+1;i++)
     printlevel(root,i);

}

int minimum(tnode root)
{
  tnode temp = root;
  while(temp->left!=NULL)
    temp=temp->left;
 
   return temp->data;
}
int main()
{
	tnode root = NULL;
	root = insert(root,20);
	root = insert(root,10);
	root = insert(root,5);
	root = insert(root,12);
	root = insert(root,30);
	root = insert(root,25);
	root = insert(root,60);
	root = insert(root,21);
	root = insert(root,28);
	root = insert(root,50);
	root = insert(root,80);
        int *a;
//         a  =  inorder(root);
//	int n = sizeof(a)/sizeof(a[0]);
  //      cout<<n<<endl;
//	for(int j = 0;j<n;j++)
  //       cout<<a[j]<<" ";
         cout<<minimum(root)<<endl;
        levelorder(root);
        cout<<endl;
 //	preorder(root);
	cout<<"\n Height of Tree :"<<HeightOfBst(root)<<endl;
         int ele;
    //   cout<<Search(root,12)<<endl;
//       cout<<"Enter ele to search\n";
  //     cin >> ele;
      
    //   if(!Search(root,ele))
   //       cout<<"Ele is Not Found"<<endl;
    //   else
     //     cout<<"Ele is Found"<<endl;

      return 0;
}



