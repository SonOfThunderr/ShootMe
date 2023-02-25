#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class SHOOTME_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	void MoveForward(float value);
	void MoveSide(float value);
	void RotateYaw(float value);
	void RotatePitch(float value);
	void StartJump();
	void StopJump();

public:
	UPROPERTY(EditAnywhere) float rotationSpeed = 45;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
