#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int total_area = 0;
    
    vector<int> x_coords, y_coords;
    vector<tuple<int, int, int, int>> rectangles;
    
    for(int i = 0; i < 4; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        rectangles.push_back({x1, y1, x2, y2});
        x_coords.push_back(x1);
        x_coords.push_back(x2);
        y_coords.push_back(y1);
        y_coords.push_back(y2);
    }
    

    sort(x_coords.begin(), x_coords.end());
    sort(y_coords.begin(), y_coords.end());
    x_coords.erase(unique(x_coords.begin(), x_coords.end()), x_coords.end());
    y_coords.erase(unique(y_coords.begin(), y_coords.end()), y_coords.end());
    

    
    for(int i = 0; i < (int)x_coords.size() - 1; i++){
        for(int j = 0; j < (int)y_coords.size() - 1; j++){
            int x1 = x_coords[i];
            int x2 = x_coords[i + 1];
            int y1 = y_coords[j];
            int y2 = y_coords[j + 1];
            
            bool covered = false;

            for(auto& rect : rectangles){
                int rx1 = get<0>(rect);
                int ry1 = get<1>(rect);
                int rx2 = get<2>(rect);
                int ry2 = get<3>(rect);
                
                if(rx1 <= x1 && x2 <= rx2 && ry1 <= y1 && y2 <= ry2){
                    covered = true;
                    break;
                }
            }
            
            if(covered){
                total_area += (x2 - x1) * (y2 - y1);
            }
        }
    }
    
    cout << total_area << endl;
    
    return 0;
}