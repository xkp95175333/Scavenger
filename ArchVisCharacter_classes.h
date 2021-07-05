// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x590 (Inherited: 0x530)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x528(0x10)
	struct FString LookUpAtRateAxisName; // 0x538(0x10)
	struct FString TurnAxisName; // 0x548(0x10)
	struct FString TurnAtRateAxisName; // 0x558(0x10)
	struct FString MoveForwardAxisName; // 0x568(0x10)
	struct FString MoveRightAxisName; // 0x578(0x10)
	float MouseSensitivityScale_Pitch; // 0x588(0x04)
	float MouseSensitivityScale_Yaw; // 0x58c(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xb60 (Inherited: 0xb10)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0xb10(0x0c)
	struct FRotator RotationalDeceleration; // 0xb1c(0x0c)
	struct FRotator MaxRotationalVelocity; // 0xb28(0x0c)
	float MinPitch; // 0xb34(0x04)
	float MaxPitch; // 0xb38(0x04)
	float WalkingFriction; // 0xb3c(0x04)
	float WalkingSpeed; // 0xb40(0x04)
	float WalkingAcceleration; // 0xb44(0x04)
	char pad_B48[0x18]; // 0xb48(0x18)
};

