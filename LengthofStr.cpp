#include<iostream>
using namespace std;
int main(){
 char str[20];
cout << "Enter the String :"<<endl;
cin>> str;
int count =0;
int i = 0;
while(str[i] != '\0'){

    count++;
    i++;    
}

cout << count << endl;
    
return 0;
}