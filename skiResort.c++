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
#define vcin(a)  for(auto &i : a)cin >> i;

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
        int t;
        cin >> t;
        while(t--){
            ll n , k , q;
            ll ans = 0 , cnt=0;
            cin >>n >>k >>q;
            vector<int>a(n);
             vcin(a);

             for(ll i=0 ; i<n ; i++){
                if(a[i] > q){
                      if(cnt>=k){
                        ans += ((cnt-k+1)*(cnt-k+2))/2;
                       
                      }
                       cnt=0;
                } 
                else {
                        cnt++;
                    }
            }

            if(cnt>=k){
                ans += ((cnt-k+1)*(cnt-k+2))/2;
            }

            cout << ans  << endl;
        }
      

       

    
    return 0;
}