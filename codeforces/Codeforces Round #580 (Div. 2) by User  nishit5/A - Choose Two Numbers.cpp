
1206 A - Choose Two Numbers.cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
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
    ll n;
    cin>>n;
    vec q(n);
    map<ll,ll>maps,maps2;
    f(i,0,n)
    {
        cin>>q[i];
        maps[q[i]]=1;
    }
    ll m;
    cin>>m;
    vec q1(m);
    f(i,0,m)
    {
        cin>>q1[i];
        maps[q1[i]]=1;
    }
    ll k=0;
    f(i,0,n)
    {
        f(j,0,m)
        {
            if(maps[q[i]+q1[j]]==0&&k<=2)
            {
                cout<<q[i]<<" "<<q1[j];
                
                k+=2;
            }
            if(k==2)
            {
                return 0;
            }
        }
    }
 
  
 
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
1206 A - Choose Two Numbers.cpp GNU C++17 Accepted
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
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
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
    ll n;
    cin>>n;
    vec q(n);
    map<ll,ll>maps,maps2;
    f(i,0,n)
    {
        cin>>q[i];
        maps[q[i]]=1;
    }
    ll m;
    cin>>m;
    vec q1(m);
    f(i,0,m)
    {
        cin>>q1[i];
        maps[q1[i]]=1;
    }
    ll k=0;
    f(i,0,n)
    {
        f(j,0,m)
        {
            if(maps[q[i]+q1[j]]==0&&k<=2)
            {
                cout<<q[i]<<" "<<q1[j]<<" ";
                
                k+=2;
            }
            if(k==2)
            {
                return 0;
            }
        }
    }

  

    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
