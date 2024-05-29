#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src1 = imread(folder + "lenna256.bmp", IMREAD_GRAYSCALE);
    Mat src2 = imread(folder + "square.bmp", IMREAD_GRAYSCALE);

    Mat dst1, dst2, dst3, dst4;
    add(src1, src2, dst1);
    addWeighted(src1, 0.7, src2, 0.3, 0, dst2);
    subtract(src1, src2, dst3);
    absdiff(src1, src2, dst4);

    imshow("src1", src1);
    imshow("src2", src2);
    imshow("dst1", dst1);
    imshow("dst2", dst2);
    imshow("dst3", dst3);
    imshow("dst4", dst4);
    waitKey(0);
    destroyAllWindows();
    return 0;
}