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
/*
 short int and int: -32,767 to 32,767
 long int: -2,147,483,647 to 2,147,483,647
 long long int: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
 */

int main() {
    int Q; cin >> Q; deque <pair<ll, ll>> nums; unordered_map <ll, int> query; int queryCounter = 0;
    for (int i = 0; i < Q; i++) {
        string op; ll x; cin >> op >> x; queryCounter++;
        if (op == "F") {
            nums.push_front({x, queryCounter});
            query[x] = queryCounter;
        } else if (op == "E") {
            nums.push_back({x, queryCounter});
            query[x] = queryCounter;
        } else {
            query[x] = -1;
        }
    }
    for (const auto& [a, b]: nums) {
        if (query[a] == b) cout << a << "\n";
    }
    
}
