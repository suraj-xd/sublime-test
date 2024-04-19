// #include <bits/stdc++.h>
// using namespace std;
// #define vi vector<int>
// #define vvi vector<vi>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// int main(){
    
// }

// // Minimize digit sum

// #include<bits/stdc++.h>
// //#pragma GCC optimize "trapv"
// //#include<ext/pb_ds/assoc_container.hpp>
// //#include<ext/pb_ds/tree_policy.hpp>
// #define fast_az_fuk      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define ll               long long
// #define lll              __int128
// #define ull              unsigned ll
// #define ld               long double 
// #define pb               push_back 
// #define pf               push_front
// #define dll              deque<ll> 
// #define vll              vector<ll>
// #define vvll             vector<vll> 
// #define pll              pair<ll,ll> 
// #define vpll             vector<pll>
// #define dpll             deque<pll>
// #define mapll            map<ll,ll>
// #define umapll           umap<ll,ll>
// #define endl             "\n" 
// #define all(v)           v.begin(),v.end() 
// #define ms(a,x)          memset(a,x,sizeof(a))
// #define random(l,r,T)    uniform_int_distribution<T>(l,r)(rng)


// //#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>

// using namespace std;


// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// //using namespace __gnu_pbds;

// template<typename T> istream& operator >>(istream &in,vector<T> &v){ for(auto &x:v) in>>x; return in;}
// template<typename T> ostream& operator <<(ostream &out,const vector<T> &v){ for(auto &x:v) out<<x<<' '; return out;}
// template<typename T1,typename T2> istream& operator >>(istream &in,pair<T1,T2> &p){ in>>p.first>>p.second; return in;}
// template<typename T1,typename T2> ostream& operator <<(ostream &out,const pair<T1,T2> &p){ out<<p.first<<' '<<p.second; return out;}
// ll getSum(ll x){
//     ll sum = 0;
//     while(x) {
//         sum += x%10; x/=10;
//     }
//     return sum;
// }

// ll solve(ll n,ll i,ll d){
//     ll ans = INT_MAX;
//     if(n<10 && i == 0) return 0;
//     if(n>=10){
//         ans = min(ans,solve(getSum(n),i,d)+1);
//     }
//     if(i>0){
//         ans = min(ans,solve(n+d,i-1,d)+1);
//     }
//     return ans;
// }

// const bool tests = 1;
// void solve_case(){
//     ll n,d; cin>>n>>d;
//     pll p = {10,0};
//     for(int i=0;i<10;i++){
//         ll ans = getSum(n+i*d);
//         while(ans>=10) ans = getSum(ans);
//         if(ans > p.first) continue;
//         if(ans == p.first) {
//             p.second = min(p.second,solve(n,i,d)); continue;
//         }
//         p.first = ans; p.second = solve(n,i,d);
//     } 
//     cout<<p<<endl;
// }

// int32_t main()
// {
//     #ifdef LOCAL
//         freopen("error.txt", "w", stderr);
//         clock_t clk = clock();
//     #endif
//     fast_az_fuk
//     ll testcase=1; if(tests) cin>>testcase;
//     cout<<fixed<<setprecision(10);
//     for(ll test=1;test<=testcase;test++)
//     {//cout<<"Case #"<<test<<": ";
//         solve_case();
//     }
//     #ifdef LOCAL
//         cerr << '\n'<<"Time (in s): " << double(clock() - clk) * 1.0 / CLOCKS_PER_SEC << '\n';
//     #endif
//     return 0;
// }


// // 2D Point Meeting

// #include<bits/stdc++.h>
// using namespace std;
// #define ld long double
// int check(ld h,ld k,ld arr_x[],ld arr_y[],int n){
//     int steps = 0;
//     for(int j=0;j<n;j++){
//         ld xx=h-arr_x[j];
//         ld yy=k-arr_y[j];
//         if(xx==0 && yy==0){
//           steps+=0;
//         }
//         else if((xx==0 && yy!=0) || (xx!=0 && yy==0) ){
//           steps+=1;
//         }
//         else if(abs(xx)==abs(yy)){
//           steps+=1;
//         }
//         else steps+=2;
//     }
//     return steps ;
// }
// int main(){
//   int t;cin>>t;
//   for(int i = 0;i<t;i++){
//       int n;cin>>n;
//       ld arr_x[n],arr_y[n];
//       ld h,k;
//       for(int i=0;i<n;i++){
//           cin>>arr_x[i];
//       }
//       for(int i=0;i<n;i++){
//           cin>>arr_y[i];
//       }
//       int min_steps=INT_MAX;
//       for(int i=0;i<n;i++){
//           for(int l=0;l<n;l++)
//            {
//             h=(arr_x[i]+arr_x[l])/2;
//             k=(arr_y[i]+arr_y[l])/2;
//             min_steps=min(min_steps,check(h,k,arr_x,arr_y,n));
//             h = arr_x[i];
//             k = arr_y[l];
//             min_steps=min(min_steps,check(h,k,arr_x,arr_y,n));
//             ld c1=arr_x[i]+arr_y[i];
//             ld c2=arr_x[l]-arr_y[l];
//             h = (c1+c2)/2;
//             k = (c1-c2)/2;
//             min_steps=min(min_steps,check(h,k,arr_x,arr_y,n));
//             ld c3=arr_x[i]+arr_y[i];
//             h = arr_x[l];
//             k = c3-h;
//           min_steps=min(min_steps,check(h,k,arr_x,arr_y,n));
//             ld c4=arr_x[i]+arr_y[i];
//           k = arr_y[l];
//             h = c4-k;   
//             min_steps=min(min_steps,check(h,k,arr_x,arr_y,n));
//             ld c5=arr_x[i]-arr_y[i];
//             h = arr_x[l];
//             k = h-c5;
//             min_steps=min(min_steps,check(h,k,arr_x,arr_y,n));
//             ld c6=arr_x[i]-arr_y[i];
//             k = arr_y[l];
//             h = c6+k; 
//             min_steps=min(min_steps,check(h,k,arr_x,arr_y,n));
//           }
//       }
//         cout<<min_steps<<"\n";
//   }
//   return 0;
// }

