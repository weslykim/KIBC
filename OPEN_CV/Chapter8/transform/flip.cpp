#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{   
    Mat src = imread(folder + "eastsea.bmp", IMREAD_COLOR);
    vector<Mat> dsts;
    for (int i = 0; i < 3; i++)
    {
        Mat dst;
        flip(src, dst, i - 1);
        dsts.push_back(dst);
    }
    
    

    imshow("src", src);
    int i = 0;
    // 형변환배열(int->string)
    for (auto dst : dsts)
    {
        imshow("dst" + to_string(i+1), dst);
        i++;
    }
    
    waitKey();
    destroyAllWindows();
    return 0;
}