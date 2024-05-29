#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{   
    Mat src = imread(folder + "tekapo.bmp", IMREAD_COLOR);
    Point2d cp(src.cols / 2 , src.rows / 2);
    Mat M = getRotationMatrix2D(cp, 30, 2);

    Mat dst;
    warpAffine(src, dst, M, Size());

    imshow("src", src);
    imshow("dst", dst);
    waitKey();
    destroyAllWindows();
    return 0;
}