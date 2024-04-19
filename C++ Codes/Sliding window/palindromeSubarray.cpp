#include <bits/stdc++.h>
using namespace std;
// sliding window approach
bool isPalindrome(int n){
    int temp  =n,number = 0;
    while (temp>0)
    {
        number = number*10+temp%10;
        temp = temp/10;
    }

    if(number==n){
        return true;
    }
    return false;
}
int palindromeSubarray(vector<int> arr,int k){
    int num = 0;
    for (size_t i = 0; i < k; i++)
    {
        num = num*10 + arr[i];
    }
    if(isPalindrome(num)){
        return 0;
    }

    for (size_t j = k; j < arr.size();j++)
    {
        num = (num%(int)pow(10,k-1))*10 + arr[j];
        if(isPalindrome(num)){
        return j-k+1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,4,1,1,4};
    int k = 4;
    int ans = palindromeSubarray(arr,k);
    if(ans==-1){
        cout<<"Doesn't exist";
    }else{
        for (size_t i = ans; i < ans+k; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}