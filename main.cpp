//////////////////////////////////////////////
///      Work until you get the result     ///
///               sat7978                  ///
///         ...................            /// 
//////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define ll long long
#define pb push_back
#define S second
#define F first
void flash(){
    ios_base::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
  	cout.setf(ios::fixed);
  	cout.setf(ios::showpoint);
  	cout.precision(0);
}
int main() {
    auto start = chrono::steady_clock::now();
    flash(); 
    ll n;
    cin>>n;
    vector<pair<int,ll>>v;
    ll n1=n;
    for(ll i=2;i<=n1;){
      if(n%i==0){
          int cnt=0;
          while(n%i==0){
              cnt++;
              n=n/i;
          }
          v.push_back(make_pair(i,cnt));
      }
      else i++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" -> "<<v[i].second<<"\n";
    }
    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in nanoseconds : " 
		<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
		<< " ns" << endl;
    return 0;
}