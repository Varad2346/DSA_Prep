#include<bits/stdc++.h>
using namespace std;

bool comparator(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;  // Sort by end time
}

int func(vector<pair<int, int>>& arr, int n) {
    int cnt = 1; // The first interval is always selected
    sort(arr.begin(), arr.end(), comparator);
    int lastEndTime = arr[0].second;
    
    for (int i = 1; i < n; i++) {
        if (arr[i].first > lastEndTime) {  // If the start time is after the last end time
            cnt++;
            lastEndTime = arr[i].second;  // Update the last end time
        }
    }
    
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    
    // Read intervals
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    
    cout << func(arr, n) << endl;
    return 0;
}
