#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int                long long // __int128 for big integers with c++ 17 (64)
#define double             long double
#define pb                 push_back
#define mp                 make_pair
#define vi                 vector<int>
#define vvi                vector<vector<int>>
#define vpii               vector<pair<int,int>>
#define pii                pair<int,int>
#define umap               unordered_map
#define all(c)             c.begin(),c.end()
#define si(c)              (int)c.size()
#define lb                 lower_bound
#define ub                 upper_bound
#define gi                 greater<int>
#define rev                reverse
#define ff                 first
#define ss                 second
#define yes                cout << "YES" << endl
#define no                 cout << "NO" << endl
#define ayes               cout << "Yes" << endl
#define ano                cout << "No" << endl
#define nl                 cout << endl
#define hello              cerr << "hello" << endl
#define sp(x)              fixed << setprecision(x)
#define re                 return
#define p_q                priority_queue
#define FAST               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ppc                __builtin_popcountll

typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>ordered_set;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>ordered_multiset;
//find_by_order(k)  --> value at kth index (iterator)
//order_of_key(k)   --> index of value k

void dbg_out(){cerr << endl;}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
//copied from neal wu (The Legend)

const double pi = 3.14159265359;
const int mod = 1000000007;
const int modc = 998244353;
const int inf = LLONG_MAX;
const int neg_inf = LLONG_MIN;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); //use rng() instead of rand() //shuffle(all(a),rng)

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int lcm(int a, int b)
{
    int g = __gcd(a,b);
    return (a*b)/g;
}

int inline power(int a, int b, int p){
    a %= p;
    int ans = 1;
    while(b>0){
        if(b & 1)
            ans = (ans*a)%p;
        a = (a*a)%p;
        b >>= 1;
    }
    return ans;
}

int mod_inv(int n, int p){
    return power(n,p-2, p);
}

bool inline isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}

template<typename... T>
void W(T&&... args)
{
	((cout << sp(17) <<  args << " "), ...);
	nl;
}
template<typename... T>
void R(T&&... args)
{
	((cin >> args), ...);
}

template<class T>
void wv(T &v)
{
	for(auto x : v)
		cout << x << " " ;
	nl;
}
template<class T>
void rv(T &v)
{
	for(int i=0;i<si(v);i++)
		cin >> v[i];
}

int dx[] = {1,0,-1,0,1,-1,1,-1};  //for BFS in matrix
int dy[] = {0,1,0,-1,1,1,-1,-1};  //yeah! same

const int M = 3e5 + 5;

/*
int fact[M];
int ncr(int n, int r)
{
	int ans = fact[n];
	int denom = (fact[r]*fact[n-r])%mod;
	ans = (ans * mod_inv(denom,mod))%mod;
	return ans;
}
*/
//vector<int>v[M];

void solve()
{

}
int32_t main()
{
	FAST;
	int t = 1;
	cin >> t;
	/*
	fact[0] = 1;
	for(int i = 1;i<M;i++)
		fact[i] = (i * fact[i-1])%mod;
		*/
	int test = 1;
	while(t--)
	{
	//	cout << "Case #" << test << ": ";
		solve();
		test++;
	}
} 
