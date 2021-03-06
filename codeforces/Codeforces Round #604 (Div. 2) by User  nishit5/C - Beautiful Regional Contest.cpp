
1265 C - Beautiful Regional Contest.cpp GNU C++17 Accepted
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
#define int ll
#define ceils(s,n) (s+n-1)/n
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
 
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;
 
void test();
 
int32_t main() {
    fast();
    ll tt=1;
    cin>>tt;
    f(i,0,tt) test();   
    cerr << "\nTime taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}

void test(){

        ll n,i,j,k;
        cin>>n;
        vec q(n),group;
        f(i,0,n){
           cin >> q[i];
        }
        f(i,1,n){
            if(q[i]!=q[i-1])
            {
                group.pb(i);
            }
        }
        group.pb(n);
        ll gold=group[0];
        f(i,0,group.size())
            group[i]-=gold;
        auto req=upper_bound(all(group),gold);
        if(req==group.end()){
            cout<<"0 0 0\n";
            return;
        }
        ll pos=req-group.begin();
        ll silver=group[pos];
        f(i,0,group.size())
        {
            if(group[i])
                group[i]-=silver;
        }

        auto ww=upper_bound(all(group),gold);
        if(ww==group.end()){
            cout<<"0 0 0\n";
            return;
        }
        ll ind=ww-group.begin();
        ll brass=group[ind];
        if(gold+silver+brass>n/2) {
            cout<<"0 0 0\n";
            return;
        }
        else
        {
            while(++ind and ind<group.size()){
                if(gold+silver+group[ind]>n/2)
                    break;
                brass=group[ind];
            }
        }
        cout<<gold<<" "<<silver<<" "<<brass<<"\n";
    }


