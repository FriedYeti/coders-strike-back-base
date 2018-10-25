#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

#define PI 3.14159265

#include "Vector2.cpp" // -> AMALGAMACATE:Vector2.cpp
#include "Utilities.cpp" // -> AMALGAMACATE:Utilities.cpp
#include "Map.cpp" // -> AMALGAMACATE:Map.cpp
#include "PodRacer.cpp" // -> AMALGAMACATE:PodRacer.cpp
#include "PlayerPodRacer.cpp" // -> AMALGAMACATE:PlayerPodRacer.cpp

int main() {

    Map map;

    map.RetrieveInput();

    PlayerPodRacer racerPod;
    PlayerPodRacer blockerPod;
    PodRacer enemyPod1;
    PodRacer enemyPod2;


    // game loop
    while (1) {

        racerPod.RetrieveInput();
        blockerPod.RetrieveInput();

        enemyPod1.RetrieveInput();
        enemyPod2.RetrieveInput();

        if(racerPod.ShouldBoost(&map)) {
            std::cout << racerPod.CalculateTarget(&map) << " BOOST" << std::endl;
        }
        else if (racerPod.ShouldRam(&enemyPod)) {
            std::cout << enemyPod.GetPosition() << " SHIELD" << std::endl;
	}
        else {
            std::cout << racerPod.CalculateTarget(&map) << " " << racerPod.CalculateThrust(&map) << std::endl;
        }

        if(blockerPod.ShouldBoost(&map)) {
            std::cout << blockerPod.CalculateTarget(&map) << " BOOST" << std::endl;
        }
        else if (racerPod.ShouldRam(&enemyPod)) {
            std::cout << enemyPod.GetPosition() << " SHIELD" << std::endl;
        }
        else {
            std::cout << blockerPod.CalculateTarget(&map) << " " << blockerPod.CalculateThrust(&map) << std::endl;
        }

    }
}
