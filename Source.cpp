#include <iostream>
#include <math.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	long long int a, b;
	while (cin >> a >> b)
		cout << abs(a - b) << endl;
	return 0;
}