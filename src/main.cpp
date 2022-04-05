#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll x, y;
	cin >> x >> y;

	if (x == y) {
		cout << -1;
		return 0;
	}

	const auto& z = (100 * y) / x;

	auto l = ll{ 0 };
	auto r = ll{ x };
	auto mid = (l + r) / 2;
	while (l < r) {
		auto newZ = (100 * (y + mid)) / (x + mid);
		if (z < newZ) {
			r = mid;
		}
		else {
			l = mid + 1;
		}

		mid = (l + r) / 2;
	}

	if ((100 * (y + l)) / (x + l) == z) {
		cout << -1;
		return 0;
	}

	cout << l;

	return 0;
}