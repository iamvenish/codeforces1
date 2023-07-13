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
    
     int   n;
     cin >> n;
    
      vector<int>arr(n);
      int Tsum=0 , sum=0 , cnt=0;
     for(int i=0 ; i<n ; i++){
        cin >> arr[i];
        Tsum+=arr[i];
     } 
       int val = Tsum/2;
       sort(arr.begin() , arr.end()); // 

       for(int i=n-1 ; i>=0 ; i--){
         sum+=arr[i];
         cnt++;
         if(sum>val){
            break;
         }
       }
   
      cout << cnt << endl;

    return 0;
}