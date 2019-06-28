//
//  party.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 3. 14..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>
#include<cstdio>
#include <vector>
#include <queue>
#include <functional>  //greater

using namespace std;

#define INF 8765432
#define MAX 20001

typedef pair<int,int> point;

vector<pair<int,int>> ori[MAX];


int main()
{
    int n,m,x; //n: number of node, m: number of edge, x: start node number
    cin>>n>>m>>x;
    
    for(int i=0; i<m; i++){
        int s,e,w;
        cin>>s>>e>>w;
        ori[s].push_back(make_pair(e,w));
    }
    
    vector<int> dist(n+1,INF);
    dist[x]=0;
    
    priority_queue<pair<int,int>> pq;
    pq.push(make_pair(x,0));
    
    int maxV=0;
    
    while(!pq.empty())
    {
        int here = pq.top().first;
        int cost = pq.top().second;
        pq.pop();
        
        if(cost > dist[here])continue;
        if(here==x){ dist[ori[here][0].first]=cost; continue;}
        
        for(int i=0; i<ori[here].size(); i++)
        {
            int nthere = ori[here][i].first;
            int ncost = cost + ori[here][i].second;
            if(ncost < dist[nthere])
            {
                dist[nthere] = ncost;
                pq.push(make_pair(nthere,ncost));
            }
            maxV=max(dist[nthere],maxV);
        }
   
    }
    
    cout<<maxV;
}*/
