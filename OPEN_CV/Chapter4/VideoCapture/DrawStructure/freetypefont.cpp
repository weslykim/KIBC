#include "opencv2/opencv.hpp"
#include "opencv2/freetype.hpp"
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/OPEN_CV/data/openCV_study/data/";

Scalar white = Scalar(255, 255, 255);
Scalar yellow = Scalar(0, 255, 255);
Scalar blue = Scalar(255, 0, 0);
Scalar green = Scalar(0, 255, 0);
Scalar red = Scalar(0, 0, 255);

int main(void)
{
    Mat img(500, 800, CV_8UC3, white);
    Ptr<freetype::FreeType2> ft2 = freetype::createFreeType2();
    ft2->loadFontData("/home/ubnt/Desktop/Opencv_Tcp/HSSanTokki2.0(2024).ttf", 0);
    String text = u8"안녕하세요. utf-8 테스트입니다.";
    int fontHeight = 60;
    Size textSize = ft2->getTextSize(text, fontHeight, -1, 0);

    ft2->putText(img, text, Point(20, 60 + textSize.height), fontHeight, green, -1, LINE_AA, true);
    imshow("img", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}