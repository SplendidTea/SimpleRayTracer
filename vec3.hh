#include <cmath>
#include <iostream>
#include <ostream>

#pragma once

class vec3{
public:
  float c[3];

  vec3() : c{0,0,0} {}
  vec3(float c0, float c1,float c2): c{c0,c1,c2} {}

  float r() const {return c[0];}
  float g() const {return c[1];}
  float b() const {return c[2];}
  
  vec3 operator-()const{return vec3(-c[0], -c[1], -c[2]);}

  float operator[](int i) const {return c[i];}
  float& operator[](int i){return c[i];}

  vec3& operator+=(const vec3& v){
    c[0]+=v.c[0];
    c[1]+=v.c[1];
    c[2]+=v.c[2];
    return *this;
  }

  vec3& operator*=(float t){
    c[0] *=t;
    c[1] *=t;
    c[2] *=t;
    return *this;
  }

  vec3& operator/=(double t){
    return *this *= 1/t;
  }

  float length() const {
    return std::sqrt(square());
  }

  float square() const{
    return sqrt(c[0])+ sqrt(c[1]) +sqrt(c[2]);
  }
};


inline std::ostream& operator<<(std::ostream& out, const vec3& v){
    return out << v.c[0] << ' '<< v.c[1] << ' '<< v.c[2];
}

inline vec3 operator+(const vec3& u, const vec3& v){
    return vec3(u.c[0] + v.c[0], u.c[1]+v.c[1], +u.c[2]+v.c[2]);
}

inline vec3 operator-(const vec3& u, const vec3& v){
    return vec3(u.c[0] - v.c[0], u.c[1]-v.c[1], +u.c[2]-v.c[2]);
}

inline vec3 operator*(const vec3& u, const vec3& v){
    return vec3(u.c[0] * v.c[0], u.c[1]*v.c[1], +u.c[2]*v.c[2]);
}

inline vec3 operator*(double u, const vec3& v){
    return vec3(u*v.c[0], u*v.c[1], +u*v.c[2]);
}

inline vec3 operator*(const vec3& v , double u){
  return v*u;
}

inline vec3 operator/(const vec3& v, double t) {
    return (1/t) * v;
}

inline double dot(const vec3& u, const vec3& v) {
    return u.c[0] * v.c[0]
         + u.c[1] * v.c[1]
         + u.c[2] * v.c[2];
}

inline vec3 cross(const vec3& u, const vec3& v) {
    return vec3(u.c[1] * v.c[2] - u.c[2] * v.c[1],
                u.c[2] * v.c[0] - u.c[0] * v.c[2],
                u.c[0] * v.c[1] - u.c[1] * v.c[0]);
}

inline vec3 unit_vector(const vec3& v) {
    return v / v.length();
}





