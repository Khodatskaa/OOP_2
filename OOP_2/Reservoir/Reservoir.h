#ifndef RESERVOIR_H
#define RESERVOIR_H

#include <iostream>
#include <string>

class Reservoir {
private:
    std::string name;
    double width;
    double length;
    double maxDepth;

public:
    Reservoir();
    Reservoir(const std::string& name, double width, double length, double maxDepth);
    ~Reservoir();

    Reservoir(const Reservoir& other);

    double approximateVolume() const;
    double waterSurfaceArea() const;
    bool isSameType(const Reservoir& other) const;
    bool compare(const Reservoir& other) const;
    void copyFrom(const Reservoir& other);

    const std::string& getName() const;
    void setName(const std::string& name);
    double getWidth() const;
    void setWidth(double width);
    double getLength() const;
    void setLength(double length);
    double getMaxDepth() const;
    void setMaxDepth(double maxDepth);

    void displayInfo() const;
};

#endif 
