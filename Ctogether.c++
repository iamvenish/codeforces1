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
    cin >>t;
    while(t--){
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    int ans = 1;
    if ((bx < ax and cx < ax) or (bx > ax and cx > ax))
        ans += min(abs(bx - ax), abs(cx - ax));
    if ((by < ay and cy < ay) or (by > ay and cy > ay))
        ans += min(abs(by - ay), abs(cy - ay));
    cout << ans << endl;
    }
    return 0;
}