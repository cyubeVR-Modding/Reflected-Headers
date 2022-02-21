#include "SkeletalMeshSimulationComponent.h"


USkeletalMeshSimulationComponent::USkeletalMeshSimulationComponent() {
    this->PhysicalMaterial = NULL;
    this->ChaosSolverActor = NULL;
    this->OverridePhysicsAsset = NULL;
    this->bSimulating = true;
    this->bNotifyCollisions = false;
    this->ObjectType = (EObjectStateTypeEnum)120;
    this->Density = 2.40f;
    this->MinMass = 0.00f;
    this->MaxMass = 1000000.00f;
    this->CollisionType = (ECollisionTypeEnum)120;
    this->ImplicitShapeParticlesPerUnitArea = 0.10f;
    this->ImplicitShapeMinNumParticles = 0;
    this->ImplicitShapeMaxNumParticles = 50;
    this->MinLevelSetResolution = 5;
    this->MaxLevelSetResolution = 10;
    this->CollisionGroup = 0;
    this->InitialVelocityType = (EInitialVelocityTypeEnum)120;
}

