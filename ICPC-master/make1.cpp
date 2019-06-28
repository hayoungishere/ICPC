//
//  make1.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 3. 18..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>
#include <algorithm>

using namespace std;

int d[1000001];
int idx=1;

void find(int n, int i){
    i=idx;
    if(i<=n){
        int temp=d[i-1]+1;
        if(i%3==0)
            temp=min(d[i/3]+1,temp);
        if(i%2==0)
            temp=min(d[i/2]+1,temp);
        d[i]=temp;
        idx++;
        
        return find(n,idx);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    d[0]=-1;
    d[1]=0;
    
    find(n,2);
    
    cout<<d[n]<<endl;
    return 0;
}
*/
