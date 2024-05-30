#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

std::string folder = "/home/ubnt/Desktop/OPEN_CV/data/openCV_study/data/";
int main(void)
{
    std::cout << "hello, World!" << std::endl;
    cv::Mat img;
    img = cv::imread(folder + "lenna.bmp"); //  imread(const String& filename<- 불러올 영상 파일 이름, int flags<- IMREAD로 시작하는 enum상수)
    cv::imshow("image", img);               // imshow(const String& winname<- 영상출력할 대상 창 이름, InputArray mat<-출력할 영상 데이터)
    cv::waitKey(0);                         // waitKey (int delay <- 키보드 입력시간)
    return 0;
}
