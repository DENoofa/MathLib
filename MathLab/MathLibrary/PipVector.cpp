template <typename PipV2D>
class PipVector
{
public:
	struct Vector2
	{
		PipV2D x, y;
	};

};

template <typename PipV3D>
class PipVec3D
{
public:

	union Vector3
	{
		struct
		{
			float x, y, z;
		};
		struct

		{
			float r, g, b;
		};

		float data[3];
	};

	PipV3D Vector3::opeartor[](float m_index) const
	{
		switch (m_index)
		{
		
		case 0: return x;
		case 1: return y;
		case 2: return z;
		default: assert(false);
		
		}
	}

	Vector3 Vector3::opeartor + (const Vector3& other) const
	{
		return { x + other.x, y + other.y, z + other.z };
	}



};

