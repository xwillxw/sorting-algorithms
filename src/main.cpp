#include <vector>
#include "sorts.h"
#include <iostream>

int main() {
    std::cout << bubbleSort();
    std::vector<int> data = randomSet();
    for (int i = 0; i < 50; i++) {
        cout << data[i];
        cout << "\n";
    }
    
    return 0;
}