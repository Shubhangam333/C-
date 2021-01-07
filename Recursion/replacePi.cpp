#include<iostream>
using namespace std;
char out[1000000];
int k=0;
void replace(char *a,int i){
    
    if(a[i]=='\0'){
        out[k++]='\0';
        return;
    }
    if(a[i]=='p'&&a[i+1]=='i'){
        out[k++]='3';
        out[k++]='.';
        out[k++]='1';
        out[k++]='4';
        replace(a,i+2);
    }
    else{
        out[k++]=a[i];
        replace(a,i+1);
    }
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
    char a[10000];
    cin>>a;
    replace(a,0);
    cout<<out<<endl;
    k=0;
    }
	return 0;
}
