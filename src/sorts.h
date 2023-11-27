#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int bubbleSort();

int randomInteger() {
    int offset = 0;
    int range = 256;
    int random = offset + (rand() % range);
    return random;
}

vector<int> randomSet() {
    std::vector<int> data(50);
    srand((unsigned) time(NULL));
    generate(data.begin(), data.end(), randomInteger);
    return data;
}
    