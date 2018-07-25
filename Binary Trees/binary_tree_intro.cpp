/*
create a simple tree with 4 nodes.
The created tree would be as following.

tree
      ----
       1    <-- root
     /   \
    2     3
   /
  4
*/
#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
  int data;
  struct node* left;
  struct node* right;
};
//newnode() function allocates a new nodes
struct node* newnode(int data)
{
  struct node* node=(struct node*)malloc(sizeof(struct node)); //memory allocation for the nodes
  node->data=data;
  node->left=node->right=NULL;
  return node;
}
int main()
{
  cout<<"This program generates a predefined binary tree."<<endl;
  struct node* root=newnode(1);
  root->left=newnode(2);
  root->right=newnode(3);
  root->left->left=newnode(4);
  return 0;
}

/*
visualization of the binary tree
                 1
             /       \
            2          3
          /   \       /  \
         4    null  null  null
        /   \
       null null
*/
