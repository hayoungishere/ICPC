/*
#include <iostream>

using namespace std;

int mSIZE;
int nSIZE;
bool result=false;
int** vis;

void check(int *arr[],int row, int col,int n,int m){
    if(row==mSIZE-1&& arr[row][col]==0){result=true; return;}
 
    else if(col==0&&arr[row][col]==0 &&vis[row][col]==0){
        vis[row][col]=1;
        if(row !=0) check(arr,row-1,col,n,m);
        check(arr,row,col+1,n,m);
        check(arr,row+1,col,n,m);
 
    }
    else if(col>0 && col<nSIZE-1 && arr[row][col]==0&& vis[row][col]==0){
          vis[row][col]=1;
        if(row !=0) check(arr,row-1,col,n,m);
        check(arr,row,col-1,n,m);
        check(arr,row+1,col,n,m);
        check(arr,row,col+1,n,m);

    }
    else if(col==nSIZE-1&& arr[row][col]==0 &&vis[row][col]==0){
          vis[row][col]=1;
        if(row !=0)check(arr,row-1,col,n,m);
        check(arr,row,col-1,n,m);
        check(arr,row+1,col,n,m);
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    //mSIZE=m;
    //nSIZE=n;
    //two dimensions dynamic memory allocation
    int** arr = new int* [m];
    vis = new int* [m];
    
    for(int i=0; i<m; i++){
        arr[i]= new int[n];
        vis[i]=new int[n];
    }
    
    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){
            char temp;
            cin>>temp;
            arr[i][j]=int(temp-48);
            vis[i][j]=0; //0 is not visited.
        }
    
    }
    for(int i=0; i<n; i++){
        if(arr[0][i]==0 &&vis[0][i]!=1)
            check(arr,0,i,n,m);
        if(result) break;
    }
    
    if(result) {cout<<"YES"<<endl; return 0;}
    else{
        cout<<"NO"<<endl;return 0;
    }
    
    //delete dynamic memory allocation
    for(int i=0; i<n; i++){
        delete[] arr[i];
        delete[] vis[i];
    }
    delete [] arr;
    delete [] vis;
}
*/

