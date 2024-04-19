#include <iostream>
#include "fstream"
#include "string"
using namespace std;
// three type
// 1. fstreambase;
// 2. ifstream.
// 3. ofstream.
int main(){

    // read from a file
    string s;
    ifstream in("read.txt");
    while(in.eof()==0){
        getline(in,s);
        cout<<s; //hey i love u so much
    }
    cout<<s; //so much (last line stored)
    
    // writing into the file
    
    // ofstream out("writeln.txt");
    // out<<"I like you too 3 4\n";
    
    // reading the answer
    string s2;
    ifstream inn("writeln.txt");
    getline(inn,s2);
    cout<<"\n"<<s2;
    inn.close();
    in.close();



    
}