#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define fo(i, n) for (i = 0; i < n; i++)
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
void solve()
{
    int n,r; cin>>n>>r;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans =0;
    int sum=0;
    int rowsOcc=0;
    int extraPeople=0;
    for(int i=0;i<n;i++){
      int p = arr[i];
      sum+=p;
      if(p&1){
        extraPeople++;
      }
        rowsOcc+=p/2;
    }
    if(extraPeople&1){extraPeople--; rowsOcc++;}
    int remainingRows = r-rowsOcc;
    int rowsLeftAfterAllExtraPeople = remainingRows - extraPeople/2;
    int unhappyPeople = (extraPeople-2*rowsLeftAfterAllExtraPeople)<=0 ? 0 : (extraPeople-2*rowsLeftAfterAllExtraPeople);
    ans = sum-unhappyPeople;
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