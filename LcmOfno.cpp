#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int Gcd(int a , int  b){
    
    if(a == 0){
        return a;
    }
    
    if(b == 0)
    return b;
    
    if(a == b)
    return b;
    
    if(a > b)
    return Gcd(a -b , b);
    
    return Gcd(a , b -a);
    
}

int Lcm(int a , int b){
    
    return (a * b)/Gcd(a , b);
}

int main()
{
    int a ,   b;
    cout<< "Enter the Number" << endl;;
    cin>> a >> b;
    
    int ans =  Lcm(a , b);
    cout<< ans<<endl;
    
    
    
    return 0;
}
                             