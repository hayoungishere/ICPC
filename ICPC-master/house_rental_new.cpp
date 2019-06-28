//
//  house_rental_new.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 1. 5..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include<iostream>
#include <algorithm>
#include<vector>
#include <math.h>

using namespace std;

struct facil {
    
    int point;
    int kind;
    
};

bool CompareObj(facil first, facil second) {
    return first.point < second.point;
}

int main() {
    
    int n;
    int k;
    
    
    cin >> k;
    cin >> n;
    
    int count = 0;
    
    vector<facil> arr;
    
    facil a;
    
    int current = 0;
    int left = 0;
    int right = 0; //0 -> -1
    int res_L = 0;
    int res_R = 0;
    long long dist = 1000000000;
    
    for (int i = 0; i < n; i++) {
        
        cin >> a.point;
        cin >> a.kind;
        
        arr.push_back(a);
        
    }
    
    arr.resize(n);
    
    
    sort(arr.begin(), arr.end(), CompareObj);
    
    //cout << "2";
    
    int *facility = new int[k + 1];
    
    for (int i = 0; i < k + 1; i++) {
        facility[i] = 0;
    }
    
    facility[arr[0].kind]++;
    
    count++;
    
    int rr = 100000;
    
    while (right<n || left<n) {
        //cout << "4";
        
        if (count == k) {
            
            rr = (arr[right].point + arr[left].point) / 2;  //중점
            if (max((rr-arr[left].point),(arr[right].point-rr)) < dist) {
                res_L = left;
                res_R = right;

                dist = max((rr - arr[left].point), (arr[right].point - rr));
            }

            facility[arr[left].kind]--;
            
            if (facility[arr[left].kind] == 0)
                count--;
            left++;
   
        }// end of if
        else {
            right++;
            if (right == n)
                break;
            facility[arr[right].kind]++;
            
            if (facility[arr[right].kind] == 1)
                count++;
            
        } //end of else
    } //end of while
    
  

    cout << arr[res_L].point + (arr[res_R].point - arr[res_L].point) / 2;
    
}*/
