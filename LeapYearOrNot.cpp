#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout<< "Enter the Value of Year :" << endl;
    cin>> n;
        
        if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0){
            
            cout << "the year is Leap Year"<< endl; 
        }
        
        else {
            cout<< "Not a Leap Year"<<endl;
        }
    
    
    return 0;
}