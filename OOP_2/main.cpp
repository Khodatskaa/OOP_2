#include "Worker.h"

int main() {
    const int numEmployees = 4;
    Worker employees[numEmployees] = {
        {"John Doe", "Manager", 2010, 60000.0},
        {"Jane Smith", "Developer", 2015, 50000.0},
        {"Bob Johnson", "Designer", 2018, 55000.0},
        {"Claire", "Developer", 2016, 75000.0}
    };

    cout << "Employees with experience exceeding 5 years:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].hasExperienceExceeding(5)) {
            employees[i].displayData();
        }
    }

    cout << "\nEmployees with salary exceeding $55,000:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].hasSalaryExceeding(55000.0)) {
            employees[i].displayData();
        }
    }

    cout << "\nEmployees with position as 'Developer':" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].hasPosition("Developer")) {
            employees[i].displayData();
        }
    }

    return 0;
}
