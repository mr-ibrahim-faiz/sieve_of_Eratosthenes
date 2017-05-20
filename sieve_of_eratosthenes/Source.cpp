/*
This program find all the prime numbers below a given number using
the Sieve of Erathosthenes.
(https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
*/

#include "Header.h"

int main() {
	vector<int> numbers;
	vector<int> marked;
	vector<int> primes;

	int max {0};
	int p {0};

	cout << "Please enter a number: " << endl;
	cin >> max;

	for (int i = 2; i <= max; ++i)
		numbers.push_back(i);

	p = 2;

	while (p <= max) {
		primes.push_back(p);

		for (int i = 2; p*i <= max; ++i)
			if(!is_marked(p*i,marked))
				marked.push_back(p*i);

		++p;

		while (is_marked(p, marked))
			++p;
	}

	sort(marked.begin(), marked.end());

	//cout << "\nmarked:" << endl;
	//for (int number : marked)
	//	cout << number << endl;

	cout << "\nprimes below " << max << ":" << endl;
	for (int prime : primes)
		cout << prime << endl;

	return 0;
}