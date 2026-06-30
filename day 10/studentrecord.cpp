#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<string, int> student;

    cout << "Enter Name: ";
    cin >> student.first;

    cout << "Enter Marks: ";
    cin >> student.second;

    cout << "\nStudent Record\n";
    cout << "Name : " << student.first << endl;
    cout << "Marks: " << student.second << endl;

    return 0;
}