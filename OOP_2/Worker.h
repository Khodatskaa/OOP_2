#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>
using namespace std;

class Worker {
public:
    Worker(const string& name, const string& position, int yearOfEmployment, double salary);

    void displayData() const;
    bool hasExperienceExceeding(int years) const;
    bool hasSalaryExceeding(double amount) const;
    bool hasPosition(const string& position) const;

private:
    string name;
    string position;
    int yearOfEmployment;
    double salary;
};

#endif 
