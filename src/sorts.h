#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void timeElapsed();
vector<int> bubbleSort();
vector<int> insertionSort();

int randomInteger() {
    int offset = 0;
    int range = 256;
    int random = offset + (rand() % range);
    return random;
}

vector<int> randomSet() {
    vector<int> data(50);
    srand((unsigned) time(NULL));
    generate(data.begin(), data.end(), randomInteger);
    return data;
}

void timeElapsed(vector<int> (*func)(vector<int>)) {
    vector<int> data = randomSet();
    vector<int> sortedData = func(data);
    high_resolution_clock::time_point start;
    high_resolution_clock::time_point stop;
    nanoseconds duration;

    start = high_resolution_clock::now();
    sortedData = func(data);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop - start);
    cout << "Bubble sort time elapsed: "
         << duration.count() << "ns" << endl;
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

vector<int> insertionSort(vector<int> data) {

    int current;
    int comparison;

    for (int i = 1; i < data.size(); i++) {

        //Set up the calue to be placed, current
        current = data[i];

        //Set up the value to be compared, comparison
        comparison = i-1;

        //Continue to swap current and copmarison until comparison > current
        while (current < data[comparison] && comparison >= 0) {
            data[comparison+1] = data[comparison];
            data[comparison] = current;
            --comparison;
        }

    }

    return data;
}

