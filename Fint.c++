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
void solve()
{
 ll n, k, x;
 cin >> n >> k >> x;
if (x != 1)
{
cout << "YES" << endl;
 cout << n << endl;
for (int i = 1; i < n + 1; i++)
 {
 cout << 1 << " ";
  }
 cout << endl;
  return;
  }
  if (n == 1 || k <= 1)
  {
 cout << "NO" << endl;
  return;
   }
    if (n % 2 == 0)
     {
   cout << "YES" << endl;
   cout << n / 2 << endl;
    for (int i = 1; i <= n / 2; i++)
 { 
     cout << 2 << " ";
   }
   cout << endl;  
  return;
  }
  if (k > 2)
  {
     cout << "YES" << endl;
   cout << (n - 3) / 2 + 1 << endl;
   for (int i = 1; i <= (n - 3) / 2; i++)
    {
   cout << 2 << " ";
    }
   cout << 3;
   cout << endl;
   return;
   }
 cout << "NO"<<endl;
}

int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
       int t;
       cin >> t;

       while(t--){
          solve();
       }
    
    return 0;
}