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
int preced(char ch) {
	// if (ch == '+' || ch == '-') {
	// 	return 1;              //Precedence of + or - is 1
	// } else if (ch == '*' || ch == '/') {
	// 	return 2;            //Precedence of * or / is 2
	// } else if (ch == '^') {
	// 	return 3;            //Precedence of ^ is 3
	// } else {
	// 	return 0;
	// }
	if (ch == '+') {return 1;}
	else if (ch == '-') {return 2;}
	else if (ch == '*') {return 3;}
	else if (ch == '/') {return 4;}
	else if (ch == '^') {return 5;}
	else return 0;
}

string inToPost(string infix ) {
	stack<char> stk;
	stk.push('#');               //add some extra character to avoid underflow
	string postfix = "";         //initially the postfix string is empty
	string::iterator it;

	for (it = infix.begin(); it != infix.end(); it++) {
		if (isalnum(char(*it)))
			postfix += *it;      //add to postfix when character is letter or number
		else if (*it == '(')
			stk.push('(');
		else if (*it == '^')
			stk.push('^');
		else if (*it == ')') {
			while (stk.top() != '#' && stk.top() != '(') {
				postfix += stk.top(); //store and pop until ( has found
				stk.pop();
			}
			stk.pop();          //remove the '(' from stack
		} else {
			if (preced(*it) > preced(stk.top()))
				stk.push(*it); //push if precedence is high
			else {
				while (stk.top() != '#' && preced(*it) <= preced(stk.top())) {
					postfix += stk.top();        //store and pop until higher precedence is found
					stk.pop();
				}
				stk.push(*it);
			}
		}
	}

	while (stk.top() != '#') {
		postfix += stk.top();        //store and pop until stack is not empty.
		stk.pop();
	}

	return postfix;
}

int32_t main()
{
	c_p_c();

	int t; string s; cin >> t;
	while (t--) {cin >> s; string infix = inToPost(s); cout << infix << "\n";}



	return 0;
}
//just a comment
