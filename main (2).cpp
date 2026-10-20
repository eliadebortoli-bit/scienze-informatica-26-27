
#include <iostream>

using namespace std;

int main() {
    float N1;
    float N2;
    float N3;
    float N4;
    float N5;
    
    std::cout << "inserisci primo numero";
    std::cin >> N1;
    std::cout << "inserisci secondo numero";
    std::cin >> N2;
    std::cout << "inserisci terzo numero";
    std::cin >> N3;
    std::cout << "inserisci quarto numero";
    std::cin >> N4;
    std::cout << "inserisci quinto numero";
    std::cin >> N5;
    
    std::cout << "media =" << (N1 + N2 + N3 + N4 + N5)/5;
    return 0;
}