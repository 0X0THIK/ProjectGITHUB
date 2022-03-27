#include <iostream>

using namespace std;

int main() {
	int a, b;

	cout << "Input your number: " << endl;
	cin >> a >> b;

	int max = 0;

	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	cout << "Max = " << max << endl;

	return 0;
}