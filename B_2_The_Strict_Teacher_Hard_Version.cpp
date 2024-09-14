#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define ll long long
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
ll left_Teacher(vector<ll> &tpos, ll d){
    ll m = tpos.size();
    ll low = 0 , high = m-1;
    ll ans=-1;
    while(low <= high){
       ll mid =low+ (high-low)/2;
       if(tpos[mid]<d){
        ans = tpos[mid];
        low=mid+1;
       }
       else{
        high = mid-1;
       }
    }
    return ans;
}

ll right_Teacher(vector<ll> &tpos, ll d){
   ll m = tpos.size();
    ll low = 0 , high = m-1;
    ll ans=-1;
    while(low <= high){
       ll mid =low+ (high-low)/2;
       if(tpos[mid]>d){
        ans = tpos[mid];
        high = mid-1;
       }
       else{
        low = mid +1;
       }
    }
    return ans;
}

void solve()
{
    ll n,m,q; cin>>n>>m>>q;
    vector<ll> tpos(m);
    for(int i=0;i<m;i++) cin>>tpos[i];
    sort(tpos.begin(),tpos.end());
    for(int i=0;i<q;i++){
     ll d; cin>>d;
     ll ans;
     ll t1= left_Teacher(tpos,d);
     ll t2 = right_Teacher(tpos,d);
     if(t1 == -1 || t2 == -1){
      ll dist = t1 == -1 ? (abs(d-t2)) : (abs(d-t1));
      ll ext;
      if((t1 == -1 && d > t2) || (t2==-1 && d> t1)) ext = n-d;
      if((t1 == -1 && d < t2) || (t2==-1 && d < t1)) ext = d-1;
      ans = dist + ext;
      cout<<ans<<endl;
      continue;
     }
     
      ll x1 = abs(d-t1);
      ll x2 = abs(d-t2);
      ll maxi = max(x1,x2); 
      ll mini = min(x1,x2);
      ans = mini + (maxi-mini)/2;
      cout<<ans<<endl;
    }
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