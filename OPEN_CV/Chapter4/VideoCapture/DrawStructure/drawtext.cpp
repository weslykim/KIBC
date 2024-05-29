#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/OPEN_CV/data/openCV_study/data/";

Scalar white = Scalar(255, 255, 255);
Scalar yellow = Scalar(0, 255, 255);
Scalar blue = Scalar(255, 0, 0);
Scalar green = Scalar(0, 255, 0);
Scalar red = Scalar(0, 0, 255);

int main(void)
{
    Mat img(500, 800, CV_8UC3, white);
    putText(img, "FONT_HERSHEY_SIMPLEX", Point(20, 50), FONT_HERSHEY_SIMPLEX, 1, green);
    putText(img, "FONT_HERSHEY_PLAIN", Point(20, 100), FONT_HERSHEY_PLAIN, 1, red);
    putText(img, "FONT_HERSHEY_DUPLEX", Point(20, 200), FONT_HERSHEY_DUPLEX, 1, blue);

    imshow("img", img);
    waitKey(0);
    destroyAllWindows();
}