#include <iostream>

#include "camera.hpp"
#include "logger.hpp"

int main()
{
    auto _logger = logger::Logger("log.txt", 4, true);
    _logger.add_log(0, "test_logger");
    auto cam = camera(0);
    auto test = cam.open();

    return 0;
}