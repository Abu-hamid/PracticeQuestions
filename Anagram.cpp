#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
bool areAnagram(char*str1 , char*str2){
    
    int count1[256] = {0};
    int count2[256] = {0};
    int i;
    
    for(i =0 ;i<str1[i] & str2[i] ; i++){
        
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    
    if(str1[i] || str2[i])
    return false;
    
    for(i = 0 ;i<256;i++){
        
       if(count1[i] != count2[i])
       return false;
    }
    
    return true;
}
int main()
{   
    char str1[] = "gram"; // you can take inpute from user also;
    char str2[] = "arm";
 
    
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
 
    return 0; 
}