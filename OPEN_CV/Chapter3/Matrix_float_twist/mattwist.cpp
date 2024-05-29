#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat img1 = imread(folder + "cat.bmp");
    Rect roi(220, 120, 200, 200);
    Mat img2 = img1(roi);               // 원본에서 roi영역만큼 색상을 반전으로해서 얕은복사
    Mat img3 = img1(roi).clone();       //원본에서 roi영역만큼 색상을 반전하지 않은 원본 복사(깊은복사)

    img2 = ~img2;

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);

    waitKey(0);

    return 0;
}