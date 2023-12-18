#include "Worker.h"

Worker::Worker(const std::string& name, const std::string& position, int yearOfEmployment, double salary) : name(name), position(position), yearOfEmployment(yearOfEmployment), salary(salary) {}

void Worker::displayData() const {
    cout << "Name: " << name << ", Position: " << position << ", Year of Employment: " << yearOfEmployment << ", Salary: " << salary << endl;
}

bool Worker::hasExperienceExceeding(int years) const {
    return yearOfEmployment > years;
}

bool Worker::hasSalaryExceeding(double amount) const {
    return salary > amount;
}

bool Worker::hasPosition(const std::string& pos) const {
    return position == pos;
}
