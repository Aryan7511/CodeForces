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

int countEqui(vector<ll> &a,set<ll> &b){
   int n = a.size();
   ll cnt=0;
   for(int i=0;i<n;i++){
      ll val = a[i];
      if(b.count(val-1) && b.count(val+1)) cnt++;
   }
   return cnt;
}
 
void solve()
{
    ll n;
    cin>>n;
    vpl point;
    ll cntY0 = 0, cntY1=0;
    for(int i=0;i<n;i++) {
      ll x,y;
      cin>>x>>y;
      point.push_back({x,y});
      if(y==0) cntY0++; else cntY1++;
    }

    sort(point.begin(),point.end());
    ll cntWithSameX=0;
    for(int i=0;i<n-1;i++){
      if(point[i].first == point[i+1].first) cntWithSameX++;
    }
    ll ans=0;
    ans+= (cntY0-1)*cntWithSameX + (cntY1-1)*cntWithSameX;

    vector<ll> X;
    vector<ll> Y;
    set<ll> stX;
    set<ll> stY;
    for(int i=0;i<n;i++){
      if(point[i].second ==0){
          X.push_back(point[i].first);
      }else{
        Y.push_back(point[i].first);
      }
    }
    stY.insert(Y.begin(),Y.end());
    stX.insert(X.begin(),X.end());

    ans+= countEqui(X,stY) + countEqui(Y,stX);
    cout<<ans;
    line
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