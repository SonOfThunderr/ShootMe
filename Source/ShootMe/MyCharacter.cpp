#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"

void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveSide", this, &AMyCharacter::MoveSide);
	PlayerInputComponent->BindAxis("Turn", this, &AMyCharacter::RotateYaw);
	PlayerInputComponent->BindAxis("LookUp", this, &AMyCharacter::RotatePitch);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyCharacter::StopJumping);
}

void AMyCharacter::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector(), value);
}

void AMyCharacter::MoveSide(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}

void AMyCharacter::RotateYaw(float value)
{
	AddControllerYawInput(value * rotationSpeed * GetWorld()->GetDeltaSeconds());
}

void AMyCharacter::RotatePitch(float value)
{
	AddControllerPitchInput(value * rotationSpeed * GetWorld()->GetDeltaSeconds());
}

void AMyCharacter::StartJump()
{
	Jump();
}

void AMyCharacter::StopJump()
{
	StopJumping();
}
