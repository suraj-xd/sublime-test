#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
struct petrolPump{
    int petrol[];
    int distance[];
    petrolPump(vi petro,vi dis,int n){
        petrol[n];
        distance[n];
        rep(i,0,petro.size()){
            this->petrol[i] = petro[i];
        }
        rep(i,0,dis.size()){
            this->distance[i] = dis[i];
        }
    }
};
int tour(petrolPump arr[], int n)
{
  int i = 0, j = 1;

  int curr_petrol = arr[i].petrol - arr[i].distance;

  while (i != j || curr_petrol < 0)
  {
    while (curr_petrol < 0 && i != j)
    {
      curr_petrol -= arr[i].petrol - arr[i].distance;
      i++;
      i = i % n;

      if (i == 0)
        return -1;
    }

    curr_petrol += arr[j].petrol - arr[j].distance;
    j++;
    j = j % n;
  }

  return i;
}

int main(){
    int N = 4;  
    vi Petrol = {4, 5 ,7 ,4};
    vi Distance = {6, 8 ,3 ,5};
    struct petrolPump arr(Petrol,Distance,N);
    int ans = tour(&arr,N);
    cout<<ans;

}

// bruteforce 

// int N = 4;  
// vi Petrol = {4, 5 ,7 ,4};
// vi Distance = {6, 8 ,3 ,5};  
// int cur_petrol = Petrol[0];
// int dis = Distance[0];
// int index = 0;
// rep(i,1,N){
//     if(cur_petrol-dis>=0){
//         cur_petrol+=Petrol[i];
//         dis+=Distance[i];
//     }else{
//         cur_petrol = Petrol[i];
//         dis = Distance[i];
//         index = i;
//     }
// }
// cout<<index;