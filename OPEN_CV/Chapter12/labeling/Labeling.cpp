#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(void)
{
    uchar data[] = {0, 0, 1, 1, 0, 0, 0, 0,
                    1, 1, 1, 1, 0, 0, 1, 0,
                    1, 1, 1, 1, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 1, 1, 0,
                    0, 0, 0, 1, 1, 1, 1, 0,
                    0, 0, 0, 1, 0, 0, 1, 0,
                    0, 0, 1, 1, 1, 1, 1, 0,
                    0, 0, 0, 0, 0, 0, 0, 0};
    Mat src = Mat(8, 8, CV_8UC1, data);
    Mat label;
    int cnt = connectedComponents(src, label);
    cout << "number of labels : " << cnt << endl;
    cout << "label : \n" << label << endl;

    Mat stats, centroids;
    int cnt2 = connectedComponentsWithStats(src, label, stats, centroids, 8);
    cout << "number of labels : " << cnt << endl;
    cout << "stats : \n" << stats << endl;
    cout << "centroids : \n" << centroids << endl;
    cout << "label : \n" << label << endl;

    imshow("src", src);
    waitKey();
    destroyAllWindows();
    return 0;
}