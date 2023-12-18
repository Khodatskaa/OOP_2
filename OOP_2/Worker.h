#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>
using namespace std;

class Worker {
public:
    Worker(const std::string& name, const std::string& position, int yearOfEmployment, double salary);

    void displayData() const;
    bool hasExperienceExceeding(int years) const;
    bool hasSalaryExceeding(double amount) const;
    bool hasPosition(const std::string& position) const;

private:
    std::string name;
    std::string position;
    int yearOfEmployment;
    double salary;
};

#endif 
