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
int Tsum = 3;
void solve(int index ,  vector<int> arr , int n , int sum , int &cnt){

    if(index >= n){
        if(sum == Tsum){
            cnt++;
        }
       cout << endl;
       return;
    }
    //  take 
   
    sum+=arr[index];
    solve(index+1 ,  arr , n , sum , cnt);
    sum-=arr[index];
    

    // not take 
    solve(index+1 , arr , n , sum , cnt);
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
       int n;
       cin >> n;

       vector<int>arr;+
       arr.resize(n);
         
         int sum=0;
       for(int i=0 ; i<n ; i++){
        cin >> arr[i];
       }

        int cnt = 0;

        solve(0 ,  arr , n , sum , cnt);

        cout  << cnt  << endl;
    
    return 0;
}