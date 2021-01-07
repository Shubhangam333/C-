#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node*next;
	Node(int d){
		data=d;
		next=NULL;
	}
};
//circular linked list
void insert(node*&head,int data){
    node*n =new node(d);
    node*temp=head;
    n->next=head;

    if(temp!=NULL){
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=n;

    }else{
        n->next=n;
    }
    head=n;
}

void insertAthead(Node*&head ,int d){
if(head==NULL){
	head = new Node(d);
	return;
}
Node*node = new Node(d);
node->next=head;
head=node;
}

void display(Node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
    cout<<endl;
}
int length(Node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertAttail(Node*&head,int d){
    if(head==NULL){
	head = new Node(d);
	return;
}
Node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
Node*node = new Node(d);
temp->next=node;
return;
}
void insertInMiddle(Node*&head,int d,int p){
    if(head==NULL || p==0){
        insertAthead(head,d);
    }
    else if(p>length(head)){
        insertAttail(head,p);
    }else{
    int jump=1;
    Node*temp=head;
    while(jump<=p-1){
        temp=temp->next;
        jump++;
    }
    Node*n=new Node(d);
    n->next=temp->next;
    temp->next=n;
    }
}
//head delete
void deletehead(Node*&head){
if(head==NULL){
    return;
}
Node*temp=head->next;
delete head;
head=temp;
}
//tail delete
void deletetail(Node*&head){
if(head==NULL){
    return;
}
if(head->next==NULL){
    deletehead(head);
}
Node*temp=head;
while(temp->next->next!=NULL){
    temp=temp->next;
}
delete temp->next;
temp->next=NULL;
}
void deleteAtMid(Node*&head,int pos){
if(head==NULL||pos==0){
    return;
}
if(pos==1){
    deletehead(head);
}
if(pos==length(head)){
    deletetail(head);
}
int jump=1;
Node*temp=head;
while(jump<=pos-2){
    temp=temp->next;
    jump++;
}
Node*temp2=temp->next;
temp=temp2->next;
delete temp2;
}
Node* take_Input(){
    int d;
    cin>>d;
    Node*head=NULL;
    while(d!=-1){
        insertAthead(head,d);
        cin>>d;
    }
    return head;
}
//search operation
bool searchRecursive(Node*head,int key){
    if(head==NULL){
        return false;
    }if(head->data==key){
        return true;
    }
    else{
    searchRecursive(head->next,key);
}
}
//operator overloading
ostream& operator<<(ostream &os,Node*&head){
    display(head);
    return os;
}
istream& operator>>(istream &is,Node*&head){
    head=take_Input();
    return is;
}
void reverse(Node*&head){
    Node* C=head;
    Node* P=NULL;
    Node* N;
    while(C!=NULL){
        N=C->next;
        C->next=P;
        P=C;
        C=N;
    }
    head=P;
}
Node* RecReverseLL(Node*head){
    if(head->next==NULL || head==NULL){
        return head;
    }
    Node *shead=RecReverseLL(head->next);
    Node*temp=head->next;
    temp->next=head;
    head->next=NULL;
    return shead;
} 
Node* midpoint(Node*head){
    if(head==NULL || head->next ==NULL){
        return head;
    }
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
//merge two sorted linked list
Node* merge(Node*a,Node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node*c;
    if(a->data < b->data){
        c=a;
        c->next=merge(a->next,b);
    }else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}
//merge sort
Node* merge_sort(Node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*mid=midpoint(head);
    Node*a=head;
    Node*b=mid->next;
    mid->next=NULL;

    a=merge_sort(a);
    b=merge_sort(b);

    Node*c=merge(a,b);
    return c;
}
//detect cycle
bool detectCycle(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            //contains cycle
            return true;
        }
    }
    returns false;
}
//main function
int main(){
	Node*head;
    Node*head2;
    cin>>head;
    cout<<head;
    // cin>>head2;
    // cout<<head2;
    Node*ans=merge_sort(head);
    cout<<ans;
    // head=RecReverseLL(head);
    // cout<<head;
    // Node*temp=midpoint(head);
    // cout<<temp->data;
    // cout<<endl;
    // Node*ans=merge(head,head2);
    // cout<<ans;
	// insertAthead(head,3);
	// insertAthead(head,2);
	// insertAthead(head,1);
	// insertAthead(head,0);

	// display(head);
    
 //    insertInMiddle(head,5,2);
 //    display(head);

 //    deletehead(head);
 //    display(head);

 //    deletetail(head);
 //    display(head);

 //    deleteAtMid(head,2);
 //    display(head);

 //    int key;
 //    cin>>key;

 //  bool ans=searchRecursive(head,key);
 //  if(ans){
 //    cout<<"Element found";
 //  }else{
 //    cout<<"Not found";
 //  }
    return 0;
}


