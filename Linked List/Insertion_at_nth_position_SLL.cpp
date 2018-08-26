//--------------------------------------------------------------------
//Inserting a node at the nth position of the Singly Linked List
//--------------------------------------------------------------------
#include<iostream>
using namespace std;
struct node{
  int data; //this specifies the type of data to be stores in the linked list
  node* next;
};
void insert(node** head,int data,int n)
{
  node* temp = new node();
  temp->data = data;
  temp->next = *head;
  if(n == 1)
  {
    temp->next = *head;
    *head = temp;
    return; //no need to execute further code
  }
  node* temp1 = *head;
  for(int i = 0;i < n-2; i++) //executing (n-3-0+1) = n-2 times since we were initially at head node
                              // therefore 1 + n-2 traversal = n-1 the node, temp1 will point to n-1th node at the end of the loop
  {
    temp1 = temp1->next;
  }
  temp->next = temp1->next;
  temp1->next = temp;
}
//--------------------------------------------------------------------
//TimeComplexity T(n) = O(1) Best case inserting at the begining i.e. n=1
//                    = O(n) Worst case, inserting at the end of sll
//                    = O(n) Average case, inserting at middle of the linked list
//--------------------------------------------------------------------
void print(node* head)  //NOTE: here we are not passing the head by reference therefore the head variable in this
                        // function is a copy of the head variable of main function changes made to head here will not affect
                        //head in the main function
{
  while(head != NULL)   //This is the reason why we are using head to traverse the linked list rather than creating a temp variable
  {
    cout<<head->data<<" ";
    head = head->next;
  }
  cout<<endl;
}
int main(int argc, char const *argv[]) {
  node* head = NULL ; // Empty List
  insert(&head,2,1);
  insert(&head,3,2);
  insert(&head,4,1);
  insert(&head,5,2);
  print(head);
  return 0;
}
