/*
Inorder Traversal:

Algorithm Inorder(tree)
   1. Traverse the left subtree, i.e., call Inorder(left-subtree)
   2. Visit the root.
   3. Traverse the right subtree, i.e., call Inorder(right-subtree)

Preorder Traversal:

   Algorithm Preorder(tree)
      1. Visit the root.
      2. Traverse the left subtree, i.e., call Preorder(left-subtree)
      3. Traverse the right subtree, i.e., call Preorder(right-subtree)
Postorder Traversal:

      Algorithm Postorder(tree)
         1. Traverse the left subtree, i.e., call Postorder(left-subtree)
         2. Traverse the right subtree, i.e., call Postorder(right-subtree)
         3. Visit the root.
*/
#include<iostream>
using namespace std;
struct node{
  int data;
  struct node* left;
  struct node* right;
  node(int data)
  {
    this->data=data;
    this->left=this->right=NULL;
  }
};
void print_postorder(struct node* node)
{
  if(node==NULL)
  return;
  print_postorder(node->left);
  print_postorder(node->right);
  cout<<node->data<<" ";
}
void print_preorder(struct node* node)
{
  if(node==NULL)
  return;
  cout<<node->data<<" ";
  print_preorder(node->left);
  print_preorder(node->right);
}
void print_inorder(struct node* node)
{
  if(node==NULL)
  return;
  print_inorder(node->left);
  cout<<node->data<<" ";
  print_inorder(node->right);
}
int main()
{
  struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout << "\nPreorder traversal of binary tree is \n";
    print_preorder(root);
    cout << "\nInorder traversal of binary tree is \n";
    print_inorder(root);
    cout << "\nPostorder traversal of binary tree is \n";
    print_postorder(root);
    return 0;
}
/*
               1
            /    \
         2          3
      /     \     /   \
    4        5  null  null
  /  \     /   \
null null null null


output:
Preorder traversal of binary tree is
1 2 4 5 3
Inorder traversal of binary tree is
4 2 5 1 3
Postorder traversal of binary tree is
4 5 2 3 1
*/
