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
        int n , k , cnt=0;
        cin >> n >> k;
        string s;
        cin >> s;
         
        if(n == k){  
            for(int i=0 ; i<n ; i++){
                if(s[i] == 'W')cnt++;
            }

            cout << cnt  << endl;
        }
        else{

            int i=0 , j=0;

            while(j<n){
               if(s[i] == 'B' && s[j] == 'B'){
                  
                  while(s[i] == 'B' && s[j] == 'B' && j<n){
                        if(j-i+1 == k && cnt == 0){
                            cout  << cnt << endl;
                            
                        }
                        else if(j-i+1 == k && cnt!=0){
                            cout  << cnt  << endl;
                        }


                        j++;
                  }
                  
                  if(s[i] == 'B' && s[j] == 'W' && j-i+1 <= k){
                      s[j] = 'B';
                      cnt++;
                      if(j-i+1 == k){
                        break;
                      }

                      j++;
                  } 
               }
            }

            cout  << cnt  << endl;
        }


        // check 
     }
       

    
    return 0;
}