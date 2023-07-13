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
void solve(){
   ll n;
   cin >> n;
   vector<ll>v(n);
   ll one=0 , two=0;

   for(ll i=0 ; i<n ; i++){
    cin >> v[i];
    if(v[i] == 1)one++;
     else two++;
   }

   if(two == 0){
    cout << 1 << endl;
    return;
   }
   if(two%2){
    cout << -1  << endl;
    return;
   }
   ll cnt=0;

   for(ll i=0 ; i<n-1 ; i++){
      if(v[i] == 2)cnt++;
      if(cnt == (two/2)){
        cout << (i+1) << endl;
        return;

      }
   }





}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
    ll t;
    cin >> t;

    while(t--){
        solve();
    }

    
    return 0;
}