#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define tr(it, arr) for (auto it = arr.begin(); it != arr.end(); it++)
#define PI 3.1415926535897932384626
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    int a = (x+k-1)/k;
    int b = (y+k-1)/k;
    cout<<(b>=a ? 2*b : 2*a-1);
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