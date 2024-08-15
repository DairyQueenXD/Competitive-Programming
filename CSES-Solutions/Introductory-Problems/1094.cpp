#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <list>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <climits>
#include <functional>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <complex>
#include <random>
 
using namespace std;
typedef long long ll;
#define endl "\n";
#define loop(i,a,b) for (int i = a; i < b; ++i)
// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
 
// Problem Link: https://cses.fi/problemset/task/1094
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N; cin >> N; ll x, out = 0, last = 0;
    loop (i,0,N) {
        cin >> x;
        if (x > last) {
            last = x;
        } else {
            out += last - x;
        }
    }
    cout << out << endl;
