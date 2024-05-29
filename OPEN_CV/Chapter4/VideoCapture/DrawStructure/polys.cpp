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
    Mat img(400, 640, CV_8UC3, white);

    rectangle(img, Rect(50, 50, 100, 50), red, 2);
    rectangle(img, Point(50, 50), Point(100, 70), blue, 2);

    circle(img, Point(300, 120), 30, green, -1, LINE_AA);   // 두께를 -1로하면 원 안에 면적이 색칠된 원이 나온다.
    circle(img, Point(350, 120), 30, yellow, 3, LINE_AA);   // 두께를 양수로하면 평범하게 원의 굵기가 정해진다.

    ellipse(img, Point(120, 200), Size(60, 30), 20, 0, 360, red, FILLED, LINE_AA);  // ellipse는 타원을 그리는 함수이다.
    ellipse(img, Point(200, 200), Size(100, 50), 45, 0, 120, green, 2, LINE_AA);    // FILLED는 -1과 같다.
    imshow("img", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}