//
//  F_Parcel.cpp
//  2018_internet_competition
//
//  Created by 김하영 on 2018. 10. 13..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int w,n;
    cin>>w>>n;
    
    vector<int> parcels;
    
    int t;
    for(int i=0; i<n; i++){
        cin>>t;
        parcels.push_back(t);
    }
    
    sort(parcels.begin(),parcels.end());
    
    bool ch=false;
    int f1=0;
    int f2=1;
    
    int l1=parcels.size()-1;
    int l2=parcels.size()-2;
    
    while(f2 != l2 && f2 !=l2-1){
        if(parcels[f1]+parcels[f2]+parcels[l1]+parcels[l2]==w){
            cout<<"YES"<<endl;
            return 0;
        }
        else if(parcels[f1]+parcels[f2]+parcels[l1]+parcels[l2]>w){
            l1=l1-1;
            l2=l2-1;
        }
        else if(parcels[f1]+parcels[f2]+parcels[l1]+parcels[l2]<w){
            f1=f1+1;
            f2=f2+1;
        }
    }
    cout<<"NO"<<endl;
    
    return 0;
}
*/
