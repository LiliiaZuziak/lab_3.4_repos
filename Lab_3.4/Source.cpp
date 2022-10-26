#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x;
	double y;
	double r{};
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;


	if ((y <= pow((x - 1), 2) && y <= (x * x) / (r * r) && y >= x) ||
		(y <= (x * x) / (r * r) && y >= -x && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}