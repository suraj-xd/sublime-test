#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
string keypadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0]; //9
    string code= keypadArr[ch-'0'];//9 //4
    string ros = s.substr(1);//2
    for(int i=0;i<code.length();i++){
        keypad(ros, ans+code[i]);
    }

}
int main(){
    keypad("92","");
    cout<<endl;
}