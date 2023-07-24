#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>

class camera
{
private:
    int m_id;

public:
    camera(int id);
    ~camera();

    bool open();
};

#endif /* !CAMERA_HPP */