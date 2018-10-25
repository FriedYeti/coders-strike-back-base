// start PlayerPodRacer.cpp
class PlayerPodRacer : public PodRacer {
private:
  // Vector2i nextCheckpointPosition;
  Vector2i targetPosition;
  int nextCheckpointAngle;
  int nextCheckpointDistance;
  int thrust;
  bool bHasBoost = true;

public:
  Vector2i CalculateTarget(Map *map) {
    // TODO Custom targeting
    this->targetPosition = map->GetCheckpointPosition(this->nextCheckpointID);
    return this->targetPosition;
  }

  int CalculateThrust(Map *map) {
    // TODO Custom thrust easing
    this->thrust = Ease(10,100,1);
    this->thrust = clamp(thrust,0,100);

    return this->thrust;
  }

  bool ShouldBoost(Map *map) {
    // TODO Custom boost parameters
    if (this->bHasBoost) {
      this->bHasBoost = false;
      return true;
    }
    else { return false; }
  }

  bool ShouldRam(PodRacer *enemyPod) {
    // TODO Custom ram parameters
    return false;
  }

};
// end PlayerPodRacer.cpp
