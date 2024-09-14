#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
void solve()
{
    ll n,m,q; cin>>n>>m>>q;
    ll t1,t2; cin>>t1>>t2;
    ll d1; cin>>d1;
    ll ans;
    if(d1>t1 && d1>t2){
      ll dist = min(d1-t1,d1-t2);
      ans = dist + (n-d1);
    }
    else if( d1 <t1 && d1 <t2){
      ll dist = min(t1-d1,t2-d1);
      ans = dist+d1-1;
    }
    else{
      ll x1 = abs(d1-t1);
      ll x2 = abs(d1-t2);
      ll maxi = max(x1,x2); 
      ll mini = min(x1,x2);
      ans = mini + (maxi-mini)/2;
    }
    cout<<ans<<endl;
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
    return 0;
}