#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
 
void solve()
{
    int n,k; cin>>n>>k;
    int cnt=0,ans=0;
    for(int i=1;i<=n;i++){
      int x; cin>>x;
      if(x==0 && cnt>0){
        ans++; cnt--; continue;
      }
      if(x>=k) cnt+=x;
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