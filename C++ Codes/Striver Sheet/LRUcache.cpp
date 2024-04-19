#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
class LRUcache{
    public:
    unordered_map<int,pair<int,list<int>::iterator>> Cache;
    list<int> order;
    int size;
    LRUcache(int capacity){
        size = capacity;
    }

    int get(int key){
        if(Cache.find(key)==Cache.end()){
            return -1;
        }
        int ans = Cache[key].first;
        auto itr = Cache[key].second;
        order.erase(itr);
        order.push_front(key);
        Cache[key].second = order.begin();
        return ans;
    }

    void put(int key,int val){
        if(Cache.find(key)==Cache.end()){
            if(order.size()==size){
                auto oldest = order.back();
                Cache.erase(oldest);
                order.pop_back();
            }
            order.push_front(key);
            Cache[key]  = {value,order.begin()};
        }else{
            order.erase(Cache[key].second);
            order.push_front(key);
            Cache[key] = {value,order.begin()};
        }
    }
};
int main(){
    
}