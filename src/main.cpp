#include <iostream>

#include "camera.hpp"

int main()
{
    std::cout << "sncf\n";
    auto cam = camera(0);
    auto test = cam.open();

    return 0;
}