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
    cin  >> n;
     
     int arr[n][2];

     for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<2 ; j++){
            cin  >> arr[i][j];
        }
     }

      int cnt=0;

      for(int i=0 ; i<n ; i++){
         if(i==0){
            int j = i+1;

            while(j<n && arr[j] == arr[i]){
                j++;
            }

            if(j>=n || arr[j] > arr[i]){
                cnt++;
            }
             j = i-1;
         }

         else if(i==n-1){
              if(arr[i-1] > arr[i]){
                 cnt++;
              }
         }
         else {
             if(arr[i-1] > arr[i]){
                int  j = i+1;
                
                while(j<n && arr[j] > arr[i]){
                    j++;
                }

                if(j>=n  || arr[j] > arr[i]){
                    cnt++;
                }
                j = i-1;
             }
         }
      }
   
    
     if(cnt == 1){
        cout << "YES" << endl;
     }
      
      cout << "NO" << endl;

   } 
      
    return 0;
}