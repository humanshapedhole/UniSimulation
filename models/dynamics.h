#ifndef DYNAMICS_H
#define DYNAMICS_H

struct Vector2D
{
    double x1;				//!< X - coord
    double x2;				//!< Y - coord
};

struct Vector3D
{
    double x1;				//!< X - coord
    double x2;              //!< Y - coord
    double x3;				//!< Z - coord
};

class Dynamics
{
private:
	Vector3D coords;

public:
    /* Конструктор по умолчанию */
    Dynamics();

};

#endif // DYNAMICS_H
