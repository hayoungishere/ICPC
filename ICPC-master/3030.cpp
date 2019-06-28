//
//  3030.cpp
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

bool comp(int a, int b){
    return a>b;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n%10 != 0){ //30의 배수를 아예 만들 수 없는 경우
        printf("-1\n");
        return -1;
    }
    else{
        vector<int> arr;
        int temp=n;
        int sum=0;
        temp=temp/10;
        while(temp>0){
            arr.push_back(temp%10);
            sum=sum+temp/10;
            temp=temp/10;
        }
       // sort(arr.begin(),arr.end(),comp);
        sort(arr.begin(),arr.end());
        
        bool flag=true;
        while(flag){
        for(int i=0; i<arr.size(); i++)
            sum=sum+arr[i];
            if(sum%3 ==0){
                printf("we");
                
            }
            else{
            
            }
            
        }
    }

    return 0;
}*/

#include <iostream>
#include <algorithm>

using namespace std;

void thirty() {
    int n; //입력수
    int arr[6];
    cin >> n;
    int digit = 0;
    while (1) {
        arr[digit] = n % 10; //
        n = n / 10;
        digit++; //자릿수 증가
        if (n == 0) break;
    }
    int count = 0;
    for (int i = 0; i < digit; i++){ ///gkgkgkgk
        
        if (arr[i] == 0) count++;
    }
    if (count == 0) {
        cout << -1 << endl;
        return;
    } //10의 배수이어야 함
    int S = 0;
    for (int i = 0; i < digit; i++) {
        S += arr[i];
    }
    if (S % 3 != 0) {
        cout << -1 << endl;
        return;
    }
    sort(arr, arr + digit);
    for (int i = digit - 1; i >= 0; i--) {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    //ATM();
    //Coin();
    //Rope(); //아직못해쪄
    //Change();
    //Intern();
    thirty();
    return 0;
}
