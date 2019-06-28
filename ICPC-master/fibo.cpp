//
//  fibo.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 3. 20..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <cstdio>
struct num{
    int n;
    long long int numONE;
    long long int numZERO;
};
int main(){
    int n;
    scanf("%d",&n);
    num fi[41];
    int* arr= new int[n];
    
    for(int i=0; i<n; i++)
        scanf("%d",&(arr[i]));
    
    fi[0].numONE=0;
    fi[0].numZERO=1;
    fi[1].numONE=1;
    fi[1].numZERO=0;
    
    for(int i=2; i<41; i++){
        fi[i].numONE=fi[i-1].numONE+fi[i-2].numONE;
        fi[i].numZERO=fi[i-1].numZERO+fi[i-2].numZERO;
    }
    
    for(int i=0; i<n; i++)
        printf("%lld %lld\n",fi[arr[i]].numZERO,fi[arr[i]].numONE);
}*/
