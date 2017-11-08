//Team: <Team Name>
//Author: <Names>
//Creation: <Date>
#ifndef ZSCORES_H
#define ZSCORES_H

#include "Archive.h"

void zscores(double& x, double& y, double& z, double& w, double& v)
{
	//Rewrite the body of this function
	double mu = mean(x, y, z, w, v);
	double sig = sqrt(variance(x, y, z, v, w));

	x = (x - mu) / sig;
	y = (y - mu) / sig;
	z = (z - mu) / sig;
	v = (v - mu) / sig;
	w = (w - mu) / sig;
}

#endif