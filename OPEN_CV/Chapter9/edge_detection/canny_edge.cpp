#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);

    Mat dst1, dst2;

    Canny(src, dst1, 50, 100);
    Canny(src, dst2, 50, 150);

    imshow("dst2", dst2);
    imshow("dst1", dst1);
    imshow("src", src);
    waitKey();
    destroyAllWindows();
    return 0;
}