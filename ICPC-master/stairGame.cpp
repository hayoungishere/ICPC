//
//  stairGame.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 3. 20..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>
#include <algorithm>

using namespace std;
int sum=0;

void sumation(int i,bool type,int arr[]){
    cout<<"i :"<<i<<endl;
    if(i>0){
        if(type==true) {
            if(sum+arr[i-1]>=sum+arr[i-2]){
                sum=sum+arr[i-1];
            return sumation(i-1, false, arr);
            }
            else{
                sum=sum+arr[i-2];
                return sumation(i-2, true,arr);
            }
        }
        else{
            sum=sum+arr[i-3];
            return sumation(i-3, true, arr);
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    int* arr=new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    sum=arr[n-1]; //마지막부터 접근.......
    sumation(n-1,true,arr);
    
    cout<<sum<<endl;
    
    delete[] arr;
}*/
