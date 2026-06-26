#include <iostream>
#include <cctype>

int main() {
    char ch1 = 'A';
    char ch2 = 'a';
    char ch3 = '1';
    
    std::cout << "isalpha('A'): " << isalpha(ch1) << std::endl;
    std::cout << "isalpha('a'): " << isalpha(ch2) << std::endl;
    std::cout << "isalpha('1'): " << isalpha(ch3) << std::endl;

    return 0;
}
