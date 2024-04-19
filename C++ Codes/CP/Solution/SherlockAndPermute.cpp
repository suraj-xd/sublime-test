#include <bits/stdc++.h>
using namespace std;
int global = 0;
// void permute(string str, string out){
//     if(str.size()==0){
//         cout<<out<<" ";
//         string check = out.substr(0,1);
//         if(check=="A"){
//             global++;
//             return;
//         }
//         cout<<check<<" ";
//     }
//     for (size_t i = 0; i < str.size(); i++)
//     {
//         permute(str.substr(1),out+str[0]);
//         rotate(str.begin(),str.begin()+1, str.end());
//     }
//     return;
// }
void permute(string str){
    sort(str.begin(), str.end());
    do
    {
    string check = str.substr(0,1);
       if(check=="1"){
           global++;
       }
    } while (next_permutation(str.begin(), str.end()));
    
}
int main(){
    int t; cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string arrM="",arrN="";
        for (size_t i = 0; i < m; i++)
        {
            arrM+="0";
        }
        for (size_t i = 0; i < n; i++)
        {
            arrN+="1";
        }
        string str = arrM+arrN; 
        permute(str);
        cout<<global<<endl;
        global=0;
    }
    // cout<<str;
    // int t; cin>>t;
    // while(t--){
        // string a,b;
        // cin>>a>>b;
        // string str = a+b;
    // }
    // permute(str);
}
// int main(){
//     string str = "ABC";
//     // permute(str,"");
//     permute(str);
// }