#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "candies.png", IMREAD_COLOR);
    int lowerHue = 40;
    int upperHue = 80;
    int lowerSaturation = 50;
    cvtColor(src, src, COLOR_BGR2HSV);

    imshow("src", src);

    namedWindow("dst");
    createTrackbar("lower Hue", "dst", &lowerHue, 179);
    createTrackbar("upwer Hue", "dst", &upperHue, 179);
    createTrackbar("lowerSaturation", "dst", &lowerSaturation, 255);
    while (true)
    {
        Mat dst;
        inRange(src, Scalar(lowerHue, lowerSaturation, 0), Scalar(upperHue, 255, 255), dst);
        imshow("dst", dst);
        if (waitKey(33) == 27)
        {
            break;
        } 
    }
    
    destroyAllWindows();
    return 0;
}