#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define no "NO"
#define yes "YES"

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
  string s;
  cin>>s;
  map<char,int> freq;
  for(auto x:s) freq[x]++;
  int odd_cnt=0,even_cnt=0;
  char ch=0;
  for(auto [x,y]:freq){
    if(y&1) {
      odd_cnt++;
      ch=x;
    }
    else even_cnt++;
  }
  if(odd_cnt>1){
    cout<<"NO SOLUTION";
    return;
  }
  string odd="";
  int odd_freq=freq[ch];
  while(odd_freq--){
   odd+=ch;
  }
  freq[ch]=0;
  string pallin="";
  for(auto x:freq){
    while(x.second>0){
      pallin+=x.first;
      x.second-=2;
    }
  }
  string ans=pallin+odd;
  reverse(all(pallin));
  ans+=pallin;
  for(auto a:ans)cout<<a;
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








