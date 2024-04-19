#include <iostream>
#include <vector>
#include <algorithm>
// lower_bound : (arr,arr+n,x)
// - pointer / iterator to first element >= x .
// - which means surity. it'll be always greater or equal to x.

// lower_bound : (arr,arr+n,x) - arr
// - count of element < x.

// upper_bound : (arr,arr+n,x)
// - pointer / iterator to first element strictly > x .
// - which means surity. it'll be always greater than x.

// upper_bound : (arr,arr+n,x) - arr
// - count of element <= x.
void solve()
{

    vector<int> arr = {1, 2, 3, 3, 3, 4, 5, 6, 6, 7, 8, 10};

    int q;
    cin >> q;
    for (auto it : arr)
        cout << it << ' ';
    cout << endl;
    while (q--)
    {
        int x;
        cin >> x;
        int lower = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int upper = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
        cout << "Elements < " << x << " are " << lower << endl;
        cout << "Elements <= " << x << " are " << upper << endl;
    }
}
int main()
{
    std::vector<int> arr = {1, 2, 4, 4, 6, 7, 9, 10};
    std::vector<int> test_values = {0, 2, 4, 5, 6, 8, 10, 11};

    for (int val : test_values)
    {
        // lower_bound: Pointer/iterator to the first element >= val
        auto lower = std::lower_bound(arr.begin(), arr.end(), val);

        // Count of elements less than val
        int count_lower = lower - arr.begin();

        // upper_bound: Pointer/iterator to the first element > val
        auto upper = std::upper_bound(arr.begin(), arr.end(), val);

        std::cout << "Value: " << val << std::endl;
        std::cout << "Count of elements less than " << val << ": " << count_lower << std::endl;

        if (lower != arr.end())
        {
            std::cout << "Lower Bound (element >= " << val << "): " << *lower << std::endl;
        }
        else
        {
            std::cout << "No lower bound found for " << val << std::endl;
        }

        if (upper != arr.end())
        {
            std::cout << "Upper Bound (element > " << val << "): " << *upper << std::endl;
        }
        else
        {
            std::cout << "No upper bound found for " << val << std::endl;
        }

        std::cout << "-----------------------------" << std::endl;
    }
}
