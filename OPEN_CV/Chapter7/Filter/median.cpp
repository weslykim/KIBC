#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);

    // 임의의 픽셀 넣기
    int num = (int)(src.total() * 0.1);
    for (int i = 0; i < num; i++)
    {
        int x = rand() % src.cols;
        int y = rand() % src.rows;
        src.at<uchar>(y, x) = (i % 2) * 255;
    }
    Mat dst1;
    GaussianBlur(src, dst1, Size(), 1);

    Mat dst2;
    medianBlur(src, dst2, 3);
    
    imshow("src", src);
    imshow("Gaussian", dst1);
    imshow("median", dst2);

    waitKey();
    destroyAllWindows();
    return 0;
}