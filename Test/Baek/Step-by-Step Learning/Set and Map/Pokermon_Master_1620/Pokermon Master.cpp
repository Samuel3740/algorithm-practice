#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    vector<string> pokemons(N + 1);
    unordered_map<string, int> pokemonMap;
    
    for(int i = 1; i <= N; i++){
        cin >> pokemons[i];
        pokemonMap[pokemons[i]] = i;
    }
    
    for(int i = 0; i < M; i++){
        string query;
        cin >> query;
        
        if(query[0] >= '0' && query[0] <= '9'){
            int num = stoi(query);
            cout << pokemons[num] << "\n";
        } 
        else{
            cout << pokemonMap[query] << "\n";
        }
    }
    
    return 0;
}