#include <bits/stdc++.h>
using namespace std;
void permute(vector<int> &a, int index)
{
    if (index >= a.size() - 1)
    {
        for (auto it : a)
            cout << it << ' ';
        cout << endl;
    }
    else
    {

        for (int i = index; i < a.size(); i++)
        {
            swap(a[i], a[index]);
            permute(a, index + 1);
            swap(a[i], a[index]);
        }
    }
}

int main()
{
    vector<int> a = {1, 2, 3};
    permute(a, 0);
}