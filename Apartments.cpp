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
    sort(all(res));
    return res;
}

void solve() {
  int n,m,k;
  cin >> n >> m >> k;
  vector <int> app(n);
  vector <int> apart(m);

  for(auto &x:app){
    cin>>x;
  }

  for(auto &x:apart) cin >> x;
  int ans=0;
  int i=0,j=0;
  sort(all(app));
  sort(all(apart));

  while(i<n && j<m){
    if(abs(apart[j]-app[i])<=k){
      i++;
      j++;
      ans++;
    }
    else if(apart[j]<app[i]-k){
      j++;
    }

    else i++;
  }
  cout<<ans<<endl;
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








