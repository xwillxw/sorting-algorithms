#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <iostream>
using namespace std;

vector<int> bubbleSort();

int randomInteger() {
    int offset = 0;
    int range = 256;
    int random = offset + (rand() % range);
    return random;
}

vector<int> randomSet() {
    std::vector<int> data(10);
    srand((unsigned) time(NULL));
    generate(data.begin(), data.end(), randomInteger);
    return data;
}

vector<int> bubbleSort(vector<int> data) {

    bool sorted = false;
    int temp;
    while (sorted == false) {
        //Assume list is sorted unless otherwise
        sorted = true;

        //For loop is 1 pass
        for (int i = 1; i < data.size(); i++) {
            //If previous is greater than current
            if (data[i] < data[i-1]) {

                //Swap
                temp = data[i];
                data[i] = data[i-1];
                data[i-1] = temp;

                //State list not sorted, pass will be performed again
                sorted = false;
            }
        }
    }
    
    return data;
} 