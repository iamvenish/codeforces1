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
void  solve(){ 
 
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
    int k;
    cin >> k;

    while(k--){
    string s;
    cin >> s;
  int m = s.length();
   if(m>10){
   string v = "";
   int n = v.length();
    

    for(int i=0 ; i<s.length() ; i++){
        v[0] = s[0];
        v[n-1] = s[m-1];
    }

    int element  = s.length()-2;
    
     cout << v[0] << element << v[n-1] <<  endl;
   }
   else{
     cout << s << endl;
   }
    }  

    
    return 0;
}