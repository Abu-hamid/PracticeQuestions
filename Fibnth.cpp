#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cout<< "Enter the Number" << endl;;
    cin>> N;
    
    int a = 0;
    int b = 1;
    int c;
    for(int i = 1 ; i <= N; i++){
        
        
        if(i <= 1)
        cout << i <<" ";
        
        else{
            c = a  + b;
            a = b;
            b = c;
            cout << b << " ";
        }
    }
    
    return 0;
}
