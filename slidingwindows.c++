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
void solve(vector<int>arr , int n , int k){

    int i=0 , j=0;
     int maxi = INT_MIN;
     int sum=0;
    while(j<arr.size()){
    sum+=arr[i];
    if(j-i+1 < k){
        j++;
    }
    else if(j-i+1 == k){
        maxi = max(sum , maxi);
        sum = sum-arr[i];
        i++;
        j++;
    }

    }
    cout << maxi << endl;;
}

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
      
      int n,k;
      cin >> n >> k;

      vector<int>arr(n);

      for(int i=0 ; i<n ; i++){
        cin >> arr[i];
      }

      solve(arr  , n , k);

    
    return 0;
}