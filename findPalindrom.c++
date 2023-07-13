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
bool checkPalidrom(string &ans){
    if(ans.size() == 0){
        return true;
    }

    int l = 0 ,  r = ans.size()-1;

    while(l<=r){
        if(ans[l] == ans[r]){
            l++;
            r--;
        }
        else{
            return false;
        }
    }

    return true;
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
     int n;
     cin >> n;
     vector<string>ans;
   
     for(int i=0 ; i<n ; i++){
        cin >> ans[i];
     }
         string result;
      for(int i=0 ; i<n ; i++){
        if(checkPalidrom(ans[i]) == true){
            result = ans[i];
        }
      }
       
       cout << result  << endl;
    
    return 0;
}