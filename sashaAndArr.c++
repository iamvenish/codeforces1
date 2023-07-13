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
         vector<int>a(n);
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        sort(a.begin() , a.end());
        int i=0 , j= n-1;
        ll ans = 0;
        if(n%2 == 0){
        while(i<j){
           
           ans+=(a[j] - a[i]);
           i++;
           j--;
        }
        }
        else {
        while(i<j && j-i+1!=3){
           
           ans+=(a[j] - a[i]);
           i++;
           j--;
        }
         int maxi = INT_MIN;
         int mini = INT_MAX;
        for(int k = i ; k<=j ; k++){
            maxi = max(maxi , a[k]);
            mini = min(mini , a[k]);
        }
        ans+=(maxi-mini);
        }
        cout << ans  << endl;
      }

    
    return 0;
}