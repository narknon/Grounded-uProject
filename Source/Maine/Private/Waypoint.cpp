#include "Waypoint.h"
#include "ObsidianIDComponent.h"

class AWaypoint;

void AWaypoint::SetNextWaypoint(AWaypoint* InWaypoint) {
}

AWaypoint::AWaypoint() {
    this->WaypointType = EWaypointType::;
    this->NextWaypoint = NULL;
    this->Duration = 0.00f;
    this->EmergeVariation = 0.00f;
    this->Anim = NULL;
    this->ChatterDelay = 0.00f;
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

