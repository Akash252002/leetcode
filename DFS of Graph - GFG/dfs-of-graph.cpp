//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>dfs(int node,vector<int>&ls,vector<int>&v,vector<int> adj[]){
        v[node]=1;
        ls.push_back(node);
        for(auto i:adj[node]){
            if(v[i]==0){
                dfs(i,ls,v,adj);
            }
        }
        return ls;
        
    }
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        // Code here
        vector<int>ls;
        int start=0;
        vector<int>v(n,0);
        dfs(start,ls,v,adj);
        return ls;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends