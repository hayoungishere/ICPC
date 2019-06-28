//
//  findCard.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 4. 3..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    
    int n,m;
    scanf("%d",&n);
    vector<int> arr;
    for(int i=0; i<n; i++){
        int t;
        scanf("%d",&t);
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    
    scanf("%d", &m);
    vector<int> findN;
    for(int i=0; i<m; i++){
        int t;
        scanf("%d", &t);
        findN.push_back(t);
    }
    
    int left, right;

    
    vector<int> result;
    int flag;
    for(int j=0; j<m; j++){
        left=0; right=n-1; flag=0;
        while (left <= right){
            int mid = (left + right) / 2;
            if (arr[mid] > findN[j])
                right = mid - 1;
            else if (arr[mid] < findN[j])
                left = mid + 1;
            else{ //arr[mid]==findN[j]
                result.push_back(1);
                flag=1;
                break;
            }
        }
        if(flag==0) result.push_back(0);
      
    }
    
    for(int i=0; i<m; i++)
        printf("%d ", result[i]);
    
    
    return 0;
}*/
