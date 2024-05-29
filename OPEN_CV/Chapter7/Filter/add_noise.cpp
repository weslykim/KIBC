#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
    Mat noise(src.size(), CV_32SC1);
    int stddev = 10;
    randn(noise, 0, stddev);

    Mat dst;
    add(src, noise, dst, Mat(), CV_8U);

    imshow("src", src);
    imshow("dst", dst);
    waitKey();
    destroyAllWindows();
    return 0;
}