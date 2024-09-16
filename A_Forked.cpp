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
    int a,b,x1,y1,x2,y2; cin>>a>>b>>x1>>y1>>x2>>y2;
    int ans=0;
    set<pair<int,int>> st;
    int dx[]={a,-a,a,-a,b,-b,b,-b};
    int dy[]={b,-b,-b,b,a,-a,-a,a};
    
    for(int i=0;i<8;i++){
      int r = x1 + dx[i];
      int c = y1 + dy[i];
       st.insert({r,c});
    }
    for(int i=0;i<8;i++){
      int r = x2 + dx[i];
      int c = y2 + dy[i];
      pair<int,int> p = {r,c};
      if(st.find(p)!=st.end()) ans++;
    }
    if(a==b){
      cout<<ans/2<<endl;
      return;
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