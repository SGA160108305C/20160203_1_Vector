#pragma once
class Vector3D
{
public:
	Vector3D();	//0,0,0
	Vector3D(const Vector3D& other);	
	Vector3D(float _x, float _y, float _z);
	~Vector3D();
	
	//����
	Vector3D& operator += (const Vector3D& other);
	Vector3D& operator -= (const Vector3D& other);
	Vector3D& operator *= (float scalar);
	Vector3D& operator /= (float scalar);

	//����
	Vector3D& operator = ( const Vector3D& other );
	Vector3D operator - () const;

	//����
	Vector3D operator + (const Vector3D& other) const;
	Vector3D operator - (const Vector3D& other) const;
	Vector3D operator * (float scalar) const;
	Vector3D operator / (float scalar) const;

	//��
	bool operator == (const Vector3D& other) const;
	bool operator != (const Vector3D& other) const;

	//����
	float Length();
	float LengthSquar();

	//��ֶ�����
	void Normalize();
	
	//����
	float Dot(const Vector3D& other);

	//����
	Vector3D Cross(const Vector3D& other);

	//���
	void Print();


	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;

protected:
	const float THRESHOLD = 0.001f;
};

