#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string s){
    int n = s.length();
    string number = "";
    while (n!=0)
    {
        number+=s[n-1];
        n--;
    }

    return number;
}
int main(){
    string s = "geeknitin";
    string palin = "";
    int n = s.length();
    for (size_t i = 0; i < n; i++)
    {
        if(palin!=isPalindrome(palin)){
            string temp = "";
            temp = palin.substr(1,palin.length());
            palin=temp;
        }else if(palin==isPalindrome(palin)){
            palin+=s[i];
        }
    }
    cout<<palin;
}