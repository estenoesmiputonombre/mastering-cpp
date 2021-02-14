#include <iostream>
#include <vector>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

void short_code() {
    typedef long long ll;
    ll a, b;
    a = 123456789;
    b = 987654321;
    cout << a * b << "\n";

    typedef vector<int> _;
    typedef pair<int, int> pi;

    vector< pi > v;
    v.PB(MP(1, 2));
    v.PB(MP(3, 4));
    int d = v[0].F + v[0].S;
    cout << "The final result of d is: " << d << "\n";

}

void standard_code() {
    long long a, b;
    a = 123456789;
    b = 987654321;
    cout << a * b << "\n";

    vector< pair<int, int> > v;
    v.push_back(make_pair(1, 2));
    v.push_back(make_pair(3, 4));
    int d = v[0].first + v[0].second;
    cout << "The final result of d is: " << d << "\n";
}

int main() {
    standard_code();
    short_code();
    return 0;
}