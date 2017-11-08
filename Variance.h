//Team: <Team Name>
//Author: <Names>
//Creation: <Date>
#ifndef VARIANCE_H
#define VARIANCE_H

#include "Archive.h"

double variance(double x, double y, double z, double w, double v)
{
	//Rewrite the body of this function
	double sum = 0, mu = mean(x,y,z,v,w);
	
	sum += pow(x - mu, 2);
	sum += pow(y - mu, 2);
	sum += pow(z - mu, 2);
	sum += pow(v - mu, 2);
	sum += pow(w - mu, 2);
		
	double result = sum / 5.0;
	return result;
}

#endif
