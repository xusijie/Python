#include <opencv2/opencv.hpp>  
#include <time.h> // 头文件 
using namespace cv;  
int main( )  
{  
	VideoCapture capture(0);

	//【2】循环显示每一帧
	while(1)  
	{  
		Mat frame;  //定义一个Mat变量，用于存储每一帧的图像
		capture>>frame;  //读取当前帧
		imshow("读取视频",frame);  //显示当前帧
		waitKey(30);  //延时30ms
	}  
	return 0;     
}  
