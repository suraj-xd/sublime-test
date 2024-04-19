#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
// find pb_ds under mingW
// detail -> resize policy -> rename file extention with number
template<class T>
using oset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
// make it less_equal for multiset

// insert
// find_by_order(k): finding kth element
// find_by_key(x): finding elements smaller than x
// Lower_bound(x): first element greater >= x in the set
// Upper_bound(x): first element greast > x in the set
// remove(x): remove by index
int main(){
    oset<int> a;
    a.insert(1);
    a.insert(6);
    a.insert(2);
    a.insert(3);
    a.insert(2);
    // for(auto it:a) cout<<it<<" ";
    cout<<a.order_of_key(4);
}

// input:
// 7
// 1 1
// 1 2
// 1 4
// 2 1
// output: 2
// 1 8
// 1 16
// 3 4
// output: 2

// advantages

// 1. Can find the Kth element
// 2. number of elements smaller than k.
// other normal set func;