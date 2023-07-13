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
    string s;
    cin >> s;

    int i=0 , j=n-1;

    while(i<=j){
        
        if(s[i]!=s[j]){
            i++;
            j--;
        }
        else {
            break;
        }
    }

    cout << j-i+1 << endl;
   }
    

    
    return 0;
}