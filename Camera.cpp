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

Point Camera::GetCamearPoint() { return this->CameraPoint; }

Vector Camera::GetCamearDirection() { return this->direct; }

double Camera::GetPlaneDistance() { return this->p_Dist; }

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

	if (CameraPoint.n != p.n) throw _exception();

	for (int i = 0; i < CameraPoint.n - 1; i++)
	{
		for (int j = i + 1; j < CameraPoint.n; j++)
		{
			if ((p.params[i] > CameraPoint.params[i] + p_Dist) && (p.params[i] < CameraPoint.params[i] + 0.001)) return false;
			if ((border_up(p_Dist, _fi) + CameraPoint.params[j] > p.params[j]) && (border_down(p_Dist, _fi) + CameraPoint.params[j] < p.params[j])) return false;
		}
	}
	return true;
}