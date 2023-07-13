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
          
          string s;
          cin >> s;

          vector<vector<int>>pos(10);
          vector<int>idx(10 , 0);

          for(int i=0 ; i<s.length() ; i++){
              int digit = (s[i]-'0');
              pos[digit].push_back(i);
          }

          int m;
          cin >> m;
          string lr , rr;
          cin >> lr >> rr;
          int cpos = 0;

          for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<10 ; j++){
                while(idx[j] < pos[j].size()  &&  pos[j][idx[j]] < cpos){
                    idx[j]++;
                }
            }
              int pck = cpos;

          for(int j = (lr[i] - '0') ; j<= (rr[i]-'0') ; j++){
            if(idx[j] >= pos[j].size()){
               pck = s.length();
            }
            else{
                pck = max(pck , pos[j][idx[j]]);
            }
          }

          cpos = pck + 1;
          }

          if(cpos >= s.length() + 1){
            cout << "YES" << endl;
          }
          else{
            cout << "NO" << endl;
          }

        
       }
    
    return 0;
}