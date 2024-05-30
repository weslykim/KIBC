#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{   
    Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);
    vector<Mat> dsts;
    for (int ksize = 3; ksize <= 19; ksize +=2)
    {
        Mat dst;
        blur(src, dst, Size(ksize, ksize));
        dsts.push_back(dst);
    }
    
    

    imshow("src", src);
    int i = 0;
    // 형변환배열(int->string)
    for (auto dst : dsts)
    {
        imshow("dst" + to_string(i), dst);
        i++;
    }
    
    waitKey();
    destroyAllWindows();
    return 0;
}