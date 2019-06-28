//
//  combination123.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 3. 19..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int howMany[11];
    howMany[0]=-1;
    howMany[1]=1;
    howMany[2]=2;
    howMany[3]=4;
    
    for(int i=4; i<11;i++)
        howMany[i]=howMany[i-1]+howMany[i-2]+howMany[i-3];
    
    for(int i=0; i<n; i++)
        cout<<howMany[arr[i]]<<endl;
}*/
