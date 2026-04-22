#include <iostream>
#include <fstream>
using namespace std;

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void writeToFile(int arr[], int size) {
    ofstream file("data.txt");
    for (int i = 0; i < size; i++) {
        file << arr[i] << " ";
    }
    file.close();
}

void readFromFile(int arr[], int size) {
    ifstream file("data.txt");
    for (int i = 0; i < size; i++) {
        file >> arr[i];
    }
    file.close();
    displayArray(arr, size);
}

int main() {
    int arr[10];

    inputArray(arr, 10);
    displayArray(arr, 10);

    int sum = calculateSum(arr, 10);
    cout << sum << endl;

    writeToFile(arr, 10);
    readFromFile(arr, 10);

    return 0;
}
