/*#include<cstdio>
#include <vector>
#include <queue>
using namespace std;
#define INF 8765432
#define MAX 20001

typedef pair<int,int> point;

vector<pair<int,int>> ori[MAX];


int main()
{
    int V,E;
    scanf("%d %d",&V,&E);
    int K;
    scanf("%d",&K);
    
    for(int i=0; i<E; i++)
    {
        int s,e,w;
        scanf("%d %d %d",&s,&e,&w);
        ori[s].push_back(make_pair(e,w));
    }
    
    vector<int> dist(V+1,INF);
    dist[K] = 0;
    
    priority_queue<pair<int,int>> pq;
    pq.push(make_pair(K,0));
    
    while(!pq.empty())
    {
        int here = pq.top().first;
        int cost = pq.top().second;
        pq.pop();
        
        if(cost > dist[here])continue;
        for(int i=0; i<ori[here].size(); i++)
        {
            int nthere = ori[here][i].first;
            int ncost = cost + ori[here][i].second;
            if(ncost < dist[nthere])
            {
                dist[nthere] = ncost;
                pq.push(make_pair(nthere,ncost));
            }
        }
    }
    
    for(int i=1; i<=V; i++)
    {
        if(dist[i] == INF)
            printf("INF\n");
        else
            printf("%d\n",dist[i]);
    }
    
}
*/
