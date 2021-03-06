// #pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const ll INF = (1e9 + 7);

#if (0 || defined(DEBUG)) && !defined(EVAL)
#define LOG(x) std::cout << x << "\n"
#define LOGS(x) std::cout << x << " "
#define LO(x) std::cout << x
#define LOGA(x) for (const auto& y : x) { LOG(y); }
#define LOGSA(x) for (const auto& y : x) { LOGS(y); }
#define LOA(x) for (const auto& y : x) { LO(y); }
#else
#define LOG(x)
#define LOGS(x)
#define LO(x)
#define LOGA(x)
#define LOGSA(x)
#define LOA(x)
#endif

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// const char* __fin  = "in"; freopen(__fin,  "r", stdin); std::ifstream __input_file(__fin); assert(__input_file.good());
	// const char* __fout = "out"; freopen(__fout, "w", stdout);

	ll n, x;
	cin >> n >> x;

	vector<ll> v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}

	std::sort(v.begin(), v.end());

	vector<ll> count(x + 1, 0);
	vector<ll> min_coin(x + 1, -INF);
	
	count[0] = 1;

	for (ll i = 1; i <= x; i++) {
		for (ll c : v) {
			// if (i - c >= 0 && c >= min_coin[i - c]) {
			if (i - c >= 0 && c >= min_coin[i - c]) {
				count[i] += count[i - c];
				min_coin[i] = max(min_coin[i], c);
			}
		}
	}

	/*
	LOG("count");
	LOGA(count);
	LOG("\nmin_coin");
	LOGA(min_coin);
	LOG("");
	*/

	LOG("i\tcount\tmin_coin");
	for (ll i = 0; i <= x; i++) {
		LOG(i << "\t" << count[i] << "\t" << min_coin[i]);
	}
	LOG("");

	cout << count[x] << "\n";

	return 0;
}
