//
//  pinary_number.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 3. 21..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>
#include <stdio.h>

using namespace std;
struct str{
   long long int zero;
   long long int one;
};
int main(){
    int n;
    cin>>n;
    str * arr= new str[n+1];
    arr[0].zero=-1;
    arr[0].one=-1;
    
    arr[1].one=1;
    arr[1].zero=0;
    for(int i=2; i<=n; i++){
        arr[i].zero=arr[i-1].one+arr[i-1].zero;
        arr[i].one=arr[i-1].zero;
    }
    //cout<<arr[n].one+arr[n].zero<<endl;
    printf("%lld",arr[n].one+arr[n].zero);
}*/

