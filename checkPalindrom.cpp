#include <iostream>
#include <string>
using namespace std;

bool isplindrom(string &s){
    
    int i =0 , j = s.size() -1;
    
    while(i <= j){
        
        if(s[i] != s[j]){
        i++;
        j--;
        return false;
        }
        
        else return true;
    
       }
       
      return true;
}
int main()
{
    string s;
    cout<< "Entet the string" << endl;;
    cin>> s;
    
    int  ans = isplindrom(s);
        cout<< ans << endl;;
    
 
    return 0;
}
