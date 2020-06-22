#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph{

    map<int, list<int>> adjList;

    public :
        void addEdge(int u, int v, bool bidir = true){
            adjList[u].push_back(v);
            if(bidir)
                adjList[v].push_back(u);
        }

        void traverse(){
            list<int> ans;
            map<int, bool> visited;
            set<int> available;
            ans.push_back(1);
            visited[1] = true;
            while(ans.size() < adjList.size()){
                int i = ans.back();
                for(auto j : adjList[i]){
                    if(!visited[j])
                        available.insert(j);
                }
                auto it = available.begin();
                ans.push_back(*it);
                visited[(*it)] = true;
                available.erase(it);
            }

            for(auto i : ans)
                cout << i << " ";
        }
};

int main() {
    Graph g;
    int n, m;
    cin >> n >> m;
    while(m--){
        int x, y;
        cin >> x >> y;
        g.addEdge(x, y);
    }
    g.traverse();
}
