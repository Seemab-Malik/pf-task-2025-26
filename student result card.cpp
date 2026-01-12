#include <iostream>
using namespace std;

int main() {
    string name, department;
    int rollNo;
    float marks1, marks2, marks3, total, percentage;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cin.ignore();
    cout << "Enter Department: ";
    getline(cin, department);

    cout << "Enter marks for Subject 1: ";
    cin >> marks1;
    cout << "Enter marks for Subject 2: ";
    cin >> marks2;
    cout << "Enter marks for Subject 3: ";
    cin >> marks3;

    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100;

    cout << "\n\n\t---------------------------------------------\n";
    cout << "\t|\t\tRESULT CARD\t\t    |\n";
    cout << "\t---------------------------------------------\n";
    cout << "\t| Name: \t" << name << "\t\t    |\n";
    cout << "\t| Roll No: \t" << rollNo << "\t\t    |\n";
    cout << "\t| Department: \t" << department << "\t    |\n";
    cout << "\t---------------------------------------------\n";
    cout << "\t| Subject 1: \t" << marks1 << "\t\t    |\n";
    cout << "\t| Subject 2: \t" << marks2 << "\t\t    |\n";
    cout << "\t| Subject 3: \t" << marks3 << "\t\t    |\n";
    cout << "\t---------------------------------------------\n";
    cout << "\t| Total Marks: \t" << total << " / 300\t    |\n";
    cout << "\t| Percentage: \t" << percentage << "%\t    |\n";
    cout << "\t---------------------------------------------\n";

    return 0;
}
