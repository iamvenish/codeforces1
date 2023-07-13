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
void m(vector<int>&ans , int i , int j){
    int mid  = i+(j-i)/2;
    int low = mid-i+1;
    int high = j-mid;
   
     int *first  = new int[low];
     int *second  = new int[high];
    
     int midIndex = i;
     for(int i=0 ; i<low ; i++){
        first[i] = ans[midIndex++];
     }

     midIndex = mid+1;

     for(int i=0 ; i<high ; i++){
        second[i] = ans[midIndex++];
     }

      midIndex = i;

      int l1 = 0;
      int l2 = 0;

      while(l1 < low && l2 < high){
        if(first[l1] < second[l2]){
           ans[midIndex++] = first[l1++];
        }
        else {
            ans[midIndex++] = second[l2++];
        }
      }

      while(l1 < low){
         ans[midIndex++] = first[l1++];
      }

      while(l2 < high){
        ans[midIndex++] = second[l2++];
      }

}
void ms(vector<int>&ans , int i , int j){
    if(i>=j)return;
     
     int mid  = i + (j-i)/2;

    ms(ans , i , mid);
    ms(ans  , mid+1 , j);

    m(ans , i , j);
}
int main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
       int n;
       cin >> n;

       vector<int>ans ;
       for(int i=0 ; i<n ; i++){
         cin >> ans[i];
       }

     

       ms(ans , 0 , n-12);

       for(int i=0 ; i<n ; i++){
          cout << ans[i] << " ";
       }


    
    return 0;
}