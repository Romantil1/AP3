#include <iostream>
#include <vector>

using namespace std;

int findMaxLinear(const vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); ++i) {  
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

bool hasDuplicatePairs(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {  
            if (arr[i] == arr[j]) return true;
        }
    }
    return false;
}

int main() {
    system("chcp 1251 > nul");
    vector<int> data = { 1, 2, 3, 4, 5 };
    cout << "Макс (O(n)): " << findMaxLinear(data) << endl;
    cout << "Дубликаты (O(n²)): " << (hasDuplicatePairs(data) ? "Да" : "Нет") << endl;
    return 0;
}