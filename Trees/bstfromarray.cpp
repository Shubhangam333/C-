#include<iostream>
#include<algorithm>
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
node * buildTreefromArray(int* a,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    node*root=new node(a[mid]);
    root->left=buildTreefromArray(a,s,mid-1);
    root->right=buildTreefromArray(a,mid+1,e);
    return root;
}
void printPre(node*root){
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}
int main(){
    int t;
	
    cin>>t;
    while(t--){
		int n;
    cin>>n;
    int a[100000];
        for(int i=0;i<n;i++){
        cin>>a[i];
    }
    node*root=buildTreefromArray(a,0,n-1);
    printPre(root);
	cout<<endl;
    }
    return 0;
}