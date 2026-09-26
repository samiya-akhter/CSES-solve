#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define no "n"
#define yes "y"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }

bool isPrime(int n){for(int i=2;i*i<=n;i++) if(n%i==0) return 0; return n>1;}

vector < int > get_divisors(int n) {
    vector < int > res;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);
            if (i * i != n) res.push_back(n / i);
        }
    }
    std::sort(res.begin(), res.end());
    return res;
}

void solve() {
  int n;
  cin>> n;
  vector<pair<int,int>> v;

  for(int i=0;i<n;i++){
    int start,finish;
    cin>> start >> finish;
    v.push_back({finish,start});

  }

  std::sort(v.begin(), v.end());
  int last_finish=0, ans=0;
  for(auto x:v){
    int start=x.second;
    int finish = x.first;

    if(start>=last_finish){
      ans++;
      last_finish=finish;

    }

  }
  cout<<ans;
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








