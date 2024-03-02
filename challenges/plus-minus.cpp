#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    double p = 0, n = 0, z = 0;

    for (auto i : arr) {
        if (i > 0)
            p++;
        else if (i < 0)
            n++;
        else if (i == 0)
            z++;
    }

    if (p != 0)
        p = p / arr.size();

    if (n != 0)
        n = n / arr.size();

    if (z != 0)
        z = z / arr.size();

    cout << p << endl << n << endl << z;
}

int main(int argc, char **argv) { return 0; }