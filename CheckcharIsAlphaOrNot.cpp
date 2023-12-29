#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"Enter the Character"<<endl;
cin>>ch;

int ans = int (ch);

for(int i = 65 ;i <= 90;i++){
    if(ans ==i)
    cout<< "This is belong to the Alphabet"<<endl;
}

for(int i = 97 ;i <= 122;i++){
    if(ans ==i)
    cout<< "This is belong to the Alphabet"<<endl;
}
return 0;
}