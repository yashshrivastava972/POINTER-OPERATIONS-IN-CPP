// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SALARY CALCULATION USING POINTERS IN C++ (EXPERIMENT: 10C)

// CODE: 

#include <iostream>
using namespace std;

void calculateSalary(float *salary) {
    *salary = *salary + (0.20 * (*salary)); 
}

int main() {
    float salary;
    int years, profit, research, pipeline;

    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter years of service: ";
    cin >> years;

    cout << "Enter profit (in Rs): ";
    cin >> profit;

    cout << "Has research project completed? (1=Yes, 0=No): ";
    cin >> research;

    cout << "Is research project in pipeline? (1=Yes, 0=No): ";
    cin >> pipeline;

    // Count satisfied conditions
    int count = 0;
    if (years > 1) count++;
    if (profit > 100000) count++;
    if (research == 1) count++;
    if (pipeline == 1) count++;

    // At least 3 conditions must be true
    if (count >= 3) {
        calculateSalary(&salary); 
        cout << "\nEmployee eligible for increment." << endl;
    } else {
        cout << "\nEmployee not eligible for increment." << endl;
    }

    cout << "Final Salary: " << salary << endl;

    return 0;
}

// OUTPUT:

// Enter current salary: 250000
// Enter years of service: 2
// Enter profit (in Rs): 200000
// Has research project completed? (1=Yes, 0=No): 1
// Is research project in pipeline? (1=Yes, 0=No): 1

// Employee eligible for increment.
// Final Salary: 300000

// Enter current salary: 250000
// Enter years of service: 1
// Enter profit (in Rs): 200000
// Has research project completed? (1=Yes, 0=No): 1
// Is research project in pipeline? (1=Yes, 0=No): 1

// Employee eligible for increment.
// Final Salary: 300000

// Enter current salary: 250000
// Enter years of service: 2
// Enter profit (in Rs): 150000
// Has research project completed? (1=Yes, 0=No): 0
// Is research project in pipeline? (1=Yes, 0=No): 0

// Employee not eligible for increment.
// Final Salary: 250000


