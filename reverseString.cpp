

 // Write a C++ Program to Print the Given String in Reverse Order Using Recursion

#include <iostream>
#include <string>
using namespace std;

void reverse(string str){
    
    if(str.length() == 0)
    return;
    
    reverse(str.substr(1));
    cout<< str[0];
}

int main()
{
    string str = "asdfghhj";
    reverse(str);
    return 0;
}