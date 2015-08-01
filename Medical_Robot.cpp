//============================================================================
// Name        : Medical_Robot.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include <vector>
#include <cv.h>
#include<Eigen/Dense>
#include<boost/algorithm/string.hpp>
#include<fstream>
#include<string>
#include<math.h>
#include<stdio.h>
#include <stdlib.h>
#include<algorithm>

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "read_images.h"
#include "read_scanner_data.h"



Mat HSV;
using namespace std;
using namespace cv;
using namespace Eigen;

int main( int argc, char* argv[]){
 
  string color_to_track,neutral_color;
  string tracked_color;
  string image_orientation;

  /*//Color meaning declaration
  color_to_track=argv[3];
  cout<<"Color for Tracking : "<<color_to_track<<endl;
  neutral_color=argv[4];
  cout<<"Neutral Color : "<<neutral_color<<endl;


  Camera Image;//creating an instance Image to work on
  HSV=Image.read_images(argv[1]);//Calling a function to read images and get HSV image
  cout<<"Image Reading done"<<endl;
  tracked_color=Image.image_color(HSV);//color detection using segmentaion on HSV image
  cout<<"Tracked Color : "<<tracked_color<<endl;

  image_orientation=Image.image_orientation();
  cout<<"Object position in the Image : "<<image_orientation<<endl;*/

  laser scandata;
  scandata.read_scanner_data(argv[2]);



 

return 0;

}
