#include <iostream>
using namespace std;

int fact(int n){
    
    if( n == 0 || n == 1)
    return n;
    
    else
    return n * fact(n-1);
}

int main()
{
    int n;
    cout<< "Enter the Number" << endl;
    cin>> n;
    cout<<fact(n)<< endl;
    return 0;
}