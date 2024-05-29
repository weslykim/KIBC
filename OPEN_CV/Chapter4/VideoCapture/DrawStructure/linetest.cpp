#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/OPEN_CV/data/openCV_study/data/";

Scalar white = Scalar(255, 255, 255);
Scalar yellow = Scalar(0, 255, 255);
Scalar blue = Scalar(255, 0, 0);
Scalar green = Scalar(0, 255, 0);
Scalar red = Scalar(0, 0, 255);
int main(void)
{
    Mat img(400, 640, CV_8UC3, white);

    line(img, Point(50, 50), Point(200, 50), red);      // default
    line(img, Point(50, 100), Point(200, 100), yellow, 3);  //맨뒤에 숫자는 굵기도
    line(img, Point(50, 150), Point(200, 150), green, 10);

    line(img, Point(250, 50), Point(350, 100), blue, 3, LINE_4);    // LINE_4 : 대각선 연결을 허용하지 않고,
    // 수평 또는 수직 방향의 연결만 허용하는 방식 대각선에서 계단 현상(aliasing)이 생길 수 있다.
    
    line(img, Point(250, 70), Point(350, 120), blue, 3, LINE_8);    // LINE_8 : 대각선을 포함하여 모든 방향에서의 연결을 허용
    // 일반적으로 OpenCV에서 가장 많이 사용되는 방식으로, 대각선도 지원하기 때문에 자연스러운 직선을 그릴수 있음
    line(img, Point(250, 90), Point(350, 140), blue, 3, LINE_AA);   // LINE_AA : 안티앨리어싱(Anti-Aliasing)을 적용하여 직선을 그린다.
    //안티앨리어싱(Anti-Aliasing): 디지털 그래픽과 영상 처리에서 이미지나 비디오에 나타나는 거친 가장자리 또는 "계단 현상"을 줄이거나 제거하기 위한 기술
    //그래픽적으로 더 부드럽고 자연스러운 결과를 얻을 수 있지만, 그리는 데 더 많은 계산이 필요할 수 있다.
    arrowedLine(img, Point(50, 200), Point(150, 200), red);
    arrowedLine(img, Point(50, 250), Point(350, 250), yellow, 3);
    arrowedLine(img, Point(50, 300), Point(350, 300), green, 1, LINE_8, 0, 0.05);

    imshow("img", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}