#include <bits/stdc++.h>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;

    void setName(string s){ // to access the private data of name object
        name = s;
    }
    void getName(){  // accesing the name object and printing it
        cout<<name<<endl;
    }
    void printInfo(){   // print function by accessing the data
        cout<<"Name"<<endl;
        cout<<name<<endl;
        cout<<"Age"<<endl;
        cout<<age<<endl;
        cout<<"Gender"<<endl;
        cout<<gender<<endl;
    }

    student(){
        cout<<"Default constructor"<<endl;
    }

    student(string s, int a, int g){ 
        cout<<"Parameterized constructor"<<endl;
        name = s;
        age  = a;
        gender = g;
    }

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
    }// default copy constructor dont point at the memory or location

    ~student(){
        cout<<"Destructor"<<endl;
    }

    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    } // operator overloading
};
int main(){
    // student arr[3]; // can make arrays of objects
    // for (size_t i = 0; i < 3; i++)
    // {   
    //     string s;
    //     cout<<"Name"<<endl;
    //     cin>>s;
    //     arr[i].setName(s);
    //     // cout<<"Age"<<endl;
    //     // cin>>arr[i].age;
    //     // cout<<"Gender"<<endl;
    //     // cin>>arr[i].gender;
    // }
    // for (size_t i = 0; i < 3; i++)
    // {   

    //     arr[i].getName(); //accesing the name object and printing it
    // }
    // for (size_t i = 0; i < 3; i++)
    // {   

    //     arr[i].printInfo();
    // }

    student a("Urvi", 20, 1); // using a constructor to fill the values
    // a.printInfo();
    student b;
    student c = a;

    if(c == a){
        cout<<"Same"<<endl;
    }else{
        cout<<"Not same"<<endl;
    }

    
}