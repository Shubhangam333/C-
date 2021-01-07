#include<iostream>
#include<climits>
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
node* insertInBst(node*root,int data){
    if(root==NULL){
        return new node(data);
    }
    if(data<=root->data){
       root->left=insertInBst(root->left,data);
    }else{
       root->right=insertInBst(root->right,data);
    }
    return root;
}
node* build(){
    int d;
    cin>>d;

    node*root=NULL;

    while(d!=-1){
        root=insertInBst(root,d);
        cin>>d;
    }
    return root;
}
bool search(node*root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(data<root->data){
        return search(root->left,data);
    }else{
         return search(root->right,data);
    }
}
void bfs(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
        cout<<f->data<<" ";
        q.pop();
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    }
}
node* deleteInBST(node*root,int data){
    if(root==NULL){
        return NULL;
    }
    if(data<root->data){
        root->left=deleteInBST(root->left,data);
        return root;
    }else if(data<root->data){
    //1. Node with 0 children
        if(root->left==NULL and root->right==NULL){
            delete root;
            return NULL;
        }
    //2.Node with 1 children
        if(root->left!=NULL and root->right==NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL and root->left==NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
       //Node with 2 children
       node* replace=root->right;
       while(replace->left!=NULL){
           replace=replace->left;
       } 
       root->data=replace->data;
       root->right=deleteInBST(root->right,data);
       return root;
    }else{
        root->right=deleteInBST(root->right,data);
        return root;
    }

}
bool isBST(node*root,int minv=INT_MIN,int maxv=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data>=minv && root->data<=maxv &&isBST(root->left,minv,root->data)&&isBST(root->right,root->data,maxv)){
        return true;
    }
    return false;
}

int main(){
    node* root=build();
    bfs(root);
    // if(search(root,9)){
    //     cout<<"element exist";
    // }else{
    //     cout<<"no element exist";
    // }
    if(isBST(root)){
        cout<<"BST";
    }else{
    cout<<"Not BST";
    }
    return 0;
}