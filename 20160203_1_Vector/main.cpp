#include <stdio.h>
#include "Vector3D.h"

void main()
{
	printf_s("\nDefault Constructor");
	printf_s("\nthisVector -> ");
	Vector3D vectorDefaultConstructor = Vector3D();
	vectorDefaultConstructor.Print();

	printf_s("\nConstructor with floats");
	printf_s("\nthisVector -> ");
	Vector3D thisVector = Vector3D(1, 2, 3);
	thisVector.Print();

	printf_s("\nConstructor with floats");
	printf_s("\notherVector -> ");
	Vector3D otherVector = Vector3D(2, 3, 4);
	otherVector.Print();

	printf_s("\nOperator +=");
	printf_s("\nthisVector += otherVector -> ");
	thisVector += otherVector;
	thisVector.Print();

	printf_s("\nOperator -=");
	printf_s("\nthisVector -= otherVector -> ");
	thisVector -= otherVector;
	thisVector.Print();

	printf_s("\nReset thisVector");
	printf_s("\nthisVector -> ");
	thisVector = Vector3D(1, 2, 3);
	thisVector.Print();
	printf_s("otherVector -> ");
	otherVector.Print();

	printf_s("\nOperator *=");
	printf_s("\nthisVector *= 3 -> ");
	thisVector *= 3;
	thisVector.Print();

	printf_s("\nOperator /=");
	printf_s("\nthisVector /= 3 -> ");
	thisVector /= 3;
	thisVector.Print();

	printf_s("\nOperator =");
	printf_s("\nthisVector = otherVector -> ");
	thisVector = otherVector;
	thisVector.Print();

	printf_s("\nOperator unary -");
	printf_s("\n-thisVector -> ");
	(-thisVector).Print();

	printf_s("\nReset thisVector");
	printf_s("\nthisVector -> ");
	thisVector = Vector3D(1, 2, 3);
	thisVector.Print();
	printf_s("otherVector -> ");
	otherVector.Print();

	printf_s("\nOperator +");
	printf_s("\nthisVector + otherVector -> ");
	(thisVector + otherVector).Print();

	printf_s("\nOperator -");
	printf_s("\nthisVector - otherVector -> ");
	(thisVector - otherVector).Print();

	printf_s("\nOperator *");
	printf_s("\nthisVector * 3 -> ");
	(thisVector * 3).Print();

	printf_s("\nOperator /");
	printf_s("\nthisVector / 3 -> ");
	(thisVector / 3).Print();

	printf_s("\nReset thisVector");
	printf_s("\nthisVector -> ");
	thisVector = Vector3D(1, 2, 3);
	thisVector.Print();
	printf_s("otherVector -> ");
	otherVector.Print();

	printf_s("\nOperator ==");
	printf_s("\nthisVector == otherVector -> ");
	
	if (thisVector == otherVector)
	{
		printf_s("True\n");
	}

	else
	{
		printf_s("False\n");
	}

	printf_s("\nOperator !=");
	printf_s("\nthisVector != otherVector -> ");

	if (thisVector != otherVector)
	{
		printf_s("True\n");
	}

	else
	{
		printf_s("False\n");
	}

	printf_s("\nNormalize");
	printf_s("\nthisVector -> ");
	thisVector.Normalize();
	thisVector.Print();

	printf_s("\nDot Product");
	printf_s("\nthisVector(dot)otherVector -> %.2f\n", thisVector.Dot(otherVector));

	printf_s("\nCross Product");
	printf_s("\nthisVector(cross)otherVector -> ");
	(thisVector.Cross(otherVector)).Print();

	getchar();
}