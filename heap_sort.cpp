#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;

struct Record {
    unsigned long long key;
    string value;
};

// Standard Heapify function to maintain Max-Heap properties
void heapify(vector<Record>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left].key > arr[largest].key)
        largest = left;

    if (right < n && arr[right].key > arr[largest].key)
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Core Heap Sort Implementation
void heapSort(vector<Record>& arr) {
    int n = arr.size();

    // Step 1: Build the Max-Heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Step 2: Extract elements from the heap one by one
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0);   
    }
}

int main() {
    long long n;
    cout << "Enter dataset size to sort: ";
    cin >> n;
    
    string inputFilename = "dataset_" + to_string(n) + ".csv";
    ifstream inFile(inputFilename);
    if (!inFile) {
        cerr << "Error: " << inputFilename << " not found!\n";
        return 1;
    }
    
    vector<Record> arr;
    string line;
    while (getline(inFile, line)) {
        size_t comma = line.find(',');
        if (comma != string::npos) {
            Record r;
            r.key = stoull(line.substr(0, comma));
            r.value = line.substr(comma + 1);
            arr.push_back(r);
        }
    }
    inFile.close();

    // EXPRIMENTS REQUIREMENT: High-resolution timer excludes I/O operations
    auto start = chrono::high_resolution_clock::now();
    heapSort(arr);
    auto end = chrono::high_resolution_clock::now();
    
    chrono::duration<double> elapsed = end - start;
    cout << "\n--- EXECUTION TIME PROOF ---" << endl;
    cout << "Heap Sort Running Time for size " << n << ": " << elapsed.count() << " seconds" << endl;
    cout << "----------------------------\n" << endl;
    
    // Save the fully sorted dataset
    string outputFilename = "heap_sort_dataset_" + to_string(n) + ".csv";
    ofstream outFile(outputFilename);
    for (const auto& r : arr) {
        outFile << r.key << "," << r.value << "\n";
    }
    outFile.close();
    cout << "Sorted dataset output saved to: " << outputFilename << "\n";
    
    return 0;
}