#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, highest = 0;

    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];

        if(arr[i]>highest)
            highest=arr[i];
    }

    cout << count(arr.begin(), arr.end(), highest);

    return 0;
}