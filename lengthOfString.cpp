

// Write a Program to Calculate the Length of the String Using Recursion

#include <iostream>
#include <string>
using namespace std;

int StrLen(char* str)
{
    if (*str == '\0')
        return 0;
     
     else
      return 1 + StrLen(str + 1);
}


int main()
{
    char str[] = "asdfghj";
    cout << StrLen(str) << endl;
    return 0;
}