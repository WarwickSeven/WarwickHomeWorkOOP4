#include <iostream>
#include <vector>
#include <algorithm>

void stupidScenario() {
    std::vector<int> arr1 = { 2, 3, 2, 5, 2, 2, 5, 2, 2, 9 };
    std::vector<int> arr2 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    
    for (size_t i = 0; i < 10; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl << std::endl;
    
    size_t Counter { 0 };
    for (size_t i = 0; i < 10; i++) {
        for (size_t j = 0; j < 10; j++) {
            if (arr1[i] == j) {
                arr2[j] += 1;
            }
        }
    }
    
    for (size_t i = 0; i < 10; i++) {
        std::cout << i << ":" << arr2[i] << " ";
        if (arr2[i] > 0) {
            Counter += 1;
        }
    }
    std::cout << std::endl << "Different elements: "<< Counter << std::endl;
};

void smartScenario() {
    std::vector<int> arr1 = { 2, 3, 2, 5, 2, 2, 5, 2, 2, 9 };
    std::vector<int> buffArr;
    buffArr.push_back(arr1[0]);
    
    for (size_t i = 1; i < 10; i++) {
        if (std::find(buffArr.begin(), buffArr.end(), arr1[i]) == buffArr.end()) {
            buffArr.push_back(arr1[i]);
            }
        }
    std::cout << std::endl << "Different elements: " << buffArr.size() << std::endl;
};

int main() {
    
    stupidScenario();
    smartScenario();
    
    return 0;
}
