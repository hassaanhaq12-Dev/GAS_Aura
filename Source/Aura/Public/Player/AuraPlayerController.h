// Copyrights Hassaan Ul Haq.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "AuraPlayerController.generated.h"

<<<<<<< HEAD
class UDamageTextComponent;
=======
>>>>>>> 38beebd5693c8845e644711014be0591f865d6ed
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class IEnemyInterface;
class UAuraInputConfig;
class UAuraAbilitySystemComponent;
class USplineComponent;
/**
 * 
 */
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
<<<<<<< HEAD
	AAuraPlayerController();
	virtual void PlayerTick(float DeltaTime) override;

	UFUNCTION(Client, Reliable)
	void ShowDamageNumber(float DamageAmount, ACharacter* TargetCharacter, bool bBlockedHit, bool bCriticalHit);

=======
	
	AAuraPlayerController();
	virtual void PlayerTick(float DeltaTime) override;
>>>>>>> 38beebd5693c8845e644711014be0591f865d6ed
protected:
	
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	
private:
	
	UPROPERTY(EditAnywhere,Category="Input")
	TObjectPtr<class UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere,Category="Input")
	TObjectPtr<class UInputAction> MoveAction;

	UPROPERTY(EditAnywhere,Category="Input")
	TObjectPtr<class UInputAction> ShiftAction;

	void ShiftPressed() {bShiftKeyDown = true;};
	void ShiftReleased() {bShiftKeyDown = false;};
	bool bShiftKeyDown = false;

	void Move(const struct FInputActionValue& InputActionValue);
	void CursorTrace();

	TScriptInterface<IEnemyInterface> LastActor;
	TScriptInterface<IEnemyInterface> ThisActor;

	FHitResult CursorHit;

	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);

	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UAuraInputConfig> InputConfig;

	UPROPERTY()
	TObjectPtr<UAuraAbilitySystemComponent> AuraAbilitySystemComponent;

	UAuraAbilitySystemComponent* GetASC();

	
	FVector CachedDestination = FVector::ZeroVector;
	float FollowTime = 0.f;
	float ShortPressThreshold = 0.5f;
	bool bAutoRunning = false;
	bool bTargeting = false;

	UPROPERTY(EditDefaultsOnly)
	float AutoRunAcceptanceRadius = 50.f;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USplineComponent> Spline;

private:

	void AutoRun();
<<<<<<< HEAD
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDamageTextComponent> DamageTextComponentClass;
=======
>>>>>>> 38beebd5693c8845e644711014be0591f865d6ed
};
