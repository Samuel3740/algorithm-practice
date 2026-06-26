#include <iostream>
#include <vector>
using namespace std;

class Square{
    private:
        int total_size = 0;
        
    public:
        void Paint(int* paperlocation, int N){
            for(int i = 0; i < N; ++i){
                int x, y;
                cin >> x >> y;
                for(int dx = 0; dx < 10; ++dx){
                    for(int dy = 0; dy < 10; ++dy){
                        if(*(paperlocation + (x + dx) * 100 + (y + dy)) == 0){
                            *(paperlocation + (x + dx) * 100 + (y + dy)) = 1;
                            total_size++;
                        }
                    }
                }
            }
        }

        int getTotalSize(){
            return total_size;
        }
};

int main(){
    int paperlocation[100][100] = {0}; 
    int N;
    cin >> N;
    
    Square func;
    func.Paint((int*)paperlocation, N); 

    cout << func.getTotalSize();
}
