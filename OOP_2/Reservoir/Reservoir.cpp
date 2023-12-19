#include "Reservoir.h"

Reservoir::Reservoir() : width(0), length(0), maxDepth(0) {}

Reservoir::Reservoir(const std::string& name, double width, double length, double maxDepth)
    : name(name), width(width), length(length), maxDepth(maxDepth) {}

Reservoir::~Reservoir() {
}

Reservoir::Reservoir(const Reservoir& other)
    : name(other.name), width(other.width), length(other.length), maxDepth(other.maxDepth) {}

double Reservoir::approximateVolume() const {
    return width * length * maxDepth;
}

double Reservoir::waterSurfaceArea() const {
    return width * length;
}

bool Reservoir::isSameType(const Reservoir& other) const {
    return typeid(*this) == typeid(other);
}

bool Reservoir::compare(const Reservoir& other) const {
    return approximateVolume() > other.approximateVolume();
}

void Reservoir::copyFrom(const Reservoir& other) {
    name = other.name;
    width = other.width;
    length = other.length;
    maxDepth = other.maxDepth;
}

const std::string& Reservoir::getName() const {
    return name;
}

void Reservoir::setName(const std::string& name) {
    this->name = name;
}

double Reservoir::getWidth() const {
    return width;
}

void Reservoir::setWidth(double width) {
    this->width = width;
}

double Reservoir::getLength() const {
    return length;
}

void Reservoir::setLength(double length) {
    this->length = length;
}

double Reservoir::getMaxDepth() const {
    return maxDepth;
}

void Reservoir::setMaxDepth(double maxDepth) {
    this->maxDepth = maxDepth;
}

void Reservoir::displayInfo() const {
    std::cout << "Reservoir Name: " << name << std::endl;
    std::cout << "Width: " << width << " meters" << std::endl;
    std::cout << "Length: " << length << " meters" << std::endl;
    std::cout << "Max Depth: " << maxDepth << " meters" << std::endl;
    std::cout << "Approximate Volume: " << approximateVolume() << " cubic meters" << std::endl;
    std::cout << "Water Surface Area: " << waterSurfaceArea() << " square meters" << std::endl;
}
