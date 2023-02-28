#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HandsAnimation.generated.h"

UCLASS()
class SHOOTME_API UHandsAnimation : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float speed;

	void NativeUpdateAnimation(float delta) override;
};
