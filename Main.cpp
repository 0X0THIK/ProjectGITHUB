#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;

	cout << "Input your number: " << endl;
	cin >> a >> b >> c >> d;

	int max = d;

	if (a > b && a > c && a > d)
	{
		max = a;
	}
	else if (b > c && b > d)
	{
		max = b;
	}
	else if (c > d)
	{
		max = c;
	}

	cout << "Max = " << max << endl;

	return 0;
}