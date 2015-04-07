//#include "stdafx.h"
#include "cv.h"
#include "highgui.h"
#include "cxcore.h"

void test(CvMat* t)
{
	//��ȡ�������������
	int type = cvGetElemType(t);
	CvHistogram
	//��ȡ�����ά����Ϣ
	int size[10];
	int dims = cvGetDims(t, size);
	int x = cvGetDimSize(t, 0);
	int y = cvGetDimSize(t, 1);
}

int main(int argc, char* argv[])
{

	//�������� ��ʽ1  ֱ�Ӵ���
	CvMat* pmat1;
	pmat1 = cvCreateMat(8, 9, CV_32FC1);

	//��������ʽ2  �ȴ�������ͷ��  �ٴ�����������ݿ���ڴ�ռ�
	CvMat* pmat2;
	pmat2 = cvCreateMatHeader(4, 5, CV_8UC1);
	cvCreateData(pmat2);
	
	//��������ʽ3  ͨ�����ݴ�������
	float data[4] = { 3, 4, 6, 0 };
	CvMat pmat3;
	cvInitMatHeader(&pmat3, 2, 2, CV_32FC1, data);

	//��������ʽ4 ͨ�����о�����п�¡
	CvMat* pmat4;
	pmat4 = cvCloneMat(pmat2);

	//���ʾ�����������
	test(pmat2);


	//�ͷž�����ڴ�ռ�
	cvReleaseMat(&pmat1);
	cvReleaseMat(&pmat2);
	cvReleaseMat(&pmat4);
	
	return 0;
}