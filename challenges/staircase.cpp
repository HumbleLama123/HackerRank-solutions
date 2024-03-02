#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    string str;

    vector<string> out;

    int n, p = 1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - p; j++)
            str += ' ';

        for (int j = 0; j < p; j++)
            str += '#';

        p++;
    
        out.push_back(str);

        str.clear();
    }

    for(auto a : out)
        cout << a << endl;

    return 0;
}