#pragma once
#include "Point.h"
#include "Vector.h"
#include "Camera.h"

class GraphArea
{
public:
	GraphArea(Point begin, Point end, Vector proportion, Camera camera);
	~GraphArea();
	Point ScreenPointToAreaPoint(Point p);
	Point AreaPointToScreenPoint(Point p);
private:
	/// <summary>
	/// Начальная точка арены
	/// </summary>
	Point _start;
	
	/// <summary>
	/// Конечная точка арены
	/// </summary>
	Point _end;

	/// <summary>
	/// Proportion - пропорции начального экрана простмотра
	/// </summary>
	Vector prop; 

	/// <summary>
	/// Камера
	/// </summary>
	Camera _camera;
};