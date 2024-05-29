#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "milkdrop.bmp", IMREAD_COLOR);
    Mat bin;
    threshold(src, bin, 128, 255, THRESH_BINARY);

    Mat erodeMat, dilateMat;
    erode(bin, erodeMat, Mat());
    dilate(bin, dilateMat, Mat());

    imshow("src", src);
    imshow("bin", bin);
    imshow("erode", erodeMat);
    imshow("dilate", dilateMat);
    waitKey();
    destroyAllWindows();
    return 0;
}