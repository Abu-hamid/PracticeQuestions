#include<iostream>
#include<string>
using namespace std;



int main ()
{

  int n;
  cout<< "Enter the number :"<< endl;
  cin>> n;
  
  int sum = 0;
  
  sum = n*(n+1)/2;
  
  cout<< sum << endl;


  /*
  for(int i =1;i<=10;i++){

    sum = sum + 1;
  }
  
  
  */
return 0;
}