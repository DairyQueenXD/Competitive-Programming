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
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N; vector<bool> a (N,false) ;
    loop (i,0,N-1) {
        int b; cin >> b; a[b-1] = true;
    }
    if (!a[N-1]) cout << N << endl;
    loop (i, 0, N-1) {
        if (!a[i]) cout << i+1 << endl;
    }
}
