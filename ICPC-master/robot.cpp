//
//  robot.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 1. 10..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <string>
#include <iostream>

using namespace std;

void trans(int howlong,string dir ,int m, int& x, int& y,int& flag){
    if(dir=="east")
        x=x+howlong;
    else if(dir=="west")
        x=x-howlong;
    else if(dir=="south")
        y=y-howlong;
    else if(dir=="north")
        y=y+howlong;
    if(x>m || x<0|| y>m || y<0) flag=1;
}

int main(){
    int m,n;
    cin>>m>>n;
    int x=0; //x's inital position is 0
    int y=0; //y's inital position is 0
    int bad=0; //It is out of bound? YES->1
    string direction="east"; // the first robot's direction is east.
    string command="";
    int what;
    for(int i=0; i<n; i++){
      
        cin>>command>>what;
        if(command == "MOVE")trans(what,direction,m,x,y,bad);
        else {
            if(what == 0) {
            if(direction == "east") direction = "north";
            else if(direction == "north") direction = "west";
            else if(direction == "west") direction = "south";
            else if(direction=="south") direction="east";
        }
            if(what == 1){
            if(direction=="east") direction="south";
            else if(direction=="south") direction="west";
            else if(direction=="west") direction="north";
            else if(direction=="north") direction="east";
        }

    }
                 if(bad==1){ cout<<-1<<endl; return 1;}
    }
    
    cout<<x<<" "<<y<<endl;
    return 0;
}*/
