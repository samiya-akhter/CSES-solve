#include <bits/stdc++.h>
using namespace std;

// pandame

#define int long long
#define endl "\n"
#define no "n"
#define yes "y"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 
const int MOD = 1e9+7;
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

bool isPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return 0;
  return n > 1;
}

vector<int> get_divisors(int n)
{
  vector<int> res;
  for (int i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      res.push_back(i);
      if (i * i != n)
        res.push_back(n / i);
    }
  }
  sort(all(res));
  return res;
}

int power(int a, int b)
{
  int res = 1;

  while (b > 0)
  {
    if (b & 1)
      res = (res * a) % MOD;

    a = (a * a) % MOD;
    b >>= 1;
  }

  return res;
}

void solve()
{
  int n;
  cin >> n;
  cout << power(2, n);
}

int32_t main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  // cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
