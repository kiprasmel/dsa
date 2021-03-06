#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#if (0 || defined(DEBUG)) && !defined(PROD)
#define LOG(x) std::cout << x << "\n"
#define LOGS(x) std::cout << x << " "
#define LO(x) std::cout << x
#else
#define LOG(x)
#define LOGS(x)
#define LO(x)
#endif

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("in", "r", stdin); std::ifstream __input_file("in"); assert(__input_file.good());
	// freopen("out", "w", stdout);

	ll n;
	cin >> n;

	vector<ll> v(n);	
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}

	stringstream ss;
	for (ll i = 0; i < n; i++) {
		ll del_idx;
		cin >> del_idx;
		del_idx--;

		ss << v[del_idx] << " ";
		v.erase(v.begin() + del_idx);
	}

	cout << ss.str() << "\n";

	return 0;
}

