#include "Camera.h"

Camera::Camera(Point p, Vector v, double dist) : CameraPoint(p), direct(v), p_Dist(dist)
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