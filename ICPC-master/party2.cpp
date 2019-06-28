/*#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <functional>

#define INF 99999999

using namespace std;

int BFS(vector<pair<int, int> >* v_adj, vector<bool>& isVisited, int size, int src, int dst);

int main() {
    int nodes, edges, dst;
    scanf("%d%d%d", &nodes, &edges, &dst);
    vector<pair<int, int> >* v_adj = new vector<pair<int, int> >[nodes];
    
    int from, to, weight;
    for (int i = 0; i < edges; i++) {
        scanf("%d%d%d", &from, &to, &weight);
        v_adj[from - 1].push_back(make_pair(to - 1, weight));
    }
    
    vector<bool> isVisited(nodes);
    
    int forward = 0;
    int reverse = 0;
    int total = 0;
    int maxValue = 0;
    
    for (int i = 0; i < nodes; i++) {
        fill(isVisited.begin(), isVisited.end(), false);
        forward = BFS(v_adj, isVisited, nodes, i, dst - 1);
        fill(isVisited.begin(), isVisited.end(), false);
        reverse = BFS(v_adj, isVisited, nodes, dst - 1, i);  //여기여기 nodes+1
        
        total = forward + reverse;
        
        maxValue = max(maxValue, total);
    }
    
    
    printf("%d\n", maxValue);
    
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
