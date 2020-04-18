#include <iostream>
#include <deque> 
#include <vector>
#include <algorithm>
using namespace std;


void printKMax(vector<int> arr, int n, int k) {
    deque<int> buf;
    for (int i = 0; i<n; ++i){
       
        if (buf.empty()) {
            buf.push_back(i);
        }

        if (buf.front() <= i-k) {
            buf.pop_front();
        }

        while (!buf.empty() && arr[i] >= arr[buf.back()]) {
            buf.pop_back();
        }
        
        buf.push_back(i);
        
        if (i >= (k - 1)) {
            cout << arr[buf.front()] << " ";
        }

    }
    cout << endl;
    return;
}

int main() {

    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int i;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
