#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int smallNo(int arr[] , int n){
    
    sort(arr, arr + n);
    return arr[1];
}
int main()
{   


int arr[] = {12, 13, 1, 10, 34, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int smallest = INT_MAX; 
    
    for (int i = 0; i < n; i++) 
    { 
        if (arr[i] < smallest) 
        { 
            smallest = arr[i]; 
        } 
    } 
    cout << "smallest element is: " << smallest << endl; 
  
    int second_smallest = INT_MAX; 
  
     
    for (int i = 0; i < n; i++) 
    { 
        if (arr[i] < second_smallest && arr[i] > smallest) 
        { 
            second_smallest = arr[i]; 
        } 
    } 
    cout << "second smallest element is: " << second_smallest << endl; 




















    // int arr[6];
    // cout<< "enter the value"<<endl;
    // for(int i =0;i<6;i++){
        // cin>>arr[i];
    // }
    // cout<< smallNo(arr , 6)<< endl;

    return 0;
}