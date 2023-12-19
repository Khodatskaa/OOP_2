#include "Reservoir.h"
#include <iostream>
#include <fstream>

int main() {
    const int maxReservoirs = 2;

    Reservoir* reservoirs = new Reservoir[maxReservoirs];

    reservoirs[0] = Reservoir("Lake1", 50, 100, 5);
    reservoirs[1] = Reservoir("Pond1", 10, 20, 2);

    for (int i = 0; i < maxReservoirs; ++i) {
        reservoirs[i].displayInfo();
        std::cout << "------------------------\n";
    }

    //std::ios::out specifies the mode in which the file should be opened
    std::ofstream outFile("reservoirs.txt", std::ios::out);
    if (outFile.is_open()) {
        for (int i = 0; i < maxReservoirs; ++i) {
            outFile << "Reservoir Name: " << reservoirs[i].getName() << "\n";
            outFile << "Width: " << reservoirs[i].getWidth() << " meters\n";
            outFile << "Length: " << reservoirs[i].getLength() << " meters\n";
            outFile << "Max Depth: " << reservoirs[i].getMaxDepth() << " meters\n";
            outFile << "Approximate Volume: " << reservoirs[i].approximateVolume() << " cubic meters\n";
            outFile << "Water Surface Area: " << reservoirs[i].waterSurfaceArea() << " square meters\n";
            outFile << "------------------------\n";
        }
        outFile.close();
        std::cout << "Data written to reservoirs.txt\n";
    }
    else {
        std::cout << "Unable to open file for writing\n";
    }

    delete[] reservoirs;

    return 0;
}

