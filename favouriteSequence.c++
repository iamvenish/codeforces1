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

        vector<int>arr(n);

        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }

        int k=0;

        for(int i=0 ; i<n ; i++){
            if(i%2 == 0){
                cout << arr[k]  << " ";
                continue;
            }
            else {
                cout << arr[n-1-k] << " ";
                k++;
            }
        }
        cout << endl;
     }
    
    return 0;
}