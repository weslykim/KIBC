#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

Scalar white = Scalar(255, 255, 255);
Scalar yellow = Scalar(0, 255, 255);
Scalar blue = Scalar(255, 0, 0);
Scalar green = Scalar(0, 255, 0);
Scalar red = Scalar(0, 0, 255);
Mat img = imread(folder + "lenna.bmp");



int main(void)
{
    int keycode;
    namedWindow("lmg");
    imshow("img", img);
    while(1)
    {
        keycode = waitKey(0);
        cout << "keycode: " << keycode << endl;
        if (keycode == 27)  //27은 esc키이다.
        {
            break;
        }
        else if (keycode == 'i' || keycode == 'I')
        {
            img = ~img;
            imshow("img", img);
        }
    }
    
    destroyAllWindows();
    return 0;
}