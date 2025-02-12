#include <iostream>
#include <opencv2/opencv.hpp>
#include "gui/ocv.h"
#include "constants.h"

int main() {
    std::cout << "Hello " << rpc::APP_NAME << std::endl;

    std::string file = "~/test.jpg";
//    rpc::gui::show_image(file);

    cv::Mat img = imread(file, cv::IMREAD_COLOR);
    size_t size = std::min(img.size[0], img.size[1]);
    std::cout << "Crop size: " << size << std:endl;

//    cv::Mat croppedImg;
//    img(cv::Rect(xMin,yMin,xMax-xMin,yMax-yMin)).copyTo(croppedImg);
//
//    rpc::gui::show_image(croppedImg, "Cropped");
//    cv::resize()

    return 0;
}
