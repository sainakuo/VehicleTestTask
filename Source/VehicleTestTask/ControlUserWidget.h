// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Garage.h"
#include "Blueprint/UserWidget.h"
#include "ControlUserWidget.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class VEHICLETESTTASK_API UControlUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* SpawnButton1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* SpawnButton2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* SpawnButton3;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Garage")
	TSubclassOf<AGarage> GarageClass1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Garage")
	AGarage* Garage1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Garage")
	TSubclassOf<AGarage> GarageClass2;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Garage")
	AGarage* Garage2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Garage")
	TSubclassOf<AGarage> GarageClass3;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Garage")
	AGarage* Garage3;
	
	virtual void NativeConstruct() override;
};
