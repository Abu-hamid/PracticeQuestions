#include<iostream>
#include<string>
using namespace std;

int main ()
{

  string str;
  cout << "Enter a string" << endl;
  cin >> str;
  for (int i = 0; i < str.length (); i++)
    {

      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
	{
	  
	  continue;
	}
	
	else{
	    
	    str.erase (i , 1);
	  i--;
	}
    }
    cout<<str<< endl;

  return 0;
}
