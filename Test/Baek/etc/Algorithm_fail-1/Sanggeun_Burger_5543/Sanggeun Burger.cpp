#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int burger[3], drink[2];
   
   for(int i = 0; i < 3; i++) {
       cin >> burger[i];
   }
   
   for(int i = 0; i < 2; i++) {
       cin >> drink[i];
   }
   
   int min_burger = *min_element(burger, burger + 3);
   int min_drink = *min_element(drink, drink + 2);
   
   cout << min_burger + min_drink - 50 << endl;
   
   return 0;
}