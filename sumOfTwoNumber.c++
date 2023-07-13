#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)

int main() {
    int T=1;
    cin>>T;
    while(T--) { 
        int n;
        cin>>n;
        if(n&1) {
            cout<<"YES"<<'\n';
            rep(i,1,ceil(((double)n)/2)+1) cout<<i+i-1<<' '<<n-i+1+n<<'\n';
            rep(i,1,ceil(((double)n)/2)) cout<<i+i<<' '<<n-ceil(((double)n)/2)-i+1+n<<'\n';
        } else cout<<"NO\n";
    }
    return 0;
}