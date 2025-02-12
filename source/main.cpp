#include <iostream>
#include <opencv2/opencv.hpp>
#include "gui/ocv.h"
#include "constants.h"

int main() {
    std::cout << "Hello " << rpc::APP_NAME << std::endl;

    std::string file = "/home/saman/test.jpg";
//    rpc::gui::show_image(file);

    cv::Mat img = imread(file, cv::IMREAD_COLOR);
    size_t size = std::min(img.size[0], img.size[1]);
    std::cout << "Crop size: " << size << std::endl;

    cv::Mat bw;
    cv::cvtColor(img, bw, cv::COLOR_BGR2GRAY);

    cv::Mat cropped;
    size_t offsetX = (img.size[1] - size) / 2;
    size_t offsetY = (img.size[0] - size) / 2;
    std::cout << "offsetX: " << offsetX << " offsetY: " << offsetY << std::endl;
    bw(cv::Rect(offsetX, offsetY, size, size)).copyTo(cropped);

    cv::Mat scaled;
    // INTER_AREA for downscaling, INTER_CUBIC slower, INTER_LINEAR default
    cv::resize(cropped, scaled, cv::Size(128, 128), cv::INTER_LINEAR);
    
    imwrite("/home/saman/test_out.jpg", scaled);

    rpc::gui::show_ascii(scaled);

//    cv::Mat croppedImg;
//    img(cv::Rect(xMin,yMin,xMax-xMin,yMax-yMin)).copyTo(croppedImg);
//
//    rpc::gui::show_image(croppedImg, "Cropped");
//    cv::resize()


//    if (k == 's') {
//        imwrite("starry_night.png", img);
//    }

    return 0;
}
