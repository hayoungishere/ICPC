//
//  gameMAP.cpp
//  ICPC_regional
//
//  Created by 김하영 on 2018. 1. 3..
//  Copyright © 2018년 HAYOUNG_KIM. All rights reserved.
//
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Cnt{
    int n;
    int count;
};

bool comp(Cnt a, Cnt b){
    return a.count < b.count;
}

int recur(vector<int>* v_arr, int index) {
    if (v_arr[index].size() == 0) return 0;
    
    else {
        int res = 0;
        int ans = 0;
        
        for (int i = 0; i < v_arr[index].size(); i++) {
            res += (1 + recur(v_arr, v_arr[index][i]));
            ans = max(ans, res);
            res = 0;
        }
        return ans;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
   
    vector<int> graph[n];

    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        }
    
    int* cnt=new int[n];
    
    for(int i=0; i<n; i++)
        cnt[i]=graph[i].size();
    
    cout<<"====cnt[i]===="<<endl;
    for(int i=0; i<n; i++)
        cout<<cnt[i]<<" ";
    
    vector<int> oneWAYgraph[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<graph[i].size(); j++){
            if(cnt[i]<cnt[graph[i][j]])
                oneWAYgraph[i].push_back(graph[i][j]);
                }
    }

    vector<Cnt> cntDir;
    Cnt temp;
    for(int i=0; i<n; i++){
        temp.n=i;
        temp.count=oneWAYgraph[i].size();
        cntDir.push_back(temp);
    }
    
    sort(cntDir.begin(),cntDir.end(),comp);
   
    int * result = new int[n];
    
    for(int i=0; i<n; i++) //result initialize.
        result[i]=0;
    
    rec(*result,n, *oneWAYgraph);
    
    delete[] result;
    delete[] cnt;
    
    return 0;
    
}

#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

struct dc {
    
    int index;
    int cnt;
    
};

int recur(int** dag, int index, int vertex) {
    
    int a=1;
    int re=1;
    for (int i = 0; i < vertex; i++) {
        if (dag[index][i] == 1) {
            //cout << "A";
            re = recur(dag, i, vertex);
        }
        if (re+1 > a)
            a = re+1;
    }
    return a;
}

bool Compareobj(dc first, dc second) {
    
    return first.cnt < second.cnt;
    
}



int main() {
    
    
    int vertex;
    int edges;
    
    int a, b;
    
    cin >> vertex;
    cin >> edges;
    
    int**adj = new int*[vertex];
    int**dag = new int*[vertex];
    int *count = new int[vertex];
    int *dagcount = new int[vertex];
    int *dp = new int[vertex];
    
    vector<dc> index;
    
    for (int i = 0; i < vertex; i++) {
        count[i] = 0;
        dagcount[i] = 0;
        dp[i] = 1;
        adj[i] = new int[vertex];
        dag[i] = new int[vertex];
    }
    
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            adj[i][j] = 0;
            dag[i][j] = 0;
        }
    }
    
    for (int i = 0; i < edges; i++) {
        
        cin >> a;
        cin >> b;
        
        count[a]++;
        count[b]++;
        
        adj[a][b] = 1;
        adj[b][a] = 1;
        
        
    }
    
    
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < i; j++) {
            
            if (adj[i][j] == 1) {
                if (count[i] > count[j]) {
                    dag[j][i] = 1;
                    dagcount[j]++;
                }
                else if (count[i] < count[j]) {
                    dag[i][j] = 1;
                    dagcount[i]++;
                }
            }
            
            
        }
    }
    
    
    
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++)
            cout << adj[i][j] << " ";
        
        cout << endl;
    }
    
    delete adj;
    
    cout << "___________________________________" << endl;
    
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++)
            cout << dag[i][j] << " ";
        
        cout << endl;
    }
    
    cout << "___________________________________" << endl;
    for (int i = 0; i < vertex; i++)
        cout << "count " << i << " : " << dagcount[i] << endl;
    
    index.resize(vertex);
    
    for (int i = 0; i < vertex; i++) {
        index[i].index = i;
        index[i].cnt = dagcount[i];
    }
    
    
    
    sort(index.begin(), index.end(), Compareobj);
    for (int i = 0; i < vertex; i++)
        cout << index[i].index << " " << index[i].cnt << endl;
    
    
    int   max = 0;
    int tmp;
    for (int i = 0; i < vertex; i++) {
        
        if (index[i].cnt == 0) {
            tmp = recur(dag, i, vertex);
            if (tmp > max)
                max = tmp;
        }
        
        else
            break;
    }
    
    cout << max<< endl;
}
*/
