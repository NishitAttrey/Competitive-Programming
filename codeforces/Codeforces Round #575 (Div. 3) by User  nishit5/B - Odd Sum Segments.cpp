
1196 B - Odd Sum Segments.cpp GNU C++17 Accepted
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
 
template < typename T > using index_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;

#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)


const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
int main() 
{

  fast();
  
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt","w",stdout);
    #endif
    
    ll q;
    cin>>q;
    while(q--)
    {
      ll n,k;
      cin>>n>>k;
      vec q(n);
      vec pos(n,0);
      f(i,0,n)
      {
        cin>>q[i];
        if(q[i]%2==0)
          pos[i]=1;
      }
      if(count(all(pos),0)<k)
      {
        cout<<"NO"<<edl;
        continue;
      }
      ll co=count(all(pos),0);
      if(co%2==0&&k%2!=0||co%2!=0&&k%2==0)
      {
        cout<<"NO"<<edl;
        continue;
      }
      vec result;
      f(i,0,n)
      {
        if(k==1)
        {
          result.pb(n);
          k--;
          break;

        }
        if(q[i]&1)
        {
          result.pb(i+1);
          k--;
        }
      }
      cout<<"YES"<<edl;
      for(auto s:result)
      {
        cout<<s<<" ";
      }
      cout<<edl;




    }

  










  


    
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
