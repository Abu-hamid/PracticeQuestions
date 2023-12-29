#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getIndex(vector<int> v, int K)
{ 
    auto it = find(v.begin(), v.end(), K);
    
    if (it != v.end())  
    { 
        int index = it - v.begin(); 
        cout << index << endl; 
    } 
    else { 
        
        cout << "-1" << endl; 
    } 
} 

int main()
{
    vector<int> v = { 1, 45, 54, 71, 76, 17 }; 
    
    int K = 54; 
    getIndex(v, K); 

    return 0;
}