#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    long long minSum = arr[0], maxSum = arr[0], sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        minSum = min(minSum, arr[i]);
        maxSum = max(maxSum, arr[i]);
    }

    long long minResult = sum - maxSum;
    long long maxResult = sum - minSum;

    cout << minResult << ' ' << maxResult;

    return 0;
}