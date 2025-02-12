#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include "gui/ocv.h"

void rpc::gui::show_image(const std::string &filename) {
    cv::Mat img = imread(filename, cv::IMREAD_COLOR);

    if (img.empty()) {
        std::cout << "Could not read image: " << filename << std::endl;
        return;
    }

    imshow(filename, img);
    int k = cv::waitKey(0); // Wait for a keystroke in the window

//    if (k == 's') {
//        imwrite("starry_night.png", img);
//    }
}

void rpc::gui::show_image(const cv::Mat &image, const std::string &title) {
    imshow(title, image);
    int k = cv::waitKey(0); // Wait for a keystroke in the window
}
