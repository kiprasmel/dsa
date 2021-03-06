#pragma GCC optimize ("O3")
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
#define LOGA(x) for (const auto& y : x) { LOG(y); } cout << "\n";
#define LOGSA(x) for (const auto& y : x) { LOGS(y); } cout << "\n\n";
#define LOA(x) for (const auto& y : x) { LO(y); } cout << "\n\n"
#else
#define LOG(x)
#define LOGS(x)
#define LO(x)
#define LOGA(x)
#define LOGSA(x)
#define LOA(x)
#endif

void test_case() {
	ll n;
	cin >> n;

	ll left = 0;
	for (ll i = 0; i < n / 2; i++) {
		ll tmp;
		cin >> tmp;
		left += tmp;
	}

	ll right = 0;
	for (ll i = 0; i < n / 2; i++) {
		ll tmp;
		cin >> tmp;
		right += tmp;
	}

	if (left > right) {
		ll diff = left / right;

		for (ll i = 0; i < n / 2; i++) {
			cout << (-1) << " ";
		}
		for (ll i = 0; i < n / 2; i++) {
			cout << diff << " ";
		}
	} else if (left < right) {
		ll diff = right / left;

		for (ll i = 0; i < n / 2; i++) {
			cout << diff << " ";
		}
		for (ll i = 0; i < n / 2; i++) {
			cout << (-1) << " ";
		}
	} else /* eq */ {
		for (ll i = 0; i < n / 2; i++) {
			cout << 1 << " ";
		}
		for (ll i = 0; i < n / 2; i++) {
			cout << (-1) << " ";
		}
	}

	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// const char* __fin  = "in"; freopen(__fin,  "r", stdin); std::ifstream __input_file(__fin); assert(__input_file.good());
	// const char* __fout = "out"; freopen(__fout, "w", stdout);

	ll t;
	cin >> t;

	while (t--) {
		test_case();
	}

	return 0;
}

