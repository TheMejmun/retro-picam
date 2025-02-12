#include "gui/ocv.h"

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>

void rpc::gui::show_image(const std::string &filename) {
    cv::Mat img = imread(filename, cv::IMREAD_COLOR);

    if (img.empty()) {
        std::cout << "Could not read image: " << filename << std::endl;
        return;
    }

    imshow(filename, img);
    int k = cv::waitKey(0); // Wait for a keystroke in the window
}

void rpc::gui::show_image(const cv::Mat &image, const std::string &title) {
    imshow(title, image);
    int k = cv::waitKey(0); // Wait for a keystroke in the window
}

const std::string ASCII_GRADIENT = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,\"^`'. ";

void rpc::gui::show_ascii(const cv::Mat &image){
    assert(image.channels() == 1 && "Image should be bw");
    std::cout << image.rows << " " << image.cols << std::endl;
    for(int i=0; i<image.rows; i++) { 
        for(int j=0; j<image.cols; j++) {
            const float pixel = static_cast<float>(image.at<uint8_t>(i,j)) / 255.0f;
            const size_t index = static_cast<size_t>((pixel-1e-4) * ASCII_GRADIENT.length());
            std::cout << ASCII_GRADIENT[index] << " ";       
        }
        std::cout << std::endl;
    }
}