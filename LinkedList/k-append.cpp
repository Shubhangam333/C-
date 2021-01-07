#include<bits/stdc++.h>
using namespace std;
class node{
public:
     int data;
     node* next;
     
     node(int d){
          data = d;
          next = NULL;
     }
};
void insertAtHead(node * &head,int data){
     node * n = new node(data);
     n->next = head;
     head = n;
}
void insertAtTail(node*&head, int data){
     node * n = new node(data);
     node* temp = head;
     if(head==NULL)
     {
          insertAtHead(head,data);
          return ;
     }
     while(temp->next!= NULL){
          temp = temp->next;
     }    
     temp->next = n;
}
node* append(node* head, int k, int n)
{
      if(k<=0 || k==n)
      return head;
      if(k>n){
		  k=k-n;
	  }
      node* temp = head;
      for(int i=0;i<n-k-1;i++)
      temp = temp->next;
      node* temp2 = head;
      for(int i=1;i<n;i++)
      temp2 = temp2->next;
      
      temp2->next = head;
      head = temp->next;
      temp->next = NULL;
      return head;
}
void print(node * head){
     while(head !=NULL){
          cout<<head->data<<" ";
          head = head->next;
     }
    
}
int main(){
     int n,k,x;
     cin>>n;
  
     node * head = NULL;
     for(int i=0;i<n;i++)
     {
          cin>>x;
          insertAtTail(head,x);
     }
     cin>>k;
     head = append(head,k,n);
     print(head);
}