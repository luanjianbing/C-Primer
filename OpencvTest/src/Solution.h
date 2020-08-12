#pragma once
#ifndef SOLUTION_H
#define SOLUTION_H

#include "common.h"

class Solution{
private:

public:
	Solution();
	~Solution();
	void getGrayImage(cv::Mat &src, cv::Mat &dst);
	const double getMeanOfImage(cv::Mat &src);
};

#endif	// SOLUTION_H
