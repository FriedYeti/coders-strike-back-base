// start Map.cpp
class Map {
private:
  int numberOfLaps;
  int numberOfCheckpoints;
  std::vector<Vector2i> checkpointPositions;

public:
  void RetrieveInput() {
    std::cin >> this->numberOfLaps; std::cin.ignore();
    std::cin >> this->numberOfCheckpoints; std::cin.ignore();
    for(int i = 0; i < this->numberOfCheckpoints; i++) {
      Vector2i temp;
        std::cin >> temp.x >> temp.y; std::cin.ignore();
        this->checkpointPositions.push_back(temp);
        std::cerr << this->checkpointPositions[i] << std::endl;
    }
  }

  int GetNumberOfCheckpoints() { return numberOfCheckpoints; }

  Vector2i GetCheckpointPosition(int checkpointNumber) {
    return this->checkpointPositions[checkpointNumber];
  }
};
// end Map.cpp
