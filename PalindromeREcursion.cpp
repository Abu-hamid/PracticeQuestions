
// Write a Program to Check if the Given String is Palindrome or not Using Recursion   


#include <iostream>
#include <string>
using namespace std;

bool solve(string str ,int s , int e){
    
    
    if(s == e)
    return true;
    
    if(str[s] != str[e])
    return false;
    
    if(s < e + 1)
    return solve(str ,  s + 1 , e - 1);
    
    
    return true;
    
}

bool palindrome(string str)
{
    int n = str.size();
   
    if (n == 0)
        return true;
     
    return solve(str, 0, n - 1);
}

int main()
{
    string str = "abba";
   if( palindrome(str)){
       
       cout << "true";
   }
   
   else{
       
       cout<< "false";
   }
    return 0;
}