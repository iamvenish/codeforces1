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
void  solve(){ 
     int n , k;

     cin >> n >> k;

     vi v(n);
     for(int i=0 ; i<n ; i++){
        cin >> v[i];
     }
      int ans=0;
     for(int i=0 ; i<n ; i++){
        int count=0;
        for(int j=i; j<i+k &&j<n ; j++){
            count+=v[j];
        }
        ans = max(ans , count);
     }
      cout << ans << endl;
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
   int t;
   cin >> t;
   while(t--){
        solve();
   }
    
    return 0;
}