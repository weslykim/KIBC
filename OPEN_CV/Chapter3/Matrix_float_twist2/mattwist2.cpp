#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    Mat mat1 = Mat::zeros(3, 4, CV_8UC1);

    cout << "Before mat1: " << mat1 << endl;

    for (int j = 0; j < mat1.rows; j++)
    {
        for (int i = 0; i < mat1.cols; i++)
        {
            mat1.at<uchar>(j, i)++;
        }
    }

    cout << "After mat1: " << mat1 << endl;

    for (int j = 0; j < mat1.rows; j++)
    {
        uchar *p = mat1.ptr<uchar>(j);
        for (int i = 0; i < mat1.cols; i++)
        {
            p[i]++;
        }
    }
    cout << "After ptr mat1: " << mat1 << endl; // ptr : 특정 행렬 또는 이미지의 특정 위치(예: 행/열)에 대한 직접적인 포인터를 제공

    for (auto it = mat1.begin<uchar>(); it != mat1.end<uchar>(); it++)
    {
        (*it)++;
    }
    cout << "After itherator mat1: " << mat1 << endl;       // itherator : 행렬의 요소 접근후 다양한 연산을 가능하게한다.
    return 0;
}