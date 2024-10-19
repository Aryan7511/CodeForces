#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n; k++)
#define pb push_back
#define ll long long
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, arr) for (auto it = arr.begin(); it != arr.end(); it++)
#define PI 3.1415926535897932384626
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<ll, ll> ml;
typedef map<string, ll> msl;
typedef map<ll, string> mls;
typedef unordered_map<ll, ll> uml;
typedef unordered_map<string, ll> umsl;
typedef unordered_map<ll, string> umls;
typedef set<ll> sl;
typedef set<pair<ll, ll>> spl;
 
const ll mod = 1e9 + 7;
 
void solve()
{
    ll n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i : arr) cin >> i;
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
      for(ll k = i; k <= min(n-1, i+110); k++) {
        ll diff = abs(arr[i] - arr[k]);
        ll x = 0;
        if(diff == k - i) {
          x += k - i + 1;
        }
        ll remain = diff - (k - i);
        if(remain > 0 && remain % 2 == 0) {
          if(k + remain / 2 <= n-1) x++;
          if(i - remain / 2 >= 0) x++;
        } 
        // cout << i << " " << k << " " << x << endl;
        ans += 2ll * x;
      }
    }
    cout << ans << endl;
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