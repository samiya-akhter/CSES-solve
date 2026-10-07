#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define N "NO"
#define Y "YES"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }

void solve() {
  int a,b; cin>>a>>b;
  if(a < b) {
    int temp = a; 
    a = b;
    b = temp;
  }
  
  bool isPossible = (a <= 2 * b) ? true : false;
  a=a%3; b=b%3;

  if(isPossible){
    if((a == 0 && b == 0) || (a == 1 && b == 2) || (a == 2 && b == 1)) cout << Y << endl;
    else cout << N << endl;
  } else cout << N << endl;


}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}








