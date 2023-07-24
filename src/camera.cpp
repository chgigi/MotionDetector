#include "camera.hpp"


camera::camera(int id) : m_id(id)
{}

camera::~camera()
{}

bool camera::open() {
    cv::Mat frame;
    cv::VideoCapture cap;
    cap.open(m_id, cv::CAP_ANY);
    for (;;) {
        // wait for a new frame from camera and store it into 'frame'
        cap.read(frame);
        // check if we succeeded
        if (frame.empty()) {
            std::cerr << "ERROR! blank frame grabbed\n";
            break;
        }
        // show live and wait for a key with timeout long enough to show images
        imshow("Live", frame);
        if (cv::waitKey(5) >= 0)
            break;
    }
    return true;
}