#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
    Mat original = src.clone();
    Mat src2 = src.clone();
    src = src * 2.f;        //첫번째방법
    src2 = src2 + (src - 180) * 1.f; //2번째방법

    cout << "original mean : " << mean(original) << endl;
    imshow("original", original);
    imshow("src", src);
    imshow("src2", src2);
    waitKey();
    destroyAllWindows();
    return 0;
}