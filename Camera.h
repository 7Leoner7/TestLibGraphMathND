#pragma once
#include "Point.h"
#include "Vector.h"

class Camera
{
public:
	Camera(Point p, Vector v, double dist, double fi);
	~Camera();
	void SetCamearPoint(Point p);
	void SetCamearDirection(Vector v);
	void SetPlaneDistance(double dist);
	bool PointInVisibleArea(Point p);
private:
	/// <summary>
	/// Camera position
	/// </summary>
	Point CameraPoint;
	/// <summary>
	/// Camera direction
	/// </summary>
	Vector direct;
	/// <summary>
	/// Plane distance
	/// </summary>
	double p_Dist;
	/// <summary>
	/// Óדמכ מבחמנא
	/// </summary>
	double _fi;
};

