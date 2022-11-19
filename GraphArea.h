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
	/// ��������� ����� �����
	/// </summary>
	Point _start;
	
	/// <summary>
	/// �������� ����� �����
	/// </summary>
	Point _end;

	/// <summary>
	/// Proportion - ��������� ���������� ������ ����������
	/// </summary>
	Vector prop; 

	/// <summary>
	/// ������
	/// </summary>
	Camera _camera;
};