#include "PipVector.h"

template <typename PM>
class Matrix2
{

};

template <typename PM3>
class Matrix3
{
public:
	struct 
	{
		PipVec3D xAxis;
		PipVec3D yAxis;
		PipVec3D zAxis;
	}
	PipVec3D arrayaxis[3];
	float dataaxis[3][3];
};

template <typename PM4>
class Matrix4
{

};