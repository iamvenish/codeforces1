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
      
      int t;
      cin >> t;

      while(t--){
        int n;
        cin >> n;

        vector<int>a(n) , b(n);

        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        for(int i=0; i<n ; i++){
            cin >> b[i];
        }
          int cnt=0;
        for(int i=0 ; i<n ; i++){
            if(a[i] == b[i]){
                cnt++;
            }
        }

        if(cnt == n){
             return 0;
        }
        

        




      }

    
    return 0;
}