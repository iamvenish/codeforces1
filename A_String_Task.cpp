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
     
      string s , s1;
      cin >> s;
       
       string v = "";
       int n = s.length();
      for(int i=0 ; i<n ; i++){
          if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'){
                  continue;
          }
          else {
              s1+='.';
              s1+=towlower(s[i]);
          }  
      }
      cout << s1 << endl;
    
    return 0;
}