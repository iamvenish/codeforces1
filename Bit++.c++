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

    int n;
    cin >> n;

    string  op1 = "X++";
    string op2 =  "++X";
    string op3 = "X--";
    string op4 = "--X";

    int t=0;

    while(n--){
        string str;
        cin >>str;
        if(op1 == str || op2 == str){
            t+=1;
        } 
        if(op3 == str || op4 == str){
            t-=1;
        }
    }


    cout << t << endl;
    

    
    return 0;
}