#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}	
};

node* buildtree(){
	int d;
	cin>>d;
	node*root=new node(d);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
	node*f=q.front();
	q.pop();
	int c1,c2;
	cin>>c1>>c2;
	if(c1!=-1){
	f->left=new node(c1);
	q.push(f->left);
	}
	if(c2!=-1){
	f->right=new node(c2);
	q.push(f->right);
	}
	}
	return root;
}

void printRightView(node*root,int level,int&maxlevel){
    if(root==NULL){
        return;
    }
    if(maxlevel<level){
        cout<<root->data<<" ";
        maxlevel=level;
    }
    
    printRightView(root->right,level+1,maxlevel);
     printRightView(root->left,level+1,maxlevel);
    
}
int main(){
    node*root=buildtree();
    int maxlevel=-1;
    printRightView(root,0,maxlevel);
}