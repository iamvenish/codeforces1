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
 // windows problem 

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
     int n;
     cin >> n;
      
    int k;
    cin >> k;
     int arr[n];

     for(int i=0 ; i<n ; i++){
        cin >> arr[i];
     }
     
     int i=0 , j=0;
      int sum=0;
     while(j-i+1 <=k){
       sum+=arr[j];
       j++;
     }

     int result = INT_MIN;

     while(j<n){
        sum = sum + arr[j]-arr[i];
        j++;
        i++;
        result = max(result , sum);
     }


     cout << result << endl;

    
    return 0;
}