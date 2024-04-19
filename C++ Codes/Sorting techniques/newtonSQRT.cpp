 #include <iostrea>
 using namespace std;
 int main(){
 double n; cin>>n;
  double x = n;
  double root;
  while(true){
    root = (0.
    5 * (x + (n/x)));
    if(abs(root-x)<1){
      break;
    }
    x = root;
  }
  cout<<root;
  }
  
  
