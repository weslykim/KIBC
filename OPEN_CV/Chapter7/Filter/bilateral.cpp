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

    Mat dst0;
    add(src, noise, dst0, Mat(), CV_8U);

    Mat dst1;
    GaussianBlur(dst0, dst1, Size(), 5);

    Mat dst2;
    bilateralFilter(dst0, dst2, -1, 10, 5);

    imshow("dst0", dst0);
    imshow("src", src);
    imshow("Gaussian", dst1);
    imshow("bilateral", dst2);
    waitKey();
    destroyAllWindows();
    return 0;
}