#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
 
void solve()
{
    ll n,k; cin>>n>>k;
    ll opn=0;
    if(k==1 || k>n){
      cout<<n<<endl;
      return;
    }
    while(n!=0){
      if(k>n){
        opn+= n;
        break;
      }
       ll x= 1;
        while (x*k <= n) {
            x *= k;
        }
       n-=x;
       opn++;
    }
    cout<<opn<<endl;
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