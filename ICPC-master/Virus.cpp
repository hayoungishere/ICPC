
#include <iostream>
#include <math.h>

using namespace std;
/*
struct Node{
    //int num; //this node number.
    int left; //point to left child
    int right; //point to right child
};

int main(){
    int n;
    cin>>n;
    //Node* node=new Node[pow(2,n)+1];
    Node* node= new Node[2*n];
    node[0].num=1; node[0].left=&node[1]; node[0].right=&node[2]; //root initialize;
    for(int i=1; i<=n*2; i++){
        cin>>node[i].num;
        node[i].left=NULL;
        node[i].right=NULL;
    }
    for(int i=0; i<=n*2; i++){
        if(node[i].num!=0){
            node[i].left=&node[(i+1)*2-1];
            node[i].right=&node[(i+1)*2];
        }}
    int cnt=0;
    for(int i=0; i<=n*2; i++){
        if(node[i].left==NULL||node[i].right==NULL||node[i].right->num==0 || node[i].left->num==0){
            cnt++;
            for(int j=i; j>0; j=(j-1)/2)
                cnt++;
            break;
        }}
    cout<<cnt<<endl;
    return 0;
}

Node* node;
int N(int x){
    if(node[x].left==0 || node[x].right==0) return 1;
    else{
        return min(N(node[x].left),N(node[x].right))+1;
    }
    
}
int main(){
    int n;
    cin>>n;
    new Node[n];
    
    for(int i=0; i<n; i++){
       // node[i].left=-1, node[i].right=-1;
        cin>>node[i].left>>node[i].right;}
    
    cout<<N(1)<<endl;
}

*/
