#include <string> // insert(position, count, value), find, 
#include <vector> // push_back, pop_back, find(begin, end, value), insert, erase
#include <algorithm> // swap, reverse, sort, make_heap(begin, end), push_heap(begin, end), pop_heap(begin, end)
#include <unordered_set> // insert, erase, find
#include <bitset> 
#include <iostream> 
#include <unordered_map> // insert, erase, find
#include <queue> // front, back, insert (end), pop (front)
#include <deque> // (push, pop) front, (push, pop) back, 
#include <stack>
#include <cmath> // abs, pow(x, y) = x^y, floor, ceil, 
#include <numeric>

#define ll long long

const int mod = 1000000007;

using namespace std;

long long pow_mod(long long x, long long n, long long m) {
	long long y = 1;
	while (n > 0) {
		if (n % 2 == 1)
			y = (y % m * x) % m;
		n = n / 2;
		if (x > m)
			x = x % m;
		x = (x % m * x % m) % m;
	}
	return y % m;
}


int main() {
	int tt;
	char nl = '\n';
	cin >> tt;

	while (tt--) {
		int i, j, m, n;
		cin >> m >> n;
		vector<vector<int>> a;
		for (i = 0; i < m; i++) {
			a.push_back({});
			for (j = 0; j < n; j++)
				a[i].push_back(0);
		}

		if (m % 2 == 0) {
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					a[j][i] = i * m + j + 1;
		}
		else if (n % 2 == 0) {
			for (i = 0; i < m; i++)
				for (j = 0; j < n; j++)
					a[i][j] = i * n + j + 1;
		}
		else {
			vector<int> b(m);
			int count = -1;
			for (i = 0; i < m / 2; i++) {
				count++;
				b[i * 2 + 1] = count;
			}

			for (i = 0; i < (m / 2) + 1; i++) {
				count++;
				b[i * 2] = count;
			}

			for (i = 0; i < m; i++)
				for (j = 0; j < n; j++)
					a[i][j] = b[i] * (n) + j + 1;
		}

		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << nl;
		}
		
	}
}




/*
* 
*/

                                                    