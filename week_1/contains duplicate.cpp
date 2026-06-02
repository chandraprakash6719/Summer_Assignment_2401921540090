#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMeetingRooms(vector<vector<int>>& intervals) {
    vector<int> start, end;

    for (auto& interval : intervals) {
        start.push_back(interval[0]);
        end.push_back(interval[1]);
    }

    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    int rooms = 0, maxRooms = 0;
    int i = 0, j = 0;
    int n = intervals.size();

    while (i < n) {
        if (start[i] < end[j]) {
            rooms++;
            maxRooms = max(maxRooms, rooms);
            i++;
        } else {
            rooms--;
            j++;
        }
    }

    return maxRooms;
}

int main() {
    vector<vector<int>> intervals = {
        {0, 30},
        {5, 10},
        {15, 20}
    };

    cout << "Minimum Meeting Rooms Required = "
         << minMeetingRooms(intervals) << endl;

    return 0;
}