#include<bits/stdc++.h>

using namespace std;

// function for bfs traversal
vector<int> bfsTraversal(map<int, vector<int>>& aList, int start, int n){
    map<int, bool> visited;
    for(int v=0; v<n; v++) visited[v] = false;

    vector<int> nodes;

    queue<int> bfsq;
    bfsq.push(start);
    visited[start] = true;

    while(!bfsq.empty()){
        int u = bfsq.front();
        nodes.push_back(u);
        bfsq.pop();
        for(int v : aList[u]){
            if(!visited[v]){
                visited[v] = true;
                bfsq.push(v);
            }
        }
    }

    return nodes;
}


// recursive function for dfs traversal
void dfstraversal(map<int, vector<int>>& alist, vector<int>& nodes, vector<bool>& visited, int u){
    visited[u] = true;
    nodes.push_back(u);
    for(int v : alist[u]){
        if(!visited[v]){
            visited[v] = true;
            dfstraversal(alist, nodes, visited, v);
        }
    }
}


// function to create an adjacency list
map<int, vector<int>> AdjList(vector<vector<int>> &edges){
    map<int, vector<int>> alist;
    for(vector<int>&e : edges){
        alist[e[0]].push_back(e[1]);
    }

    return alist;
}