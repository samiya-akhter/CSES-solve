#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define Y "YES"
#define N "NO"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18;
const int MAXN = 200005;
const int MOD = 1e9 + 7;

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }


void solve() {
  int n;
  cin>>n;
  vector<int> ans;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    auto it = upper_bound(all(ans),a);
    if(it==ans.end()){
      ans.push_back(a);
    }
    else *it=a;
  }

  cout<<ans.size();
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}