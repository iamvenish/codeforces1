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
#define MOD 1000000007

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
      ll t;
      cin >> t;

      while(t--){
        ll n;
        cin >> n;

        vector<ll>arr1(n) , arr2(n) , number(n);

        for(int i=0 ; i<n ; i++){
            cin >> arr1[i];
        }

        for(int i=0 ; i<n ; i++){
            cin >> arr2[i];
        }

        sort(arr1.begin() , arr1.end());
        sort(arr2.begin() , arr2.end());

        ll j=0;

        for(int i=0 ; i<n; i++){
            while(arr1[j] <=arr2[i] && j!=n){
                j++;
            }
            if(j!=n){
                number[i] = n-j;
            }
        }

        sort(number.begin() , number.end());
        ll ans = 1;
        for(int i=0 ; i<number.size() ; i++){
            ans = ((ans%MOD)*((number[i]-i)%MOD))%MOD;
        }

        cout << ans  << endl;
    
      }
    return 0;
}