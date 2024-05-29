#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    float data[] = {1, 1, 2, 3};
    Mat mat1(2, 2, CV_32FC1, data);         // CV_32FC1 : 각 행렬 요소가 32비트 부동소수점 값이라는 것을 의미
    cout << "mat1:\n" << mat1 << endl;

    Mat mat2 = mat1.inv();      // inv() : 역행렬 계산
    cout << "mat2:\n" << mat2 << endl;

    cout << "mat1.t() :\n" << mat1.t() << endl;     // t(): 전치(transpose) 연산 ->행렬의 행과 열을 서로 바꾼다.
    cout << "mat2.t() :\n" << mat2.t() << endl;
    cout << "mat1 + mat2:\n" << mat1 + mat2 << endl;
    cout << "mat1 - mat2:\n" << mat1 - mat2 << endl;
    cout << "mat1 * mat2:\n" << mat1 * mat2 << endl;    // 행렬 곱

    return 0;
}