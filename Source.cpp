/*pass by reference*/
/*arrays*/

#include "iostream"
using namespace std;

void fun(int *x, int *y)
{
	cout << endl<<"inside the function";
	cout << endl << x << ' ' << y;
	*x = 65;
	return;
}

void arras(void)
{
	int a;
	char b[50];
	cout << "eneter number of items" << endl;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		char d;
		cin >> d;
		b[i] = d;
	}
	cout << "the values are" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b[i];
		cout << endl;
	}
}

int main()
{
	int a = 4, b = 5;
	cout << endl << a << ' ' << b;

//	fun(&a, &b);
	cout << endl << a << ' ' << b;

	arras();

	return 5;
}