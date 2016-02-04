#include <stdio.h>
#include <math.h>
#include "Vector3D.h"

Vector3D::Vector3D()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vector3D::Vector3D(const Vector3D& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
}

Vector3D::Vector3D(float _x, float _y, float _z)
{
	x = _x;
	y = _y;
	z = _z;
}

Vector3D::~Vector3D()
{

}

Vector3D& Vector3D::operator += (const Vector3D& other)
{
	this->x += other.x;
	this->y += other.y;
	this->z += other.z;

	return *this;
}

Vector3D& Vector3D::operator -= (const Vector3D& other)
{
	this->x -= other.x;
	this->y -= other.y;
	this->z -= other.z;

	return *this;
}

Vector3D& Vector3D::operator *= (float scalar)
{
	this->x *= scalar;
	this->y *= scalar;
	this->z *= scalar;

	return *this;
}

Vector3D& Vector3D::operator /= (float scalar)
{
	this->x /= scalar;
	this->y /= scalar;
	this->z /= scalar;

	return *this;
}

Vector3D& Vector3D::operator = (const Vector3D& other)
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;

	return *this;
}

Vector3D Vector3D::operator - () const
{
	return Vector3D(
		-(this->x),
		-(this->y),
		-(this->z));
}

Vector3D Vector3D::operator + (const Vector3D& other) const
{
	return Vector3D(
		this->x + other.x,
		this->y + other.y,
		this->z + other.z);
	
}

Vector3D Vector3D::operator - (const Vector3D& other) const
{
	return Vector3D(
		this->x - other.x,
		this->y - other.y,
		this->z - other.z);
}

Vector3D Vector3D::operator * (float scalar) const
{
	return Vector3D(
		this->x * scalar,
		this->y * scalar,
		this->z * scalar);
}

Vector3D Vector3D::operator / (float scalar) const
{
	return Vector3D(
		this->x / scalar,
		this->y / scalar,
		this->z / scalar);
}

bool Vector3D::operator == (const Vector3D& other) const
{
	if (fabs(this->x - other.x) < THRESHOLD &&
		fabs(this->x - other.x) < THRESHOLD &&
		fabs(this->x - other.x) < THRESHOLD)
	{
		return true;
	}

	return false;
}

bool Vector3D::operator != (const Vector3D& other) const
{
	if (fabs(this->x - other.x) >= THRESHOLD ||
		fabs(this->x - other.x) >= THRESHOLD ||
		fabs(this->x - other.x) >= THRESHOLD)
	{
		return true;
	}

	return false;
}

float Vector3D::Length()
{
	return sqrt(LengthSquar());
}

float Vector3D::LengthSquar()
{
	return this->x*this->x + this->y*this->y + this->z*this->z;
}

void Vector3D::Normalize()
{
	float magnitude = Length();

	if (magnitude == 0)
	{
		printf_s("Length can't be 0!");
		return;
	}

	magnitude = 1.0f / magnitude;

	this->x *= magnitude;
	this->y *= magnitude;
	this->z *= magnitude;
}

float Vector3D::Dot(const Vector3D& other)
{
	return this->x * other.x + this->y * other.y + this->z * other.z;
}

Vector3D Vector3D::Cross(const Vector3D& other)
{
	return Vector3D(this->y * other.z - this->z * other.y,
		this->z * other.x - this->x * other.z,
		this->x * other.y - this->y * other.x);
}

void Vector3D::Print()
{
	printf_s("(%.2f, %.2f, %.2f)\n", this->x, this->y, this->z);
}