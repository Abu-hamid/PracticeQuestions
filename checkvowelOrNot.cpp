#include<iostream>
using namespace std;
int main(){

char ch;
cout << "Enter the char vowel"<<endl;
cin>> ch;

if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){

    cout <<"The Given character is the vowel"<<endl;
}

else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
    cout <<"The Given character is the vowel"<<endl;
}

else {
    
    cout <<"The Given character is the Consonant"<<endl;
    
}
return 0;
}