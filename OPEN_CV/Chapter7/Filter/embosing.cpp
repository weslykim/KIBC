#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);

    float data[] = { -1, -1, 0, -1, 0, 1, 0, 1, 1 };
    Mat emboss(3, 3, CV_32F, data);


    Mat dst;
    filter2D(src, dst, -1, emboss, Point(-1, -1), 128);

    imshow("src", src);
    imshow("dst", dst);
    waitKey();
    destroyAllWindows();
    return 0;
}