#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
    Mat brightSrc, saturateSrc;
    brightSrc = src.clone();
    saturateSrc = src.clone();
    for (auto it = brightSrc.begin<uchar>(); it != brightSrc.end<uchar>(); it++)
    {
        *it = *it + 100;
    }

    for (auto it = saturateSrc.begin<uchar>(); it != saturateSrc.end<uchar>(); it++)
    {
        *it = saturate_cast<uchar>(*(it +100));
    }
    imshow("src", src);
    imshow("brightSrc", brightSrc);
    imshow("saturateSrc", saturateSrc);
    waitKey();
    destroyAllWindows();
    return 0;
}