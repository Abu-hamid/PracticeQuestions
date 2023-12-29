#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cout<< "Enter the Number" << endl;;
    cin>> N;
    int temp = N;
    
    int sum = 0;
    while(N > 0){
        
        int digit = N%10;
        sum = sum + (digit*digit*digit);
        N = N/10;
    }
    
    if(temp == sum){
        cout<< "Armstrong";
    }
    
    else{
        cout<< "Not a Armstrong";
    }
 
    return 0;
}
