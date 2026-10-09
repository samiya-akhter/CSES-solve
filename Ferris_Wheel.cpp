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

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

bool isPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return 0;
  return n > 1;
}

int power(int a, int b)
{
  int ans = 1;
  while (b)
  {
    if (b & 1)
      ans *= a;
    a *= a;
    b >>= 1;
  }
  return ans;
}

void solve()
{
  int n,x;
  cin>>n>>x;
  vector <int> v(n);
  for(auto &a:v) cin>>a;
  sort(all(v));
  int cnt=0;
  int i=0,j=n-1;
  while(i<=j){
    int weight=x-v[j];
    if(i<j && v[i]<=weight){
      i++;
    }
    cnt++;
    j--;
  }

  cout<<cnt<<endl;
}

int32_t main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}