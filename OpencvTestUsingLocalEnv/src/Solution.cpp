#include "Solution.h"

using namespace std;

Solution::Solution(){}
Solution::~Solution(){}

const double Solution::getMeanOfImage(cv::Mat &src){
	if (src.channels() != 1){
		cout << "can only input gray image..." << endl;
		return 0;
	}
	double ans = 0.0;
	for (int i = 0; i < src.rows; ++i){
		for (int j = 0; j < src.cols; ++j)
			ans += src.at<uchar>(i, j);
	}
	ans /= (src.rows * src.cols);
	return ans;
}

void Solution::getGrayImage(cv::Mat &src, cv::Mat &dst){
	cv::cvtColor(src, dst, CV_RGB2GRAY);
}
