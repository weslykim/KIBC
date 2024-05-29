#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

string folder = "/home/ubnt/Desktop/Opencv_Tcp/OPEN_CV/data/openCV_study/data/";

int main(int argc, char* argv[])
{
    Mat src;
    // Mat src = imread(folder + "neutrophils.png", IMREAD_GRAYSCALE);
    if (argc < 2)
    {
        src = imread(folder + "sudoku.jpg", IMREAD_GRAYSCALE);
    }
    else if(argc == 2)
    {
        src = imread(folder + argv[1], IMREAD_GRAYSCALE);
    }
    else
    {
        cerr << "usage: threshold (imange path)" << endl;
        return -1;  
    }
    if (src.empty())
    {
        cerr << "Image load failed!" << endl;
        return -1;
    }
    
    int pos = 3;

    imshow("src", src);

    namedWindow("dst");
    createTrackbar("blocksize", "dst", &pos, 20);

    while (true)
    {
        Mat dst;
        int odd = pos * 2 + 1;
        adaptiveThreshold(src, dst, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, odd, 5);
        imshow("dst", dst);
        if (waitKey(33) == 27)
        {
            break;
        } 
    }
    
    destroyAllWindows();
    return 0;
}