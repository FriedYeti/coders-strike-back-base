// start PodRacer.cpp
class PodRacer {
protected:
  Vector2i position;
  Vector2i velocity;
  int nextCheckpointID;
  int absoluteAngle;

public:
  virtual void RetrieveInput() {
    std::cin >> this->position.x >> this->position.y >> this->velocity.x >> this->velocity.y >> this->absoluteAngle >> this->nextCheckpointID; std::cin.ignore();
  }
  Vector2i GetPosition() { return this->position; }

};
// end PodRacer.cpp
