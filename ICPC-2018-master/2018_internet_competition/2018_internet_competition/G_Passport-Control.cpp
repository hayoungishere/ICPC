//
//  G_Passport-Control.cpp
//  2018_internet_competition
//
//  Created by 김하영 on 2018. 10. 13..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//

#include <iostream>
#include <queue>

std::queue<int> control[101];
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    for(int i=0; i<101; i++)
        control[i].push(0);
    
    int new_number;
    bool check;
    for(int i=0; i<n; i++){
        cin>>new_number;
        check=false;
        for(int j=0; j<k; j++){
            if(control[j].back() < new_number){
                control[j].push(new_number);
                check=true;
                break;
            }
        }
        if(!check){
            cout<<"NO"<<endl;
            return -1;
        }
    }
    cout<<"YES"<<endl;
    
    return 0;
}
