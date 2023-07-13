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
int   solve(int index , int sum , int s  , vector<int>&arr  , int n){
    
    if(index == n){
        if(s == sum){
        // for(auto it: ans){
        //     cout << it << " ";
            // cout << endl;
            return 1;
        }
        return 0;
        }

  
    s+=arr[index];
    int l = solve(index+1 , sum, s , arr , n);

    s-=arr[index];
   
     // not take 
     int r = solve(index+1 ,  sum , s ,  arr , n);

     return l+r;
}

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }

        int sum;
        cin >> sum;

       cout <<  solve(0 ,  sum  , 0 , arr , n);
    
    return 0;
}