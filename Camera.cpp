#include "Camera.h"

Camera::Camera(Point p, Vector v, double dist, double fi) : CameraPoint(p), direct(v), p_Dist(dist), _fi(fi)
{
}

Camera::~Camera()
{
}

void Camera::SetCamearPoint(Point p) {
	this->CameraPoint = p;
}

void Camera::SetCamearDirection(Vector v) {
	this->direct = v;
}

void Camera::SetPlaneDistance(double dist) {
	this->p_Dist = dist;
}

bool Camera::PointInVisibleArea(Point p) {
	/* 
	\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
		///////////////////////////////////|
       ////////////////////////////////////|
	  /////////////////////////////////////|
	{}----------------------|              |
	  \\\\\\\\\\\\\\\\\\\\\\|              |
	   \\\\\\\\\\\\\\\\\\\\\|              |
	    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|
	////////////////////////////////////////
	*/
	auto border_up = [](double x, double fi) -> double { return tan(fi) * x; };
	auto border_down = [](double x, double fi) -> double { return tan(fi) * x * (-1); };
	
	if ((p.params[0] > CameraPoint.params[0] + p_Dist) && (p.params[0] < CameraPoint.params[0] + 0.001)) return false;
	if ((border_up(p_Dist, _fi) + CameraPoint.params[1] > p.params[1]) && (border_down(p_Dist, _fi) + CameraPoint.params[1] < p.params[1])) return false;
	else return true;
	
}