// // Minimize Digit Sum

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,l,r,ans;
//         cin>>n>>l>>r;
//         if(r>n){
//         ans=r;}
//         if(l<n && n<r){
//         ans=n;}
//         else{
//             int minval = INT_MAX;
//             for(int i=r;i>=l;i--)
//             {
//                 int sum=0;
//                 int ntemp=n;
//                 while(ntemp>0)
//                 {
//                     sum+=ntemp%i;
//                     ntemp/=i;
//                     if(sum>minval)
//                     break;
//                 }
//              if(minval>sum)
//              {
//                  minval=sum;
//                  ans=i;
//              }
//             if(minval==1)
//             break;
//             }
//         cout<<ans<<"\n";
//         }
//     }
//     return 0;
// }


// // XOR Equal

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//  int a;
//  cin>>a;
//  while(a--){
//      int n,x,p;
//      cin>>n>>x;
//      unordered_map<int,int> mp;
//      unordered_map<int,int> present;
//      for(int i=0;i<n;i++){
//          cin>>p;
//          mp[p]++;
//          present[p]=1;
//      }
//      if(n==1){
//          cout<< 1 << " " << 0 << endl;
//          continue;
//      }
//      int ans=0;
//      int changes = 0;
//      for(auto it: mp){
//          if(it.second==n){
//              ans=n;
//              break;
//          }
//          if(it.second>=ans){
//              ans=it.second;
//          }
//      }
//      if(x==0){
//          cout<< ans << " " << changes << endl;
//          continue;
//      }
//      for(auto it:mp){
//          if(present[(it.first)^x]==1){
//              if(it.second + mp[(it.first)^x]>ans){
//                  ans = it.second + mp[(it.first)^x];
//                  changes = min(it.second,mp[(it.first)^x]);
//              }
//              else if(it.second + mp[(it.first)^x]==ans){
//                  if(min(it.second,mp[(it.first)^x]) < changes){
//                      changes = min(it.second, mp[(it.first)^x]);
//                  }
//              }
//          }
//      }
     
//      cout<< ans << " " << changes <<endl;
     
//      }
//      return 0;
//  }

// // Shuffling parties

// try:
//     for i in range(int(input())):
//             n = int(input())
//             odd =0
//             even=0
//             a = list(map(int, input().split( )))
//             for x in a:
//                 if x%2==1:
//                     odd+=1
//                 else:
//                     even+=1
//             pos = min(even, (n+1)//2 ) + min(odd, n//2)
//             print(pos)
// except:
//     pass


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             int temp;
//             cin >> temp;
//             v.push_back(temp);
//         }
//         int odd = 0, even = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if ((i + 1 + v[i]) % 2 == 0)
//             {
//                 if (v[i] % 2 == 0)
//                     even++;
//                 else
//                     odd++;
//             }
//         }
//         int ans = 0;
//         ans = abs(even - odd);
//         ans = n - ans;
//         cout << ans << endl;
//     }
//     return 0;
// }

// // pyhon code
// for _ in range(int(raw_input())):
// 	n = int(input())
// 	l = list(map(int,raw_input().split()))
// 	flag = tmp = 0
// 	for i in l:
// 		if(i%2==1):
// 			flag+=1
// 		else:
// 			tmp+=1
// 	tt = min(flag,n//2)+min(tmp,(n+1)//2)
// 	print(tt)


// // Airline Restrictions

// for i in range(int(input())):
//     a,b,c,d,e = map(int,input().split())
//     if a+b<=d and c<=e:
//         print("YES")
//     elif a+c<=d and b<=e:
//         print("YES")
//     elif b+c<=d and a<=e:
//         print("YES")
//     else:
//         print("YES")
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t; cin>>t;
// 	while(t--){
// 		int a,b,c,d,e;
// 		cin>>a>>b>>c>>d>>e;
// 		if(a+b<=d && x<=e) cout<<"YES"<<endl;
// 		else if(a+c<=d && b<=e) cout<<"YES"<<endl;
// 		else if(b+c<=d and a<=e) cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;
// 	}	
// }
