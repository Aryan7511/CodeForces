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

void solve()
{
  int n;
  cin >> n;
  vector<string> mat;
  for (int i = 0; i < n; i++)
  {
    string temp;
    cin >> temp;
    mat.push_back(temp);
  }

  vector<int> ans;

  for (int row = n - 1; row >= 0; row--)
  {
    for (int col = 0; col < 4; col++)
    {
      if (mat[row][col] == '#')
      {
        ans.push_back(col + 1);
        break;
      }
    }
  }

  for (auto &x : ans)
    cout << x << " ";
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