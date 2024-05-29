#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(int argc, char* argv[])
{
    
    Mat src = imread(folder + "milkdrop.bmp", IMREAD_COLOR);
    Mat bin;
    threshold(src, bin, 128, 255, THRESH_BINARY);

    Mat dst1, dst2, dst3, dst4, dst5;
    morphologyEx(bin, dst1, MORPH_OPEN, Mat());
    morphologyEx(dst1, dst2, MORPH_CLOSE, Mat());
    morphologyEx(dst2, dst3, MORPH_GRADIENT, Mat());
    morphologyEx(bin, dst4, MORPH_TOPHAT, Mat());
    morphologyEx(bin, dst5, MORPH_BLACKHAT, Mat());

    imshow("bin", bin);
    imshow("open", dst1);
    imshow("close", dst2);
    imshow("gradient", dst3);
    imshow("tophat", dst4);
    imshow("blackhat", dst5);
    imshow("src", src);

    waitKey();
    destroyAllWindows();
    return 0;
}