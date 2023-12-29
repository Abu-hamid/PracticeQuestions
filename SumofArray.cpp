#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{   
    int arr[6];
    cout<< "Enter the array value :"<<endl;
    for(int i =0 ;i<6;i++){
        
        cin>>arr[i];
    }
    
    int sum = 0;
    for(int  i=0 ;i<6;i++){
        
        sum = sum + arr[i];
    }
    
    cout << sum << endl;
    
    return 0; 
}
