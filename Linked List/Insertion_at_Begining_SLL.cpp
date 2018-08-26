//--------------------------------------------------------------------
//Inserting a node at the begining of the Singly Linked List
//--------------------------------------------------------------------
#include<iostream>
using namespace std;
struct node{
  int data; //this specifies the type of data to be stores in the linked list
  node* next;
};
void insert(node** head, int data) //NOTE: we are recieving the address of head,which is a pointer, in a pointer
//                                    therefore in this function head is a pointer to pointer any changes made in (*head)
//                                    will affect the head in the main function
{
  node* temp = new node;   // new keyword for dynamic memory allocation in c++
  temp->data = data;
  temp->next = *head;
  *head = temp;
}
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
//--------------------------------------------------------------------
// NOTE  : the pointer to head node is not used to traverse the linked list
// because then we will lose the address to the head node i.e. at the end of the traversal using the head node
// as a traversing pointer we will end up with just the last node's address and we will loose all the preceding nodes.
// We cannot access them anymore.
// We can use head node as a traversing pointer in a function only when head node is NOT passed by reference as a parameter in that function.
//--------------------------------------------------------------------
int main(int argc, char const *argv[]) {
  node* head = NULL ; // Empty List
  int n,x;
  cout<<"Enter the number of elements you want to insert: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    insert( &head , x); //passing the address of head pointer i.e. it should be received in a pointer to the pointer.
    print(head);
  }
  return 0;
}
