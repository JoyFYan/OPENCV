//#include "stdafx.h"
#include "cv.h"
#include "highgui.h"
#include "cxcore.h"

void test(CvMat* t)
{
	//获取矩阵的数据类型
	int type = cvGetElemType(t);
	CvHistogram
	//获取矩阵的维度信息
	int size[10];
	int dims = cvGetDims(t, size);
	int x = cvGetDimSize(t, 0);
	int y = cvGetDimSize(t, 1);
}

int main(int argc, char* argv[])
{

	//创建矩阵 方式1  直接创建
	CvMat* pmat1;
	pmat1 = cvCreateMat(8, 9, CV_32FC1);

	//创建矩阵方式2  先创建矩阵头部  再创建矩阵的数据块的内存空间
	CvMat* pmat2;
	pmat2 = cvCreateMatHeader(4, 5, CV_8UC1);
	cvCreateData(pmat2);
	
	//创建矩阵方式3  通过数据创建矩阵
	float data[4] = { 3, 4, 6, 0 };
	CvMat pmat3;
	cvInitMatHeader(&pmat3, 2, 2, CV_32FC1, data);

	//创建矩阵方式4 通过已有矩阵进行克隆
	CvMat* pmat4;
	pmat4 = cvCloneMat(pmat2);

	//访问矩阵的相关属性
	test(pmat2);


	//释放矩阵的内存空间
	cvReleaseMat(&pmat1);
	cvReleaseMat(&pmat2);
	cvReleaseMat(&pmat4);
	
	return 0;
}