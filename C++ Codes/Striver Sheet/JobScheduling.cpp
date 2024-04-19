#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct Job{
    int index;
    int profit;
    int dead;
};
class ComparePQ
{
public:
  bool operator()(Job &a, Job &b)
  {
    return a.profit < b.profit;
  }
};

class Solution
{
public:
  bool static compare(Job &a, Job &b)
  {
    if (a.dead == b.dead)
      return a.profit > b.profit;
    return a.dead > b.dead;
  }

  vector<int> JobScheduling(Job arr[], int n)
  {
    int count = 0, profit = 0;
    sort(arr, arr + n, compare);
    priority_queue<Job, vector<Job>, ComparePQ> pq;

    int deadline = arr[0].dead;
    int i = 0;
    while (i < n)
    {
      deadline = arr[i].dead;
      while (arr[i].dead == deadline)
      {
        pq.push(arr[i]);
        i++;
      }

      int next = 0;
      if (i < n)
        next = arr[i].dead;
      int diff = deadline - next;

      for (int i = 0; i < diff && pq.size(); ++i)
      {
        auto curr = pq.top();
        pq.pop();
        count++;
        profit += curr.profit;
      }
    }
    return {count, profit};
  }
};
int main(){
    
}