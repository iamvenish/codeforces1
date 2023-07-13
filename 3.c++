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
int solve(int arr[] , int n , int index , int k){
   if(index == 0){
     return 0;
   }



   int miniStep = INT_MAX;

   for(int i=0 ; i<=k ; i++){

     if(index-i >=0){
        int jump  = solve( arr, n , index-i , k) + abs(arr[index] - arr[index-k]);

        miniStep = min(miniStep , jump);
     }
   }
     return miniStep;
    
  
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
     int n , k;
     cin >> n >> k;
      
      int arr[n];
      for(int i=0 ; i < n; i++){
        cin >> arr[i];
      }
     return solve(arr , n , 0 , k);
    

    return 0;
}