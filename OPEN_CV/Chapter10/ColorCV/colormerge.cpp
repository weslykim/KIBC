#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "candies.png", IMREAD_COLOR);

    vector<Mat> bgr, b_planes, g_planes, r_planes;
    split(src, bgr);
    Mat Empty(src.rows, src.cols, CV_8UC1, Scalar(0));
    b_planes = {bgr[0], Empty, Empty};
    g_planes = {Empty, bgr[1], Empty};
    r_planes = {Empty, Empty, bgr[2]};

    Mat bdst, gdst, rdst;
    merge(b_planes, bdst);
    merge(g_planes, gdst);
    merge(r_planes, rdst);

    imshow("src", src);
    imshow("bdst", bdst);
    imshow("gdst", gdst);
    imshow("rdst", rdst);

    waitKey();
    destroyAllWindows();
    return 0;
}