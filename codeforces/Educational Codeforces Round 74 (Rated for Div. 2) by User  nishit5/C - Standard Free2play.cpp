
1238 C - Standard Free2play.cpp GNU C++17 Accepted
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
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){

    ll h,n;
    cin >> h >> n;
    vec q(n);
    f(i,0,n){
        cin >> q[i];
    }
    ll re=0;
    f(i,1,n){
        if(i==n-1){
            if(q[i]>1)
                re++;
        }
        else if(q[i+1]==q[i]-1){
            i++;
        }
        else{
            re++;
        }
    }
    cout<<re<<endl;

}  

1238 C - Standard Free2play.cpp GNU C++17 Accepted
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
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int main() {
    fast();
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w",stdout);
    #endif
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){

    ll h,n;
    cin >> h >> n;
    vec q(n);
    f(i,0,n){
        cin >> q[i];
    }
    ll re=0;
    f(i,1,n){
        if(i==n-1){
            if(q[i]>1)
                re++;
        }
        else if(q[i+1]==q[i]-1){
            i++;
        }
        else{
            re++;
        }
    }
    cout<<re<<edl;

}  
