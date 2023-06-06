#include "iostream"
#include <vector>
#include "iterator"
using namespace std;

int main()
{
	vector <pair<int, string>> variable;
	vector <int> ::  iterator it;
	variable.push_back(make_pair(45,"minachi"));
	cout << variable.at(0).first<<"      "<<variable[0].second<<endl;

	vector<int> intcounter;
	for (int i = 0; i < 5; i++)
	{
		intcounter.push_back(i);
	}
	cout << intcounter.front()<<endl;
	it = intcounter.begin();
	cout << *it<<endl;
	return 0;
}