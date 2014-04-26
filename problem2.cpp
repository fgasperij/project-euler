#include <iostream>

int sumFibonacciEven(int, int, int, int);

using namespace std;

int main(int argc, char const *argv[])
{
	int until = 4 * 1000 * 1000;
	int result = sumFibonacciEven(until, 1, 2, 0);

	cout << "The result of problem 2 is: " << result << endl;
	return 0;
}

int temp;

int sumFibonacciEven(int until, int first, int second, int sum) {
	if (second > until)
		return sum;
	
	if (second % 2 == 0) 
		sum += second;
	
	temp = first + second;
	first = second;
	second = temp;

	return sumFibonacciEven(until, first, second, sum);
}