#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define aryan ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define line cout << endl;
 
void solve()
{
    int n; cin>>n;
    int cnt = n/5;
    int extCnt = n%5;
    vector<char> vec {'a','e','i','o','u'};
    for(int i=0;i<5;i++){
      char ch = vec[i];
      for(int j=0;j<cnt;j++){
        cout<<ch;
      }
      if(extCnt>0){
        cout<<ch; extCnt--;
      }
    }
    line;
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