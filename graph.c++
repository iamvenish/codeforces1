#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define ll long long
#define pi  3.14159265358979323846264338327950288419
#define pii pair<int,int> 
#define f first
#define s second
#define vpii vector<pair<int , int>>
#define pb push_back


int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    

    // int n , m;
    // cin >> n >> m;
    // int adj[n+1][m+1];
    // for(int i=0 ; i<m ;i++){
    //     int u,v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u]=1;
    // }

    // second and optimize way to declare the graph 
    int n , m;
    cin >>n >> m;

    vector<int>adj[n+1];

    for(int i=0 ; i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);


         // if directed graph then the store the value on the one  diorection 
         adj[u].push_back(v);
         
    }

    
    return 0;
}