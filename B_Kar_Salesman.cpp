#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n; k++)
#define pb push_back
#define ll long long
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
const ll mod = 1e9 + 7;

void solve(){
  ll n,x; cin>>n>>x;
  int arr[n];
  ll sum =0;
  for(int i=0;i<n;i++)cin>>arr[i];
  ll maxi =-1;
  for(int i=0;i<n;i++){
    sum+= arr[i];
    maxi = max(maxi,(long long)arr[i]);
  }
  ll val = (sum+x-1)/x;
  ll ans = max(val,maxi);
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