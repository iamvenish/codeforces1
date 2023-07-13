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
       
        ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector < ll > ans(n);
        ans[0] = 2;
        ans[n - 1] = 3;
        ans[n / 2] = 1;
        ll cnt = 4;
        for(int i = 1; i < n - 1; i++)
        {
            if(i == n / 2) continue;
            ans[i] = cnt++;
        }
        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
    return 0;

    
    return 0;
}