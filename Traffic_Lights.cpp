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

bool isPrime(int n){for(int i=2;i*i<=n;i++) if(n%i==0) return 0; return n>1;}

int power(int a,int b){int ans=1;while(b){if(b&1)ans*=a;a*=a;b>>=1;}return ans;}

void solve() {
  int x,n;
  cin>>x>>n;
  set <int> light;
  light.insert(0);
  light.insert(x);
  multiset<int> gap;
  gap.insert(x);

  for(int i=0;i<n;i++){
    int new_light;
    cin>>new_light;
    auto it=light.upper_bound(new_light);
    int r=*it;
    int l=*(--it);
    gap.erase(gap.find(r-l));
    gap.insert(new_light-l);
    gap.insert(r-new_light);
    light.insert(new_light);
    cout<<*(--gap.end())<<" ";
  }
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
 // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}