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
#include <iterator>

using namespace std;
typedef long long ll;
#define endl '\n';
#define loop(i,a,b) for (int i = a; i < b; ++i)
#define fast ios::sync_with_stdio(0); cin.tie(0);
#define exit return 0;

// getline(cin, s);
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// INT_MAX
// A to Z: 65 to 90 | a to z: 97 to 122

// Problem URL: https://dmoj.ca/problem/primefactor

const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;


int main() {
    fast;
    
    int N; cin >> N;
    loop(i,0,N) {
        int n; cin >> n;
        while (n%2 == 0) {
            cout << 2 << " ";
            n /= 2;
        }
        
        for (int i = 3; i <= sqrt(n); i+=2) {
            while (n%i == 0) {
                cout << i << " "; n /= i;
            }
        }
        if (n>2) cout << n << " ";
        cout << endl;
    }
}
