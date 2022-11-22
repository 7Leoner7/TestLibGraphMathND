#include "GraphArea.h"

GraphArea::GraphArea(Point begin, Point end, Vector proportion, Camera camera) : _start(begin), _end(end), prop(proportion), _camera(camera) {}

GraphArea::~GraphArea() {}

Point GraphArea::ScreenPointToAreaPoint(Point p) {
	double* arr = new double[p.n];
	int w = _end.params[0] - _start.params[0];
	double w0 = 2.0;
	int h = _end.params[1] - _start.params[1];
	double h0 = 2.0;///!!!
	arr[0] = p.params[0] * w0 / w;
	arr[1] = p.params[1] * h0 / h;
	return Point(p.n, arr);
}
Point GraphArea::AreaPointToScreenPoint(Point p) {
	double* arr = new double[p.n];
	int w = _end.params[0] - _start.params[0];
	double w0 = 2.0;
	int h = _end.params[1] - _start.params[1];
	double h0 = 2.0;
	arr[0] = p.params[0] * w / w0;
	arr[1] = p.params[1] * h / h0;
	return Point(p.n, arr);
}

Point GraphArea::GetScreenLength() {
	return Point(2, new double[2] {this->_start.params[0] - this->_end.params[0], this->_start.params[1] - this->_end.params[1]});
}