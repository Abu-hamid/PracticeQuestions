#include<iostream>
using namespace std;
int main(){

int a ,b ,c;
cout << "Enter the three No. one by one" <<endl;
cin>>a>>b>>c;

if(a > b &  b > c){
    cout << "a is the greater no.";
}

else if(b >a & b > c){

    cout<< "b is the greatest no.";
}

else {

    cout << " c is the greatest no.";
}
return 0;
}