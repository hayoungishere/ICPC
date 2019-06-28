//
//  AssignRoom.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 4. 3..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <stdio.h>
#include <utility> // for using "Pair"
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int n;
    scanf("%d",&n);
    
    vector<pair<int,int>> arr;
    
    for(int i=0; i<n; i++){
        pair<int,int> p;
        scanf("%d %d",&p.first,&p.second);
        arr.push_back(p);
    }
    
    sort(arr.begin(),arr.end(),comp); //finish time으로 오름차순 정렬
    
    int cnt=1;
    int s,f; //첫번째로 회의실을 배정받는 팀의 시작, 끝시작.
    s=arr[0].first;
    f=arr[0].second;
    for(int i=1; i<n; i++){
        if(arr[i].first<f) continue;
       else {
            cnt++;
            s=arr[i].first;
            f=arr[i].second;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
*/
