#include "Vector.h"

Vector::Vector(double x, double y) {
	this->Params = new double[2];
	this->Params[0] = x;
	this->Params[1] = y;
	leng = 2;
}

Vector::Vector(double x, double y, double z) {
	this->Params = new double[3];
	this->Params[0] = x;
	this->Params[1] = y;
	this->Params[2] = z;
	leng = 3;
}

Vector::Vector(int count, double* _params) {
	this->Params = _params;
	leng = count;
}

Vector::~Vector() {
	//delete this->Params;
}

Vector Vector::operator+(Vector v1) {
	int leng0 = (this->leng > v1.leng) ? v1.leng : this->leng;
	int leng1 = (this->leng < v1.leng) ? v1.leng : this->leng;
	double* res = new double[leng1];

	for (int i = 0; i < leng0; i++)
		res[i] = this->Params[i] + v1.Params[i];
	if (this->leng < v1.leng) {
		for (int i = leng0; i < leng1; i++)
			res[i] = v1.Params[i];
	}
	else
	{
		for (int i = leng0; i < leng1; i++)
			res[i] = this->Params[i];
	}

	return Vector(leng1, res);
}
/// <summary>
/// Присваивание
/// </summary>
/// <param name="v1"></param>
/// <returns></returns>
Vector& Vector::operator=(const Vector& v1) {
	this->Params = v1.Params;
	this->leng = v1.leng;
	return *this;
}

Vector Vector::operator*(Vector v1) {
	int leng0 = (this->leng > v1.leng) ? v1.leng : this->leng;
	int leng1 = (this->leng < v1.leng) ? v1.leng : this->leng;
	double* res = new double[leng1];
	for (int i = 0; i < leng0; i++)
		res[i] = this->Params[i] * v1.Params[i];
	for (int i = leng0; i < leng1; i++)
		res[i] = 0;
	return Vector(leng1, res);
}

Vector Vector::operator*(double k) {
	double* res = new double[this->leng];
	for (int i = 0; i < this->leng; i++)
		res[i] = this->Params[i] * k;
	return Vector(this->leng, res);
}