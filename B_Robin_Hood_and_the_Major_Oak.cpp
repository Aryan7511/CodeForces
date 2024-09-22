#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
 
void solve()
{
    ll n,k; cin>>n>>k;
    ll i = n-k+1;
    ll e1=0,e2=0;
    if((n*(n+1))%4==0) e1=1;
    if((i*(i-1))%4==0) e2=1;
    if((e1==0 && e2==0) || (e1==1 && e2==1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
int main()
{ 
    aryan;
    clock_t start = clock();
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    clock_t end = clock();
    
    #ifndef ONLINE_JUDGE
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << setprecision(10) << elapsed << endl;
    #endif
    return 0;
}