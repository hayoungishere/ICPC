
/*
#include <iostream>
#include <math.h>
using namespace std;

struct Node{
    int wei;
    int left;
    int right;
    int max;
};


int main(){
    int k; //height of binary tree
    cin>>k;
    int n;
    n=pow(2,k+1)-2+1;
    Node* node = new Node[n];
    
    node[0].wei=0;
    node[0].leftSUM=0;
    node[0].rightSUM=0;
    
    for(int i=1; i<n; i++){
        cin>>node[i].wei;
        node[i].leftSUM=0;
        node[i].rightSUM=0;
    }
    
    for(int i=n-1; i>0; i=i-2){

        if(i>=n/2){
            if(node[i].wei != node[i-1].wei){
                if(node[i].wei>node[i-1].wei) node[i-1].wei=node[i-1].wei+(node[i].wei-node[i-1].wei);
                else node[i].wei=node[i].wei+(node[i-1].wei-node[i].wei);
            }
            node[(i-1)/2].leftSUM=node[i-1].wei;
            node[(i-1)/2].rightSUM=node[i].wei;
        }
        else{
            if(node[i].wei+node[i].leftSUM != node[i-1].wei+node[i-1].leftSUM){
                if(node[i].wei+node[i].leftSUM>node[i-1].wei+node[i-1].leftSUM) node[i-1].wei=node[i-1].wei+(node[i].wei+node[i].leftSUM-(node[i-1].wei+node[i-1].leftSUM));
                else node[i].wei=node[i].wei+(node[i-1].wei+node[i-1].leftSUM-(node[i].wei+node[i].leftSUM));
            }
            node[(i-1)/2].leftSUM=node[i-1].wei+node[i-1].leftSUM;
            node[(i-1)/2].rightSUM=node[i].wei+node[i].leftSUM;
        }
    }
    
    int max=0; //result
    
    for(int i=0; i<n; i++)
        max=max+node[i].wei;
 
    cout<<max<<endl;
  
    delete[] node;

}

Node* node;
int x=0;
int che(int i){
    if(node[i].left==0 && node[i].right==0) return 0;
    
    else if(node[i].left==0 || node[i].right==0){
        
        if(node[i].left==0)
            return x=x+che(node[i].left)+node[node[i].left].wei;
        
        else
           return x=x+che(node[i].right)+node[node[i].right].wei;
    }
    
    else{
        return x=x+max((che(node[i].left)+node[node[i].left].wei),che(node[i].right)+node[node[i].right].wei);
    }
}

int main(){
    int n; //number of node
    cin>>n;
    node= new Node[n];
    
    for(int i=0; i<n; i++)
        cin>>node[i].wei>>node[i].left>>node[i].right;
    
   che(0);
    cout<<x<<endl;
}
*/
