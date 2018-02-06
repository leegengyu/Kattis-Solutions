#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n, inc = 1, dec = 1;
    string s, last;

    cin >> n >> last;

    while(--n) {
        cin >> s;

        if(last.compare(s) < 0)
            dec = 0;
        else if(last.compare(s) > 0)
            inc = 0;

        last = s;
    }

    if(inc)
        cout << "INCREASING" << "\n";
    else if(dec)
        cout << "DECREASING" << "\n";
    else
        cout << "NEITHER" << "\n";

    return 0;
}