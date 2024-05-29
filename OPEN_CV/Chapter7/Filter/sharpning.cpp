#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{   
    Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);
    vector<Mat> dsts;
    int sigma = 3;
    for (int alpha = 1; alpha <= 10; alpha++)
    {
        Mat blurred;
        GaussianBlur(src, blurred, Size(0, 0), sigma);
        alpha = float(alpha);
        Mat dst = ((1 + alpha) * src - alpha * blurred);
        dsts.push_back(dst);
    }
    
    

    imshow("src", src);
    int i = 0;
    // 형변환배열(int->string)
    for (auto dst : dsts)
    {
        imshow("dst" + to_string(i + 1), dst);
        i++;
    }
    
    waitKey();
    destroyAllWindows();
    return 0;
}