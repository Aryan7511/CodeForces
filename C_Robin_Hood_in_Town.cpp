#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
#define PI 3.1415926535897932384626
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
bool isPossible(vector<ll>&arr,ll x, ll n, ll sum){
   double val = (sum+x)/(1.00*n*2);
   ll k = (val > std::floor(val)) ? std::ceil(val) : val;
   
   int cnt=0;
   for(int i=0;i<n;i++){
     if(arr[i]<k) cnt++;
   }
   if(cnt>=(n/2+1)) return true;
   return false;
} 

void solve()
{
    ll n; cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    if(n==1 || n==2){
      cout<<-1<<endl; return;
    }
    ll maxi = *max_element(arr.begin(),arr.end());
    ll sum =0;
    for(int i=0;i<n;i++) sum+=arr[i];
    ll high = 2*n*(maxi+1) - sum;
    ll low =0;
    ll ans=-1;
    
    while(low<=high){
      ll mid = low+(high-low)/2;
      if(isPossible(arr,mid,n,sum)){
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