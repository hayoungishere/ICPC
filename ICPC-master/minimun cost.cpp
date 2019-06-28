//
//  minimun cost.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 3. 14..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*

#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <functional>

#define INF 99999999

using namespace std;

int BFS(vector<pair<int, int> >* v_adj, vector<bool>& isVisited, int size, int src, int dst);

int main() {
    int city, bus;
    scanf("%d%d%d", &city,&bus);
    vector<pair<int, int> >* v_adj = new vector<pair<int, int> >[city];
    
    int from, to, weight;
    for (int i = 0; i < bus; i++) {
        scanf("%d%d%d", &from, &to, &weight);
        v_adj[from - 1].push_back(make_pair(to - 1, weight));
    }
    
    vector<bool> isVisited(city);
    
    int start,des;
    cin>>start>>des;
    
   cout<< BFS(v_adj,isVisited,city,start,des);
    return 0;
}

int BFS(vector<pair<int, int> >* v_adj, vector<bool>& isVisited, int size, int src, int dst) {
    vector<int> dist(size);
    fill(dist.begin(), dist.end(), INF);
    dist[src] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > path;
    path.push(make_pair(0,src));
    
    int curNode, curWeight, nextNode, nextWeight;
    while (!path.empty()) {
        curWeight = path.top().first;
        curNode = path.top().second;
        path.pop();
        
        isVisited[curNode] = true;
        
        for (int i = 0; i < v_adj[curNode].size(); i++) {
            nextNode = v_adj[curNode][i].first;
            nextWeight = curWeight + v_adj[curNode][i].second;
            
            if (isVisited[nextNode])
                continue;
            
            if (dist[nextNode] > nextWeight) {
                dist[nextNode] = nextWeight;
                path.push(make_pair(nextWeight, nextNode));
            }
        }
    }
    return dist[dst];
}
*/
