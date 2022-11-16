#include <iostream>
#include <opencv2/opencv.hpp>

std::vector<float> img_mean(cv::Mat img_roi){
	try{
		std::vector<float> colmean(img_roi.cols);
		int numb;
		float numb_all;
		
		for(int i = 0; i < img_roi.cols; i++){
			numb_all = 0;
			for(int j = 0; j < img_roi.rows; j++){
				numb = img_roi.at<uchar>(i,j);
				numb_all += numb;
			}
			colmean[y] = numb_all/img_roi.rows;
			//std::cout << colmean[y] << std::endl;
		}			
		return colmean;
	}catch(std::exception &e){
		std::cerr << "Exception: " << e.what()<< std::endl;
	}
}