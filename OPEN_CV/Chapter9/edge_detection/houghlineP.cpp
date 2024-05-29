#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "building.jpg", IMREAD_GRAYSCALE);

    Mat dst1, dst2;

    Mat edge;
    Canny(src, edge, 50, 150);

    vector<Vec4i> lines;
    HoughLinesP(edge, lines, 1, CV_PI / 180, 250, 50, 5);

    Mat dst;
    cvtColor(src, dst, COLOR_GRAY2BGR);
    for (auto i : lines)
    {
        line(src, Point(i[0], i[1]), Point(i[2], i[3]), Scalar(0, 0, 255), 2);
    }
   
    imshow("edge", edge);
    imshow("dst", dst);
    imshow("src", src);
    waitKey();
    destroyAllWindows();
    return 0;
}