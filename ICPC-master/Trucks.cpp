//
//  Trucks.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2017. 12. 20..
//  Copyright © 2017년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>

using namespace std;

struct Truck{
    int weight; // truck's weight
    int pos; // position on bridge
};

int main(){
    int n,l,w; //n is number of trucks, l is length of bridge and w is total weigth
    
    cin>>n>>l>>w;
    
    Truck* truck =new Truck[n];
    
    for(int i=0; i<n; i++){  //truck initialize
        cin>>truck[i].weight;
        truck[i].pos=0;
    }
    int cnt=0; //count number of trucks that pass away bridge.
    int time=0;
    int i=0;
    int p=0;
 int totalWei=0; // total weight on the bridge
    
    while(cnt!=n){
       
        while(truck[i].pos<l){
               time++;
            if(truck[i].pos==0){
                truck[i].pos++;
                totalWei=totalWei+truck[i].weight;
                p=i+1;
            }
        
           else if(truck[i].pos!=0 &&truck[p].weight+totalWei<=w){
                for(int j=i; j<=p; j++)
                    truck[j].pos++;
                totalWei=totalWei+truck[p].weight;
                p++;
            }
            else if(truck[i].pos!=0 &&truck[p].weight+totalWei>w){
                for(int j=i; j<p; j++)
                    truck[j].pos++;
           }
        }
        i++; cnt++; totalWei=0;
        for(int j=i; j<p; j++) totalWei=totalWei+truck[j].weight;
    }
    cout<<time+1<<endl;
    delete[] truck;
    return 0;
    }*/

