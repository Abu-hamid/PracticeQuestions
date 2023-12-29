#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int Gcd(int a , int  b){
    
    if(a == 0){
        return b;
    }
    
    if(b == 0)
    return a;
    
    if(a == b)
    return b;
    
    if(a > b)
    return Gcd(a -b , b);
    
    return Gcd(a , b -a);
    
}

int main()
{
    int a ,   b;
    cout<< "Enter the Number" << endl;;
    cin>> a >> b;
    
    int ans =  Gcd(a , b);
    cout<< ans<<endl;
    
    
    
    return 0;
}
