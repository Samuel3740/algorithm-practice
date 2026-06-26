#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Event{
    int x, y1, y2, type;
    bool operator<(const Event& e) const{
        return x < e.x;
    }
};

int main(){
    int N;
    cin >> N;
    
    vector<Event> events;
    
    for (int i = 0; i < N; ++i){
        int x, y;
        cin >> x >> y;
        events.push_back({x, y, y + 10, 1});      // 시작점
        events.push_back({x + 10, y, y + 10, -1}); // 끝점
    }
    
    // x좌표 기준 정렬
    sort(events.begin(), events.end());
    
    int prev_x = 0, total_area = 0;
    vector<pair<int, int>> active_intervals;

    for(const auto& e : events){
        int curr_x = e.x;
        
        // 이전 x값부터 현재 x값까지의 넓이 계산
        int covered_length = 0,
        int last_y = -1;
        for(const auto& interval : active_intervals){
            covered_length += max(0, interval.second - max(interval.first, last_y));
            last_y = max(last_y, interval.second);
        }
        total_area += covered_length * (curr_x - prev_x);
        
        // y-좌표를 업데이트
        if(e.type == 1){  // 시작점이면 추가
            active_intervals.push_back({e.y1, e.y2});
        } 
        else{  // 끝점이면 제거
            for(auto it = active_intervals.begin(); it != active_intervals.end(); ++it){
                if(it->first == e.y1 && it->second == e.y2){
                    active_intervals.erase(it);
                    break;
                }
            }
        }
        
        // y-좌표 정렬 (구간 병합을 위해 필요)
        sort(active_intervals.begin(), active_intervals.end());
        prev_x = curr_x;
    }
    
    cout << total_area << endl;
}