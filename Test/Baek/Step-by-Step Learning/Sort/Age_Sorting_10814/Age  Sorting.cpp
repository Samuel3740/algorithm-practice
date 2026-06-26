#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Member{
    int age;
    string name;
    int order;
};

bool compare(const Member& a, const Member& b){
    if (a.age != b.age) {
        return a.age < b.age;
    }
    return a.order < b.order;
}


int main(){
    int N;
    
    cin >> N;
    
    vector<Member> members(N);
    
    for(int i = 0; i < N; i++){
        cin >> members[i].age >> members[i].name;
        
        members[i].order = i;
    }
    
    sort(members.begin(), members.end(), compare);
    
    
    for(int i = 0; i < N; i++){
        cout << members[i].age << " " << members[i].name << "\n";
    }
    
    return 0;
}