 //
//  RGB.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 3. 17..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    
    int** arr= new int*[n];
    for(int i=0; i<n; i++){
        arr[i]=new int[3];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++)
            cin>>arr[i][j];
    }
    int* red=new int[n];
    int* green=new int[n];
    int* blue=new int[n];
    
    red[0]=arr[0][0];
    green[0]=arr[0][1];
    blue[0]=arr[0][2];
    
    for(int i=1; i<n; i++){
        red[i]=min(arr[i][0]+green[i-1],arr[i][0]+blue[i-1]);
        green[i]=min(arr[i][1]+red[i-1],arr[i][1]+blue[i-1]);
        blue[i]=min(arr[i][2]+red[i-1],arr[i][2]+green[i-1]);
    }
    
    int minV=min(red[n-1],green[n-1]);
    
     cout<<min(minV,blue[n-1])<<endl;
    
    for(int i=0; i<3; i++)
        delete[] arr[i];
    
    delete[] arr;
    delete[] red;
    delete[] green;
    delete[] blue;
}*/
