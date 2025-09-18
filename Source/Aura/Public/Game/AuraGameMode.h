// Copyrights Hassaan Ul Haq.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AuraGameMode.generated.h"

class UCharacterClassInfo;
/**
 * 
 */
UCLASS()
class AURA_API AAuraGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category= "Character Class Defaults")
	TObjectPtr<UCharacterClassInfo> CharacterClassInfo;
};
