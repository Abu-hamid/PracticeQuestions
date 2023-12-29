#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the Value of A and B"<< endl;
	int a , b;
	cin >> a >> b;
	
	int Max = ((a + b) + abs(a - b))/2;
	int Min = ((a + b) - abs(a - b))/2;
	
	cout << Max << " " <<Min <<endl;
	
	return 0;
}
