#include <iostream>
using namespace std;
int main(){
    cout<<"hello world"<<endl;
    // int n;
    // cin>>n;
    string num = "suraj is a good boy";
    cin>>num;
    cout<<num<<endl;
    for (int i = 1; i <= num.length(); i++)
    {
        cout<<num[num.length()-i];
    }


    // int n; cin>>n; 
    // // n+=1;
    // cin.ignore(); 
    // char a[n+2];
    // cin.getline(a,n);
    // cin.ignore(); 
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout<<a[n-i-2];
    // }
    

    string s = "Hello suraj";
    reverse(s.begin(),s.end());
    cout<<s;
}