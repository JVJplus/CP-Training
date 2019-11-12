/*

Jay Prakash Mahto
         JVJplus

JVJplus@gmail.com
Blog/Page:      www.facebook.com/JVJplusBlog
Country:        India 
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int                  ll; 
typedef unsigned long long int         ull; 
typedef pair<int,int>                  pii;
typedef pair<ll,ll>                    pll;
typedef vector<int>                    vi; 
typedef vector<bool>                   vb;
typedef vector<vi>                     vvi; 
typedef vector<pii>                    vp;
typedef unordered_map<int,int>         umap_ii;
typedef unordered_map<char,int>        umap_ci;
typedef unordered_map<string,int>      umap_si;

#define MOD                            1000000007
#define INF                            0x3f3f3f3f
#define iNF                            -(0x3f3f3f3f)
#define fi                             first
#define se                             second
#define PI                             3.1415926535897932384626
#define pb                             push_back
#define uset                           unordered_set
#define umap                           unordered_map
#define pq_max                         priority_queue<int>
#define pq_min                         priority_queue<int,vector<int>,greater<int>>
#define mp                             make_pair  //Better use {}
#define size5                          100010
#define NL                             cout<<endl;

//LOOPS
#define For(i,b)                       for(int i=0;i<b;i++)
#define FOR(i,a,b)                     for(int i=a;i<b;i++)
#define FoR(i,a,b,diff)                     for(int i=a;i!=b;i+=diff)
#define foreach(v, c)                  for(auto v:c)
#define nested(i,a,b,j,c,d)            for(int i=a;i<b;i++){ for(int j=c;j<d;j++)
#define min3(a,b,c)                    min(a,min(b,c))
#define max3(a,b,c)                    max(a,max(b,c))
#define min4(a,b,c,d)                  min(min(a,b),min(c,d))
#define max4(a,b,c,d)                  max(max(a,b),max(c,d))
#define maxall(v)                      *max_element(all(v))
#define minall(v)                      *min_element(all(v))
#define all(a)                         a.begin(), a.end()
#define MS0(X)                         memset((X), 0, sizeof((X)))
#define MS1(X)                         memset((X), -1, sizeof((X)))
#define whileNE(x)                     while(!x.empty())
#define present(c,x)                   ((c).find(x) != (c).end()) 
#define cntbit                         __builtin_popcountll

// directions
const int fx[4][2] =                   {{0,1}, {0,-1}, {1,0}, {-1,0}};
const int fxx[8][2] =                  {{0,1}, {0,-1}, {1,0}, {-1,0}, {1,1}, {1,-1}, {-1,1}, {-1,-1}};

// Some common useful functions
#define checkbit(n,b)                  ((n >> b) & 1)
#define INDEX(arr,ind)                 (lower_bound(all(arr),ind)-arr.begin())
#define REMAX(a,b)                     (a)=max((a),(b)) 
#define REMIN(a,b)                     (a)=min((a),(b));
#define sz(a)                          (int)(a.size())
#define len(a)                         (int)(a.length())
#define UB(a,x)                        (upper_bound(all(a),x)-a.begin())
#define LB(a,x)                        (lower_bound(all(a),x)-a.begin())
#define NP(a)                          next_permutation(all(a))

#define print(x)                       cout<<x;
#define print2(x,y)                    cout<<x<<" "<<y;
#define println(x)                     cout<<x<<'\n';
#define input_arr                      cin>>n; For(i,n) cin>>arr[i];
#define input_ARR                    cin>>n; FOR(i,1,n+1) cin>>arr[i];
#define accept_arr                     For(i,n) cin>>arr[i];
#define accept_ARR                   FOR(i,1,n+1) cin>>arr[i];
#define accept_array(arr,N)              For(i,N) cin>>arr[i];
#define gets(n)                        getline(cin,n); cin.ignore();
#define print1d(arr,length)            for(int i=0;i<length;i++) cout<<arr[i]<<" "; cout<<'\n';
#define print1D(arr,start,length)      for(int i=start;i<length;i++) cout<<arr[i]<<" "; cout<<'\n';
#define print2d(arr,n)                 For(i,n){For(j,n){cout<<arr[i][j]<<" ";}cout<<endl;}
#define print2D(arr,m,n)               For(i,m){For(j,n){cout<<arr[i][j]<<" ";}cout<<endl;}
#define yesno(f)               if(f)cout<<"yes"<<endl; else cout<<"no"<<endl;
#define YesNo(f)              if(f)cout<<"Yes"<<endl; else cout<<"No"<<endl;
#define YESNO(f)               if(f)cout<<"YES"<<endl; else cout<<"NO"<<endl;


//Maths
//exponentiation
ll inline ipow(ll a,ll b,ll m){ll val=1;a%=m;while(b){if(b&01)val=(val*a)%m;b>>=1;a=(a*a)%m;};return val%m;}
ll inline ipow(ll a,ll b){ll val=1;while(b){if(b&01)val=(val*a);b>>=1;a=(a*a);};return val;}

//sieve 
#define LIM1 1000006
bitset<LIM1> isp;
vi primes;
inline void sieve(){isp.set();isp.reset(0);isp.reset(1);for(int i=2;i*i<LIM1;i++){if(isp[i]){for(int j=i*i;j<LIM1;j+=i)isp.reset(j);}}FOR(i,2,LIM1){if(isp[i]){primes.pb(i);}}}

/* totient */
#define LIM4 1000006
int phi[LIM4];
void totient(){FOR(i,1,LIM4)phi[i]=i;foreach(it,primes)for(int i=it;i<LIM4;i+=it)phi[i]-=phi[i]/(it);} /* Call sieve() First */

