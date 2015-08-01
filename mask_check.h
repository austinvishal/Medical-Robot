/*
 * maskcheck.h
 *
 *  Created on: Dec 15, 2013
 *      Author: vishal
 */

#ifndef MASKCHECK_H_
#define MASKCHECK_H_

#include<iostream>
#include <vector>
#include <cv.h>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

bool maskcheck(Mat &Mask){
	
	int hitr=0,hitc=0;
	for(int r=0;r<=Mask.rows;r++){
							for(int c=0;c<=Mask.cols;c++){
								if((int)Mask.at<uchar>(r,c)==255){
									hitr=r+50;
									hitc=c+50;
									goto find;
								}

							}
						}

find:
		for(int r=hitr;r<=hitr+100;r++){
			for(int c=hitc;c<=hitc+100;c++){
				if((int)Mask.at<uchar>(r,c)!=255){
						return false;
				}

			}

		}

		return true;
}

#endif /* MASKCHECK_H_ */
