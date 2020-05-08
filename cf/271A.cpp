#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FOR(i, a, done) for (int i = (a); i < (done); ++i)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{

	size_t pos = data.find(toSearch);


	while ( pos != std::string::npos)
	{
		data.replace(pos, toSearch.size(), replaceStr);

		pos = data.find(toSearch, pos + replaceStr.size());
	}
}
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
	c_p_c();

	int ar[5][5] = {0}, i, j;


	FOR(i, 1, 4)
	{
		for (j = 1; j < 4; j++)
		{
			cin >> ar[i][j];
		}
	}
	FOR(i, 1, 4)
	{
		FOR(j, 1, 4)
		{
			cout << ((ar[i][j] + ar[i][j - 1] + ar[i][j + 1] + ar[i - 1][j] + ar[i + 1][j]) % 2 == 0) ? '1' : '0';
		}
		cout << "\n";



	} return 0;
}

