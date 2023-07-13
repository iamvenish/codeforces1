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
    
       ll t;
        cin >> t;
        while(t--){
            ll n , m;

            cin >> n >> m;
            ll  sum=0;
            ll b;
            vector<ll>ans , pre(n+1);

            for(ll i=0 ; i<n ; i++){
                cin >> b;
                ans.push_back(b);
            }
                   ll maxi = 0;
            sort(ans.begin() , ans.end());

           for( ll i=0 ; i<n ; i++){
              sum+=ans[i];
               pre[i+1] = pre[i] + ans[i];
           }

           for(ll i=0 ; i<=m ; i++){
             maxi = max(maxi , pre[n-i] - pre[2*(m-i)]);
           }
           cout << maxi << endl;
        }
    
    return 0;
}