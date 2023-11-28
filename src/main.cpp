#include <cstdlib>
#include <vector>
#include "sorts.h"


int main() {
    std::vector<int> data = randomSet();
    
    data = randomSet();

    vector<int> sortedData = bubbleSort(data);

    cout << "\n Unsorted: \n";

    for (int i = 0; i < data.size(); i++) {
        cout << data[i];
        cout << ", ";
    }

    cout << "\n Sorted: \n";

    for (int i = 0; i < sortedData.size(); i++) {
        cout << sortedData[i];
        cout << ", ";
    }
    return 0;
}