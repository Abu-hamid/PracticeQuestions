#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the Value of A and B"<< endl;
	int a , b;
	cin >> a >> b;
	
	if((a & ~b) == 0)
	cout << "Both A and B are same";
	else
	cout << "Both are Different Number"<<a << " " <<b<<endl;
	return 0;
}
