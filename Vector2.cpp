// start Vector2.cpp
class Vector2f {
public:
  float x;
  float y;

  Vector2f(float x = 0, float y = 0) {
      this->x = x;
      this->y = y;
  }

  float Magnitude() {
      return std::sqrt(this->x*this->x + this->y*this->y);
  }

  Vector2f Normalized() {
      Vector2f temp;
      temp.x = this->x / this->Magnitude();
      temp.y = this->y / this->Magnitude();
      return temp;
  }

  friend inline std::ostream& operator<<(std::ostream& os, const Vector2f &vctr) {
      os << vctr.x << " " << vctr.y;
      return os;
  }

  friend inline Vector2f operator- (const Vector2f &vctr1, const Vector2f &vctr2) {
      Vector2f temp;
      temp.x = vctr1.x - vctr2.x;
      temp.y = vctr1.y - vctr2.y;
      return temp;
  }

  friend inline Vector2f operator* (const Vector2f &vctr1, const float a) {
      Vector2f temp;
      temp.x = vctr1.x * a;
      temp.y = vctr1.y * a;
      return temp;
  }

  friend inline Vector2f operator* (const float a, const Vector2f &vctr1) {
      Vector2f temp;
      temp.x = vctr1.x * a;
      temp.y = vctr1.y * a;
      return temp;
  }

};

class Vector2i {
public:
    int x;
    int y;

  Vector2i(int x = 0, int y = 0) {
    this->x = x;
    this->y = y;
  }

  float Magnitude() {
      return std::sqrt(this->x*this->x + this->y*this->y);
  }

  Vector2f Normalized() {
      Vector2f temp;
      temp.x = this->x / this->Magnitude();
      temp.y = this->y / this->Magnitude();
      return temp;
  }

  friend inline std::ostream& operator<<(std::ostream& os, const Vector2i &vctr) {
      os << vctr.x << " " << vctr.y;
      return os;
  }

  friend inline Vector2i operator- (const Vector2i &vctr1, const Vector2i &vctr2) {
     Vector2i temp;
     temp.x = vctr1.x - vctr2.x;
     temp.y = vctr1.y - vctr2.y;
     return temp;
  }

  friend inline Vector2i operator* (const Vector2i &vctr1, const int a) {
     Vector2i temp;
     temp.x = vctr1.x * a;
     temp.y = vctr1.y * a;
     return temp;
  }

  friend inline Vector2i operator* (const int a, const Vector2i &vctr1) {
     Vector2i temp;
     temp.x = vctr1.x * a;
     temp.y = vctr1.y * a;
     return temp;
  }

};

float DotProduct(Vector2f a, Vector2f b) {
    return a.x*b.x + a.y*b.y;
}
// end Vector2.cpp
