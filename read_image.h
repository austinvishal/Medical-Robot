/*
 * read_images.h
 *
 *  Created on: Dec 11, 2013
 *      Author: vishal
 */

#ifndef READ_IMAGES_H_
#define READ_IMAGES_H_

#include<iostream>
#include <vector>
#include <cv.h>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "maskcheck.h"
using namespace std;
using namespace cv;

class Camera{

	Mat image,Mask;
public:

	Mat read_images(const string& argv){

	  vector<Mat>::iterator it;
	  vector<Mat>::iterator ithsv;
	  vector<Mat>::iterator itmask;

	  image=(imread(argv));

		Mat hsv;
		cvtColor(image,hsv,CV_BGR2HSV);
		return hsv;

	}

	string image_color(Mat &hsv){
		inRange(hsv,Scalar(16,150,80),Scalar(24,230,220) ,Mask);//for yellow
		if(maskcheck(Mask)){
			cout<<"Yellow Color Found"<<endl;
			return "yellow";
		}
		//cout<<"yellow mask not done"<<endl;
		inRange(hsv,Scalar(40,50,100),Scalar(100,140,220) ,Mask);//for green
		if(maskcheck(Mask)){
				cout<<"Green Color Found"<<endl;
				return "green";
			}
		//cout<<"green mask not done"<<endl;
		inRange(hsv,Scalar(0,80,80),Scalar(180,255,255) ,Mask);//for red
		if(maskcheck(Mask)){
				cout<<"Red Color Found"<<endl;
				return "red";
			}
		//cout<<"red mask not done"<<endl;


    return "failed";
	}

	string image_orientation(){

		int right_count,left_count;

		//finding the number of non-zero pixels on the right side
		right_count=countNonZero(Mask.colRange(Range(160,320)));
		//cout<<right_count<<endl;

		//finding the number of non-zero pixels on the left side
		left_count=countNonZero(Mask.colRange(Range(0,160)));
		//cout<<left_count<<endl;

		if(right_count/1000!=left_count/1000){//if the first two digits of the number of pixels are same
											  // then the image is considered to be center
			if(left_count>right_count){
						return "left";
					}
					else
						return "right";
		}
		else
			return "center";



	}
};



#endif /* READ_IMAGES_H_ */
