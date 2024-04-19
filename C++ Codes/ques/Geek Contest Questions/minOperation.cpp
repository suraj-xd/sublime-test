#include <bits/stdc++.h>
using namespace std;
int minOperation(string a){
    string s = "";
    int operation = 0;
    for (size_t i = 0; i < a.length(); i++)
    {   
        if(s[0]==a[i]){
            s+=s;
            i = s.length()-1;
        }else{
            s+=a[i];
        }
        operation++;
    }
    return operation++;
}
int main(){
    string s;
    cin>>s;
    cout<<minOperation(s);
    /*
    abcabcd // 5 operation a ab abc abcabc abcabcd
    abcdefgh // 8 operation
    */
    
}