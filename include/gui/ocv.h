//
// Created by Saman on 12.02.25.
//

#ifndef RASPCAM_OCV_H
#define RASPCAM_OCV_H

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <string>
namespace rpc::gui{
    void show_image(const std::string& filename);
    void show_image(const cv::Mat& image, const std::string& title="Image");
}

#endif //RASPCAM_OCV_H