// inverse Modulo
inline ll invmod(ll a, ll b){return (isp[b])?ipow(a,b-2,b):ipow(a,phi[b]-1,b);}

// combinatorics
#define LIM2 1000006
ll fact[LIM2];
inline void Fact(){fact[0]=1;FOR(i,1,LIM2)fact[i]=(i*fact[i-1])%MOD;}
inline ll inv(ll x,ll mod){return ipow(x,mod-2,mod);}
inline ll comb(ll a, ll b){return ((fact[a]*inv(fact[b],MOD)%MOD)*inv(fact[a-b],MOD))%MOD;}


//Utilities

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define dbg(...) __dbg(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __dbg(const char* name, Arg1&& arg1){cerr << name << " : " << arg1 << std::endl;}
template <typename Arg1, typename... Args>
void __dbg(const char* names, Arg1&& arg1, Args&&... args){const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__dbg(comma+1, args...);}

#define filesLocations                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("debug_log.txt", "w", stderr);

//----------------------------------END OF MACROS-----------------------------------------------------//


#define N 100005
int arrayBaseValue=1;
ll arr[N];
ll tree[4*N];
ll m,n,a,b,c,d,q,k,x,y,z;

void build(int arrayStartingIndex, int arrayEndIndex, int treeIndex){
    // Base Case
    if(arrayStartingIndex==arrayEndIndex){
        tree[treeIndex]=arr[arrayStartingIndex]%2==0;
        return;
    }

    // Tree Formulas
    int arrayMidIndex= (arrayStartingIndex+arrayEndIndex)/2;
    int treeLeftIndex=2*treeIndex;
    int treeRightIndex=2*treeIndex+1;

    // Build Recursively Child Tree
    build(arrayStartingIndex, arrayMidIndex, treeLeftIndex);
    build(arrayMidIndex+1, arrayEndIndex, treeRightIndex);

    // Current Node Calculation
    // tree[treeIndex]  = calculationFunction( LeftSideAnswer, RightSideAnswer);
    ll leftSideAnswer =  tree[treeLeftIndex];
    ll rightSideAnswer = tree[treeRightIndex];
    tree[treeIndex] = leftSideAnswer +  rightSideAnswer;
}

void build(){
    //(array starting index,end index, tree index);
    if(arrayBaseValue==0)
        build(0,n-1,1);
    else
        build(1,n,1);
}



// Update
void update(int arrayStartingIndex,int arrayEndIndex, int treeIndex, int indexToUpdate, int valueToUpdateWith){

    // Base Case
    if(arrayStartingIndex==arrayEndIndex){
        arr[indexToUpdate] = valueToUpdateWith;
        tree[treeIndex]= valueToUpdateWith%2==0;
        return;
    }

    // Tree Formulas
    int arrayMidIndex= (arrayStartingIndex+arrayEndIndex)/2;
    int treeLeftIndex=2*treeIndex;
    int treeRightIndex=2*treeIndex+1;

    // Build Recursively Child Tree
    if(indexToUpdate <= arrayMidIndex)
        update(arrayStartingIndex, arrayMidIndex, treeLeftIndex, indexToUpdate, valueToUpdateWith);
    else
        update(arrayMidIndex+1, arrayEndIndex, treeRightIndex, indexToUpdate, valueToUpdateWith);


    // Current Node Calculation
    // tree[treeIndex]  = calculationFunction( LeftSideAnswer, RightSideAnswer);
    ll leftSideAnswer =  tree[treeLeftIndex];
    ll rightSideAnswer = tree[treeRightIndex];
    tree[treeIndex] = leftSideAnswer +  rightSideAnswer;
}

void update(int indexToUpdate, int valueToUpdateWith){
    if(arrayBaseValue==0)
        update(0,n-1,1,indexToUpdate,valueToUpdateWith);
    else
        update(1,n,1,indexToUpdate,valueToUpdateWith);
}

// Query 
//<ReturnType>  function();
int query(int arrayStartingIndex, int arrayEndIndex, int treeIndex, int queryLeft, int queryRight){

    // Tree Range is completely Outside the given Query Range
    if(queryRight < arrayStartingIndex || queryLeft > arrayEndIndex){
        // Return opposite type value of function
        return 0;
    }

    // Tree Range is completely Inside the given Query Range
    if(arrayStartingIndex>=queryLeft && arrayEndIndex<=queryRight){
        return tree[treeIndex];
    }

    // Tree Range is in Partial Condition

    // Tree Formulas
    int arrayMidIndex= (arrayStartingIndex+arrayEndIndex)/2;
    int treeLeftIndex=2*treeIndex;
    int treeRightIndex=2*treeIndex+1;

    ll leftSideAnswer = query(arrayStartingIndex, arrayMidIndex, treeLeftIndex, queryLeft, queryRight); 
    ll rightSideAnswer = query(arrayMidIndex+1, arrayEndIndex, treeRightIndex, queryLeft, queryRight); 

    return leftSideAnswer + rightSideAnswer; 
}

int query(int queryLeft, int queryRight){
    if(arrayBaseValue==0)
        return query(0,n-1,1,queryLeft,queryRight);
    else
        return query(1,n,1,queryLeft,queryRight);
}


void init(){}


void solve(int tcaseNo){
    input_ARR;
    build(); 

/*    For(i,4*n)
        cout<<tree[i]<<" ";
        NL;
*/

    cin>>q;
    For(i,q){
        cin>>k>>a>>b;
        if(k==0)
            update(a,b);
        if(k==1)
            cout<< query(a,b) <<endl;
        if(k==2)
            cout<< (b-a+1)-query(a,b) <<endl;
    }    

}


int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        filesLocations
    #endif


    int testNo=1;
    
    // int t; cin>>t; while(t--)
    { 
        init();
        solve(testNo++);   
    }
}
