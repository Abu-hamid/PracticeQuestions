#include<iostream>
#include<string>
using namespace std;

string solveStr(string s)
    {
        int n =s.size();
        int count =0;
        string ans="";
        for(int i =0;i<n;i++){
            if(s[i]!=' '){
                ans =ans+s[i];
            }else{
                continue;
                i++;
            }
        }
        return ans;
    }

int main ()
{

  string str;
  cout << "Enter a string" << endl;
//   cin >> str;
  getline(cin , str);
  string result;
  result = solveStr(str);
  cout << result<<endl;
  

  return 0;
}