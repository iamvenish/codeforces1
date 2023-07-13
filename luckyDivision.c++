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
    
     ll n;
     cin >> n;

     int arr[13] = {4 , 7 , 44 , 47 , 74 , 77 , 444 , 447 , 474 , 477 , 744 , 747 , 777};
       bool val=0;
     for(int i=0 ; i<13 ; i++){
        if(n%arr[i] == 0){
            val=1;
            break;
        }
     }

      if(val){
          cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }
    
    return 0;
}