#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout<< "Enter the Nmber :" << endl;
    cin>> n;
    
    int count = 1;
    for(int i = n ; i > 1 ; i--){
        
        if( i == 0 || i == 1)
        cout << i<< endl;
        
        else {
             count = count*i;
            // cout<< count<<endl;
            
        }
    }
    
    cout<< count<<endl;
    
    
    return 0;
}