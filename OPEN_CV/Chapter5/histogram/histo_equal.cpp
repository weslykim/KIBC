#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";
void histogramGraph(Mat &graph, const Mat &src);

int main(void)
{
    
    Mat src = imread(folder + "hawkes.bmp", IMREAD_GRAYSCALE);
    Mat dst;
    equalizeHist(src, dst);

    Mat graphSrc(100, 256, CV_8U, Scalar(255));
    Mat graphDst(100, 256, CV_8U, Scalar(255));
    
    histogramGraph(graphSrc, src);
    histogramGraph(graphDst, dst);
    imshow("src", src);
    imshow("dst", dst);
    imshow("graphSrc", graphSrc);
    imshow("graphDst", graphDst);
    waitKey();
    destroyAllWindows();
    return 0;
}

void histogramGraph(Mat &graph, const Mat &src)
{
    Mat histo;
    int channels[] = {0};
    int dims = 1;
    const int histsize[] = {256};
    float graylevel[] = {0, 256};
    const float* ranges[] = {graylevel};

    calcHist(&src, 1, channels, noArray(), histo, dims, histsize, ranges);
    imshow("src", src);
    

    //그래프 히스토그램 만들기
    normalize(histo, histo, 0, 100, NORM_MINMAX);
    for (int i = 0; i < 256; i++)
        {
            line(graph, Point(i, 100), Point(i, 100 - cvRound(histo.at<float>(i))), Scalar(0));
        }
    
}
