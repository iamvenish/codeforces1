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
    
    string s;
    int n = s.length();

    for(int i=0 ; i<n; i++){
        cin >> s[i];
    }
     string s1;
    for(int i=0 ; i<n ; i++){
        cin >> s1[i];
    }
 
    int i=0 , j=n-1;

    while(i<=j){
        
      swap(s.begin() , s.end());
       i++;
       j--;
    }

    
    return 0;
}