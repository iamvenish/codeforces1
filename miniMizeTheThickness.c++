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
        ll n;
        cin >> n;
        ll sum=0;
        vector<ll>ans(n);

        for(int i=0 ; i<n ; i++){
            cin >> ans[i];

        }

          for(auto x : ans){
            sum+=x;
          }
      
        // logic 

        ll store=0 , mini = n , count =0;

        for(int i=0 ; i<n ;i++){
            store+=ans[i];
            count++;
               ll store_maxi=0;
            if(sum%store == 0){
                 store_maxi = count;
                 ll store_sum=0 , store_count=0;
                 for(int j = i+1 ; j<n ; j++){
                     store_sum+=ans[j];
                     store_count++;
                     if( store_sum == store){
                        store_maxi = max(store_maxi , store_count);
                        store_sum=0 ;
                        store_count=0;
                     }
                 }
                 if(store_sum == 0){
                    mini = min(mini , store_maxi);
                 }
            }
        }

        cout << mini << endl;

     }

    
    return 0;
}