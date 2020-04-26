
1199 E - Matching vs  Independent Set.cpp GNU C++17 Accepted
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
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<bool>q(3*n+1,false);
        vec q1,q2;
        ll x,y;
        f(i,0,m)
        {
            cin>>x>>y;
            if(q[x]==false&&q[y]==false)
            {
                q1.pb(i+1);
                q[x]=true;
                q[y]=true;
            }
        }
        for(ll i=1;i<=3*n;i++)
        {
            if(q[i]==false)
            {
                q[i]=true;
                q2.pb(i);
            }
        }
        if(q1.size()>=n)
        {
            cout<<"Matching"<<edl;
            for(ll i=0;i<n;i++)
            {
                cout<<q1[i]<<" ";
            }
            cout<<"\n";
            continue;
        }
        

        if(q2.size()>=n)
        {
            cout<<"IndSet"<<edl;
            f(i,0,n)
            {
                cout<<q2[i]<<" ";
            }
            cout<<"\n";

            continue;
        }
     }    

    







  


    
    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 