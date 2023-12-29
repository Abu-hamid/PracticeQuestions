#include<iostream>
#include<string>
using namespace std;

int main(){

string str;
cout<<"Enter a string" << endl;
cin>> str;
int  count = 0;
int i =0;
for(i = 0;i< str.length();i++){

    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    
    count++;    
     
    }
    
    cout << count <<endl;
return 0;
}

















