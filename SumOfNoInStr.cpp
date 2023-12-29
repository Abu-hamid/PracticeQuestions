#include <iostream>
#include <string>
using namespace std;

// int findSum(string str)
//     {
//         int res=0,num=0;
//         for(int i=0;i<str.size();i++)
//         {
//             while(str[i]>='0'&& str[i]<='9')
//             {
//                 res=res*10+str[i]-'0';
//                 i++;
//             }  
//             num += res;
//             res=0;
//         }
//         return num;
//     }

int main()
{
    cout<<"Enter the string"<< endl;
    char str[50] = "hello57";
    
    int sum = 0;
    
    for(int i =0 ; str[i] != '\0';i++){
        if((str[i] >= '0') && (str[i] <= '9'))
        sum = sum + (str[i] - '0');
    }
    
    cout << sum << endl;
    return 0;
}