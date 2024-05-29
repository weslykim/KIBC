#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
    Mat histo;
    int channels[] = {0};
    int dims = 1;
    const int histsize[] = {256};
    float graylevel[] = {0, 256};
    const float* ranges[] = {graylevel};

    calcHist(&src, 1, channels, noArray(), histo, dims, histsize, ranges);
    imshow("src", src);
    cout << "histo : " << histo << endl;

    //그래프 히스토그램 만들기
    Mat graph(100, 256, CV_8U, Scalar(255));
    normalize(histo, histo, 0, 100, NORM_MINMAX);
    for (int i = 0; i < 256; i++)
        {
            line(graph, Point(i, 100), Point(i, 100 - cvRound(histo.at<float>(i))), Scalar(0));
        }
    imshow("graph", graph);
    waitKey();
    destroyAllWindows();
    return 0;
}