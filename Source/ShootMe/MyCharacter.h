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
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) class UCameraComponent* cam;
	UPROPERTY(VisibleAnywhere) class USkeletalMeshComponent* arms;
	UPROPERTY(VisibleAnywhere) class USkeletalMeshComponent* weapon;

	AMyCharacter();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
