#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		long long n, k, x;
		cin >> n >> k >> x; // Read n, k, x for each test case

		// Calculate the minimum possible sum of k distinct integers
		// This is the sum of the first k natural numbers
		long long minimum_sum = (k * (k + 1)) / 2;

		// Calculate the maximum possible sum of k distinct integers
		// This is the sum of the largest k numbers from 1 to n
		long long maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

		// Check if x is within the range of possible sums
		if (x >= minimum_sum && x <= maximum_sum)
			cout << "YES" << endl; // If yes, print "YES"
		else
			cout << "NO" << endl; // Otherwise, print "NO"
	}
	return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)
