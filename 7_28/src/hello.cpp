#include<../include/opencv2/opencv.hpp>


using namespace cv;

int main(int argc ,char*argv[])

{
    Mat picture =imread("../picture/1.jpg");
    imshow("测试程序",picture);
    waitKey(20150901);
    return 0;
}