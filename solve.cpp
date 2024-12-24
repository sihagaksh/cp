#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1e9+7
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define in1(a) ll a; cin >> a;
#define in2(a, b) ll a, b; cin >> a >> b;
#define in3(a, b, c) ll a, b, c; cin >> a >> b >> c;
#define in4(a, b, c, d) ll a, b, c, d; cin >> a >> b >> c >> d;
#define ins(s) string s; cin >> s;
#define all(v) v.begin(), v.end()
#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define FORR(i, a, b) for (ll i = a; i >= b; i--)
#define print(v) for(auto it: v) cout << it << " "; cout << endl;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tt int testcase; cin >> testcase; while (testcase--)
void pyes(){cout<<"YES\n";}
void pno(){cout<<"NO\n";}
void pzero(){cout<<"0\n";}
void pone(){cout<<"1\n";}
void pnegone(){cout<<"-1\n";}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }


int main() {
    fastio();
    tt {
        ll n, x, y;
        cin >> n >> x >> y;

        vector<ll> arr(n);
        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr.begin(), arr.end());

        ll lb = sum - y; // Lower bound
        ll ub = sum - x; // Upper bound

        ll cnt_upper = 0, cnt_lower = 0;

        // Count pairs for upper bound
        ll l = 0, r = n - 1;
        while (l < r) {
            if (arr[l] + arr[r] <= ub) {
                cnt_upper += (r - l);
                l++;
            } else {
                r--;
            }
        }

        // Count pairs for lower bound - 1
        l = 0, r = n - 1;
        while (l < r) {
            if (arr[l] + arr[r] <= lb - 1) {
                cnt_lower += (r - l);
                l++;
            } else {
                r--;
            }
        }

        cout << (cnt_upper - cnt_lower) << '\n';
    }
}