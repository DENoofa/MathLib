template <typename PipV2D>
class PipVector
{
public:
	struct Vector2
	{
		PipV2D x, y;
	};

};

template <typename V3D>
class PipVec3D
{
public:
	//struct for the vector
	struct
	{
		V3D my_vec3d[3];

		V3D xi, yi, zi;
	};

	PipVec3D(V3D x = 0, V3D y = 0, V3D z = 0) : xi(x), yi(y), zi(z) {};


	float PipVec3D::operator [] (int index) const
	{
		return my_vec3d[index];
	}


	PipVec3D::operator const float* () const
	{
		return &my_vec3d;
	}


	//Addition
	PipVec3D PipVec3D::operator + (const PipVec3D& other) const
	{
		return { xi + other.xi, yi + other.yi, zi + other.zi };
	}

	//Addition assigning
	PipVec3D &PipVec3D::operator += (const PipVec3D *other)
	{
		return PipVec3D(xi + other->xi, yi + other->yi, zi + other->yi);
	}

	//subtraction
	PipVec3D& PipVec3D::operator -= (const PipVec3D& other) const
	{
		xi -= other.xi;
		yi -= other.yi;
		zi -= other.yi;
		return *this;
	}

	//subtraction assigning
	PipVec3D &PipVec3D::operator - (const PipVec3D *other)
	{
		return PipVec3D(xi - other.xi, yi - other.yi, zi - other.zi);
	}


	//Scale sizing, in multiplication
	PipVec3D PipVec3D::operator * (float scalar) const
	{
		return { xi * scalar, yi * scalar, zi * scalar };
	}

	//Scale sizing, in division
	PipVec3D& PipVec3D::operator /= (float scalar) const
	{
		xi /= scalar;
		yi /= scalar;
		zi /= scalar;
		return *this;
	}

	PipVec3D& PipVec3D::operator = (const PipVec3D& other)
	{
		xi = other.xi;
		yi = other.yi;
		zi = other.zi;
	}
};

class Matrix2
{
public:

};

template <typename M3>
class Matrix3
{
public:

};

class Matrix4
{
public:

};

