#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "circuit.bmp", IMREAD_COLOR);
    Mat templ = imread(folder + "crystal.bmp", IMREAD_COLOR);

    Mat res, resNorm;
    matchTemplate(src, templ, res, TM_CCOEFF_NORMED);
    normalize(res, resNorm, 0, 255, NORM_MINMAX, CV_8U);

    double maxv;
    Point maxloc;
    minMaxLoc(res, NULL, &maxv, NULL, &maxloc);
    cout << "maxv : " << maxv << endl;

    rectangle(src, Rect(maxloc.x, maxloc.y, templ.cols, templ.rows), Scalar(0, 0, 255), 2);

    imshow("resNorm", resNorm);
    imshow("src", src);
    waitKey();
    destroyAllWindows();

    return 0;
}