#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";
struct MyData {
	Point ptOld;
	Point ptNew;
	Mat img;
	Scalar white = Scalar(255, 255, 255);
	Scalar yellow = Scalar(0, 255, 255);
	Scalar blue = Scalar(255, 0, 0);
	Scalar green = Scalar(0, 255, 0);
	Scalar red = Scalar(0, 0, 255);
	bool flag = false;
    int squareSize = 20;
};
void onMouse(int event, int x, int y, int flags, void *userdata);

int main(void)
{
    MyData myData;
    myData.img = imread(folder + "lenna.bmp", IMREAD_COLOR);
    if (myData.img.empty()) {
        cerr << "Error loading image" << endl;
        return -1;
    }

    namedWindow("img");
    setMouseCallback("img", onMouse, (void *)&myData);

    while (true) {
        Mat display = myData.img.clone();
        
        if (myData.flag) {
            Rect rect(myData.ptNew.x - myData.squareSize / 2, myData.ptNew.y - myData.squareSize / 2,
                      myData.squareSize, myData.squareSize);
            rectangle(display, rect, myData.red, 2);
        }
        
        imshow("img", display);

        if (waitKey(10) == 27)
            break;
    }

    destroyAllWindows();
    return 0;
}
void onMouse(int event, int x, int y, int flags, void *userdata)
{
    MyData *myData = (MyData *)userdata;

    if (event == EVENT_MOUSEMOVE) {
        myData->flag = true;  // we have moved the mouse
        myData->ptNew = Point(x, y);  // update the new point
    }

    if (event == EVENT_LBUTTONDOWN) {
        Vec3b bgr = myData->img.at<Vec3b>(y, x);
        cout << "Clicked at (" << x << "," << y << ") - BGR: ["
             << (int)bgr[0] << "," << (int)bgr[1] << "," << (int)bgr[2] << "]" << endl;
    }
}