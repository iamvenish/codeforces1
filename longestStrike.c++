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
      ll n, k , cnt=0;
      ll l = -1, final_val = -1 , maxi = 0;
      cin >> n >> k;
       map<ll , ll>mp;
         ll temp;
        for(int i=0 ; i<n ; i++){
            cin >> temp;
            mp[temp]++;
        }

        for(auto it : mp){
            if(it.second >= k){
                 if(cnt == 0){
                    l = it.first;
                    cnt++;
                 }
                 else{
                     if(l+cnt == it.first){
                        cnt++;
                     }
                     else{
                         if(cnt > maxi){
                            maxi = cnt;
                            final_val = l;
                         }
                         cnt = 1;
                         l = it.first;
                     }
                 }
            }
            else {
                if(cnt > maxi){
                    maxi = cnt;
                    final_val = l;
                }
            }
        }

        if(cnt > maxi){
            maxi = cnt;
            final_val = l;
        }

        if(final_val == -1){
            cout  << -1 << endl;
        }else {
        cout  << final_val << "  " << final_val + maxi-1 << endl;
        }
   } 
    
    return 0;
}