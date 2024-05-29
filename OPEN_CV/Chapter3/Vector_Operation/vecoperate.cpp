#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Vec3b p1, p2(0, 0, 255);
    p1[0] = 255;
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    
    Scalar gray = 128;
        cout << "gray: " << gray << endl;
    Scalar yellow = {0, 255, 255};
        cout << "yellow: " << yellow << endl;

    Mat img1(400, 400, CV_8UC3, yellow);
    Mat img2(400, 400, CV_8UC1, gray);
    Mat img3(400, 400, CV_8UC3, p2);
    Mat img4(400, 400, CV_8UC1, (0, 0, 0));

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);
    imshow("img4", img4);

    waitKey(0);
    
    return 0;
}