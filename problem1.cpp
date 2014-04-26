#include <iostream>

int nPartialSum(int);

using namespace std;

int main(int argc, char const *argv[])
{
	int until = 999;
	int result = 3 * nPartialSum(until/3) + 5 * nPartialSum(until/5) - (15 * nPartialSum(until/15));

	cout << "Problem 1 result is: " << result << endl;

	return 0;
}

int nPartialSum(int n) {
	return ( n * (n+1) ) / 2;
}