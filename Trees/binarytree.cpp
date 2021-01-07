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
//Input
// 3 4 -1 6 -1 -1 5 1 -1 -1 -1
//Output
//34651
node* buildTree(){
	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}
	node*root=new node(d);
	root->left=buildTree();
	root->right=buildTree();
	return root;
}
void print(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
		print(root->left);
		print(root->right);

}
void printPost(node*root){
	if(root==NULL){
		return;
	}
		
		printPost(root->left);
		printPost(root->right);
		cout<<root->data<<" ";

}
void printIn(node*root){
	if(root==NULL){
		return;
	}
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
}
int height(node*root){
	if(root==NULL){
		return 0;
	}
	int ls=height(root->left);
	int rs=height(root->right);
	return max(ls,rs)+1;
}
void printKthLevel(node*root,int k){
    if(root==NULL){
        return ;
    }
    if(k==1){
        cout<<root->data<<" ";
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
}
void printAllevel(node*root){
    int H=height(root);
    for(int i=1;i<=H;i++){
        printKthLevel(root,i);
        cout<<endl;
    }
}
int count(node*root){
    if(root==NULL){
        return 0;
    }
    return 1+count(root->left)+count(root->right);
}
int sum(node*root){
    if(root==NULL){
        return 0;
    }
     return root->data+sum(root->left)+sum(root->right);
}
void bfs(node*root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node*f = q.front();
   
        cout<<f->data<<" ";
        q.pop();
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return;
}
int diameter(node*root){
    if(root==NULL){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    int op1=h1+h2;
    int op2=diameter(root->left);
    int op3=diameter(root->right);

    return(max(op1,max(op2,op3)));
}
int replaceSum(node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL and root->right==NULL){
        return root->data;
    }
    int temp=root->data;
    root->data=replaceSum(root->left)+replaceSum(root->right);
    return temp+root->data;
}
node* buildTreefromArray(int *a,int s,int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;
    node*root=new node(a[mid]);
    root->left=buildTreefromArray(a,s,mid-1);
    root->right=buildTreefromArray(a,mid+1,e);
    return root;
}
node* lca(node*root,int a ,int b){
    if(root==NULL){
        return NULL;
    }
    if(root->data==a || root->data==b){
        return root;
    }

    node*leftans=lca(root->left,a,b);
    node*rightans=lca(root->right,a,b);

    if(leftans!=NULL and rightans!=NULL){
        return root;
    }
    if(leftans!=NULL){
        return leftans;
    }
    return rightans;
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
void printLeftView(node*root,int level,int&maxlevel){
    if(root==NULL){
        return;
    }
    if(maxlevel<level){
        cout<<root->data<<" ";
        maxlevel=level;
    }
    printLeftView(root->left,level+1,maxlevel);
    printLeftView(root->right,level+1,maxlevel);
    
    
}
node* createTreefRomInPre(int*in,int*pre,int s,int e){
    static int i=0;
    //Base case
    if(s>e){
        return NULL;
    }
    //Rec case
    node*root=new node(pre[i]);

    int index=-1;
    for(int j=s;j<=e;j++){
        if(in[j]==pre[i]){
            index=j;
            break;
        }
    }
    i++;
    root->left=createTreefRomInPre(in,pre,s,index-1);
    root->right=createTreefRomInPre(in,pre,index+1,e);
    return root;
}
int main(){
// 	node* root=buildTree();
// // 	print(root);
// //     cout<<endl;
// // 	printPost(root);
// //      cout<<endl;
// // 	printIn(root);
// //  cout<<endl;
// // 	int h=height(root);
// // 	cout<<h<<endl;
// //     printKthLevel(root,3);
//     // printAllevel(root);
//     bfs(root);
//     replaceSum(root);
// int a[]={1,2,3,4,5,6,7};
// int n=7;
// node*root=buildTreefromArray(a,0,n-1);
int in[]={3,2,8,4,1,6,7,5};
int pre[]={1,2,3,4,8,5,6,7};
int n=sizeof(in)/sizeof(int);
node*root=createTreefRomInPre(in,pre,0,n-1);
    bfs(root);
    cout<<endl;
    int maxlevel=-1;
    printRightView(root,0,maxlevel);
    cout<<endl;
 maxlevel=-1;
    printLeftView(root,0,maxlevel);
	return 0;
}