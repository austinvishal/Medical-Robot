
/*

 * read_scanner_data.h
 *
 *  Created on: Dec 16, 2013
 *      Author: vishal
*/

#ifndef READ_SCANNER_DATA_H_
#define READ_SCANNER_DATA_H_

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

using namespace std;
using namespace cv;
using namespace Eigen;

class laser{

public:

VectorXd read_scanner_data(char* argv){

	vector<double> angle;
	vector<double> data;
	vector<double> range;

	double res=0.25;
	double ang=-90;
	for(int a=0;a<=720;a++)
		{
			angle.push_back(ang);
			ang=ang+res;
		}

	vector<double>::iterator p;

  string line;
  std::vector<std::string> strs;
  ifstream in;
  in.open(argv);
  cout<<argv<<endl;

  //if (in.is_open()) {
  cout<<"open"<<endl;
  while (getline(in,line)){
	  cout<<line;
	  cout<<"inside"<<endl;
	  boost::split(strs, line, boost::is_any_of(";"));
 // }

 }

 
}
};


#endif  READ_SCANNER_DATA_H_



