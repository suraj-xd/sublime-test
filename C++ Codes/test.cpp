#include <bits/stdc++.h>
using namespace std;
void welcome(){
  cout<<"\n\t\t\t|  WELCOME TO TYPING TEST  |\n";
}
int mode(){
  cout<<"\n\t| Choose Level |\n";
  cout<<"\n\t> Easy : Press 1\n";
  cout<<"\n\t> Medium : Press 2\n";
  cout<<"\n\t> Hard : Press 3\n";
  int type = -1;
  try  
  {
    cin>>type;
  }
  catch(const std::exception& e)
  {
    "\n\t\tPlease Enter a valid option: \n";
  }
  if(type==-1) mode();
  else return type;
}

int main(){
  // welcome();
  // int type = mode();
  // cout<<type<<endl;


}