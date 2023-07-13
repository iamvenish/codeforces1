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
    
     ll n , m ;
     cin >> n >> m;

     if(m == 1){
        ll ans = (n*(n-1))/2;
        cout << ans  << " " << ans  << endl;
        return;
     }
     ll maxi = ((n-m+1)*(n-m))/2;
     


    
    return 0;
}