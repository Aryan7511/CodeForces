#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
const ll mod = 1e9 + 7;

long long power(long long a, long long b) {
    long long res = 1;
    while(b) {
        if (b & 1) 
        res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res;
}
 
void solve()
{
    int t; cin>>t;
    for(int i=0;i<t;i++){
      int x; cin>>x;
    }
    for(int i=0;i<t;i++){
      ll k; cin>>k;
      ll value = power(2,k);
      cout<<value<<endl;
    }
}
 
int main()
{ 
    aryan;
    clock_t start = clock();
 
    int t = 1;
    while (t--)
    {
        solve();
    }
    clock_t end = clock();
    
    return 0;
}