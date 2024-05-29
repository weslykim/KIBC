#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{   
    Mat src = imread(folder + "tekapo.bmp", IMREAD_COLOR);
    double mx = 0.3;
    double my = 0.2;
    Mat M = Mat_<double>({2, 3}, {1, mx, 0, my, 1, 0});

    Mat dst;
    warpAffine(src, dst, M, Size());

    imshow("src", src);
    imshow("dst", dst);
    waitKey();
    destroyAllWindows();
    return 0;
}