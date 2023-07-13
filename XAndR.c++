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
    
     ll n , m;
     cin >> n >> m;
      
      ll a=0 , b , t=0;

      for(int i=0; i<m ; i++){
        cin >> b;
          if(a>b){
            t= t + (n-a) + b;
          }
          else if(a==b){
              t+=0;
          }
          else{
            t+=b-a;
          }

          a=b;
      } 

      cout << t-1 << endl;

    
    return 0;
}