//
//  Q-Index.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2017. 12. 20..
//  Copyright © 2017년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* ref = new int[n]; //reference count
    for(int i=0; i<n; i++)
        cin>>ref[i];
    int q=n;
    for(q; q>0; q--){
        int aboveQ=0;
        int belowQ=0;
        for(int i=0; i<n; i++){
            if(ref[i]>=q) aboveQ++;
            else belowQ++;
        }
        if(aboveQ>=q && belowQ<=q) break;
    }
    
    delete[]ref;
    if(q==-1) {cout<<0<<endl; return 0;}
    else{
        cout<<q<<endl;
        return 0;}
}*/


