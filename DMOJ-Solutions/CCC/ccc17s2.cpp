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
    int N; cin >> N;
    vector <ll> all; ll j;
    for (int i = 0; i < N; i++) {
        cin >> j; all.push_back(j);
    }
    sort(all.begin(), all.end());
//    for (int i = 0; i < N; i++) cout << all[i] << "\n";
    for (int i = 0; i < N/2; i++) {
        cout << all[(N+1)/2-1-i] << " " << all[(N+1)/2+i] << " ";
        //low.push_back(all[N-1-i]); high.push_back(all[N+i]);
    }
    if (N%2==1) cout << all[0];
}