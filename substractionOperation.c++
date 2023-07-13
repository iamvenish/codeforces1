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
        ll n , k;
        cin >> n >> k;

        int ans[n];
         
        for(int i=0 ; i<n ; i++){
            cin >> ans[i];
        }
        sort(ans , ans+n);
        //   ll mini = 0;
        // logic 
        //  bool flag = false;
         bool result = false;
          for(int i=0 ; i<n ; i++){

            int findElement = ans[i]+k;

            if(binary_search(ans+i+1 , ans+n ,findElement)){
                cout  << "YES" << endl;
                 result = true;
                 break;
            }
          }
         
         if(!result){
            cout  << "NO" << endl;
         }
    }


    

    
    return 0;
}