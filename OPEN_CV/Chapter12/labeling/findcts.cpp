#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{

    Mat src = imread(folder + "contours.bmp", IMREAD_GRAYSCALE);
    vector<vector<Point>> contours;
    findContours(src, contours, RETR_EXTERNAL, CHAIN_APPROX_NONE);
    cout << contours.size() << endl;
    // for (auto contour : contours)
    // {
    //     cout << contour.size() << "----------------" << endl;
    //     for (auto point : contour)
    //     {
    //         cout << point << ", " << endl;
    //     }
    // }
    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);
    drawContours(src, contours, -1, Scalar(255, 0, 0), 5);
    imshow("dst", dst);
    imshow("src", src);
    waitKey();
    destroyAllWindows();
    return 0;
}