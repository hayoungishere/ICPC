//
//  main.cpp
//  truck
//
//  Created by 김하영 on 2018. 5. 13..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    
    int n,w,l; //n: 트럭의 수, w:다리의 길이, l:다리의 최대하중
    cin>>n>>w>>l;
    
    int* arr=new int[n];
    
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int* bridge =new int[w]; //다리의 길이로 배열 만듬.
    
    for(int i=0; i<w; i++)
        bridge[i]=0; //initialize all bridge[] to 0.
    
    int sum=0;
    int passedTruck=0; //다리를 지나간 트럭의 수
    
    while(passedTruck<n){
        if(bridge[0]!=0) passedTruck++; //지나간 트럭수 증가.
        for(int i=0; i<w-1; i++){
            bridge[i]=bridge[i+1]; //왼쪽으로 한칸 씩 이동.
        }
        
        }
    
    
    delete[] bridge;
    delete[] arr;
}
