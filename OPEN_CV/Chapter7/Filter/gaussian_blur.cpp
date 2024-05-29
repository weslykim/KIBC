#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{   
    Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);
    vector<Mat> dsts;
    for (int sigma = 1; sigma <= 10; sigma++)
    {
        Mat dst;
        GaussianBlur(src, dst, Size(0, 0), sigma);
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