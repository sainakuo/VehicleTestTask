// Fill out your copyright notice in the Description page of Project Settings.


#include "ControlUserWidget.h"

#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"

void UControlUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	//show cursor
	auto* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(PC, this);
	PC->SetShowMouseCursor(true);
}
