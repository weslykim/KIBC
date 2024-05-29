#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "butterfly.jpg", IMREAD_COLOR);
    for (int i = 0; i < 100; i++)
    {
        Vec3b& pixel = src.at<Vec3b>(i, 0);
        uchar b1 = pixel[0];
        uchar g1 = pixel[1];
        uchar r1 = pixel[2];
        cout << "bgr: (" << b1 <<", " << g1 << ", " << r1 << ")" << endl;
        pixel[0] = 0;
        pixel[1] = 0;
        pixel[2] = 255;
        cout << "bgr: (" << b1 <<", " << g1 << ", " << r1 << ")" << endl;
        cout << pixel << endl;
        
    }
    imshow("src", src);
    waitKey();
    destroyAllWindows();
    return 0;
}