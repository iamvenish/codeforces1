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
bool div(int n){
  
  int val = 0;
  while(n){

     val+=n%10;
     n/=10;
  }

  if(val%3){
    return true;
  }

  return false;
}
bool unit(int n){
    
    if(n % 10 != 3){
        return true;
    }

    return false;
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
      
    vector<int>ans;

    for(int i=0 ; i<3000 ; i++){
        if(div(i) && unit(i)){
            ans.pb(i);
        }
    }


    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cout << ans[n-1] << endl;
    }
    
    return 0;
}