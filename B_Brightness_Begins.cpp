#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
  ll floorSqrt(ll n) {
    ll low = 1, high = n;
    ll ans = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (mid <= n / mid) {  
            ans = mid;  
            low = mid + 1;
        }
        else {
            high = mid - 1;  
        }
    }
    return ans;
}
 
  ll isPossible(ll n, ll k){
    ll x = floorSqrt(n);
    ll kactual = n-x;
    return kactual>=k;
 }

 
void solve()
{
    ll k; cin>>k;
    ll low = k, high = 3e18;
    ll ans = -1;
    while(low<=high){
      ll mid = low+(high-low)/2;
      if(isPossible(mid,k)){
        ans = mid;
        high = mid-1;
      }
      else low = mid+1;
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
    
    #ifndef ONLINE_JUDGE
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << setprecision(10) << elapsed << endl;
    #endif
    return 0;
}