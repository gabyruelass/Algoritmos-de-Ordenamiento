#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "sorting.h"
using namespace std;


void printArray(const vector<int>& arr) {
  for (int x : arr) cout << x << " ";
  cout << endl;
}


int main() {
  srand(time(0));
  int n = 10 + rand() % 6;
  vector<int> original(n);
  for (int i = 0; i < n; i++) original[i] = rand() % 100;


  cout << "Vector original: ";
  printArray(original);


  vector<int> expected = original;
  sort(expected.begin(), expected.end());


  vector<int> a = original;
  bubbleSort(a);
  cout << "Bubble Sort: "; printArray(a);
  cout << (a == expected ? "OK\n" : "ERROR\n");


  a = original;
  selectionSort(a);
  cout << "Selection Sort: "; printArray(a);
  cout << (a == expected ? "OK\n" : "ERROR\n");


  a = original;
  insertionSort(a);
  cout << "Insertion Sort: "; printArray(a);
  cout << (a == expected ? "OK\n" : "ERROR\n");


  a = original;
  mergeSort(a, 0, n - 1);
  cout << "Merge Sort: "; printArray(a);
  cout << (a == expected ? "OK\n" : "ERROR\n");
  
  
  a = original;
  quickSort(a, 0, n - 1);
  cout << "Quick Sort: "; printArray(a);
  cout << (a == expected ? "OK\n" : "ERROR\n");


return 0;
}
