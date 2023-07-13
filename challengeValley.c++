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
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int ans=0;
    for(int i=0;i<n;i++){
        if(i==0){
            int j=i+1;
            while(j<n&&v[j]==v[i]){
                j++;
            }
            if(j>=n || v[j]>v[i]){
                ans++;
            }
            i=j-1;
        }
        else if(i==n-1){
            if(v[i-1]>v[i]){
                ans++;
            }
        }
        else{
            if(v[i]<v[i-1]){
                int j=i+1;
                while(j<n && v[j]==v[i]){
                    j++;
                }
                if(j>=n || v[j]>v[i]){
                    ans++;
                }
                i=j-1;
            }
        }
    }
    if(ans==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
     }

   
   return 0;
}