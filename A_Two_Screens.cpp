#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
 
void solve()
{
    string s,t; cin>>s>>t;
    int n = s.size(), m = t.size();
    int i=0,j=0,match=0;
    while(i<n && j<m){
       if(s[i]!=t[j]){
        break;
       }
       i++; j++;
       match++;
    }
    if(match==0) match=-1;
   int ans = (match+1) + (n-i) + (m-j);
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