#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "lenna.bmp", IMREAD_COLOR);
    Mat gray, addgray;
    cvtColor(src, gray, COLOR_BGR2GRAY);

    // add(gray, 50, addgray);
    // substract(gray, 50, addgray);
    addgray = gray + 50;
    addgray = gray - 50;
    imshow("src", src);
    imshow("gray", gray);
    imshow("addgray", addgray);
    
    waitKey();
    destroyAllWindows();
    return 0;
}