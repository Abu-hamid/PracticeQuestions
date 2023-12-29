#include <iostream>
#include <string>
#include <math.h>
#include <climits>
using namespace std;

int minMax(int arr[] , int n){
    
    int mini = INT_MAX;
    int maxi = INT_MIN;
    
    for(int i =0 ;i<n ; i++){
        
        mini = min(arr[i] , mini);
    }
    return mini;
}


int getminMax(int arr[] , int n){
    
    int mini = INT_MAX;
    int maxi = INT_MIN;
    
    for(int i =0 ;i<n ; i++){
        
        maxi = max(arr[i] , maxi);
        
    }
    
    return maxi;
}



int main()
{
    int a[6];
    cout<< "Enter the Number" << endl;
     for(int i =0;i<6;i++){
       cin>>a[i];
     }
     
     int ans = minMax(a  , 6);
     cout<< ans << endl;
     
     int result = getminMax(a , 6);
     cout<< result;
     
    
    
    return 0;
}
