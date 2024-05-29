#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{

    Mat src = imread(folder + "contours.bmp", IMREAD_GRAYSCALE);
    vector<vector<Point>> contours;
    vector<Vec4i> hier;
    findContours(src, contours, hier, RETR_TREE, CHAIN_APPROX_SIMPLE);
    
    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);
    for (int i = 0; i < contours.size(); i++)
    {
        Scalar color(rand() & 255, rand() & 255, rand() & 255);
        drawContours(src, contours, i, color, -1, LINE_8, hier);
    }
    for (auto h : hier)
    {
        cout << h << endl;
    }
    
    imshow("dst", dst);
    imshow("src", src);
    waitKey();
    destroyAllWindows();
    return 0;
}