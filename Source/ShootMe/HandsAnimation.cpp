#include "HandsAnimation.h"

void UHandsAnimation::NativeUpdateAnimation(float delta)
{
	speed = GetOwningActor()->GetVelocity().Size() / 600;
}
