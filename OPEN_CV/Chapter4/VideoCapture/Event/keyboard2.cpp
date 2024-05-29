#include "opencv2/opencv.hpp"
#include <iostream>
#include <chrono>
#include <thread>

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
    int keycode = waitKey(33);
    const float fps = 30.0;
    TickMeter tm1;
    TickMeter tm2;
    namedWindow("img");
    imshow("img", img);
    while(1)
    {
        tm1.start();
        tm2.start();
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
        tm1.stop();
        cout << "tm1.getFPS(): " << tm1.getFPS() << endl;
        if (tm1.getFPS() > fps)
            {
                auto sleep_duration = static_cast<int>(1000.0 * (tm1.getFPS() - fps) / tm1.getFPS() / fps);
                this_thread::sleep_for(chrono::milliseconds(sleep_duration));
            }
        tm2.stop();
        cout << "tm2.getFPS(): " << tm2.getFPS() << endl;
    }
    
    destroyAllWindows();
    return 0;
}