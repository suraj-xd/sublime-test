#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
// getting kth permutation
string getKthPermutation(int n, int k)
  {
    vector<int> nums;
    int fact = 1;
    for (int i = 1; i < n; ++i)
    {
      nums.push_back(i);
      fact *= i;
    }
    nums.push_back(n);

    string ans;
    k = k - 1;

    for (int i = 0; i < n; ++i)
    {   
      cout<<"fact: "<<fact<<endl;
         cout<<"k: "<<k<<endl;
      int location = k / fact;
      cout<<"location: "<<location<<endl;
      ans.push_back(nums[location] + '0');
      cout<<"ans: "<<ans<<endl;
      nums.erase(nums.begin() + location);
      if (nums.size() == 0)
        break;

      k = k % fact;
      cout<<"k: "<<k<<endl;
      fact = fact / nums.size();
      cout<<"fact: "<<fact<<endl;
    }

    return ans;
  }
int main(){
    cout<<getKthPermutation(4,9);
}