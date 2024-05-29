#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";
void on_brightness(int pos, void *userdata);
int main(void)
{
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
    int position = 256;
    namedWindow("img");
    createTrackbar("Brightness", "img", &position, 511, on_brightness, (void*)&src);
    on_brightness(0, &src);
    imshow("img", src);    
    waitKey();
    destroyAllWindows();
    return 0;
}
void on_brightness(int pos, void *userdata)
{
    Mat img = *(Mat *)userdata;
    Mat dst = img + pos - 256;
    imshow("img", dst);
}