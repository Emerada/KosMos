// Copyright Epic Games, Inc. All Rights Reserved.

#include "KosMos.h"

//#include "ISettingsModule.h"
#include "Developer/Settings/Public/ISettingsModule.h"
#include "ResponseSettings.h"
#include "UObject/Package.h"

#define LOCTEXT_NAMESPACE "FKosMosModule"

void FKosMosModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	ModuleSettings = NewObject<UResponseSettings>(GetTransientPackage(), "KosMosSettings", RF_Standalone);
	ModuleSettings->AddToRoot();

	// Register settings
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "KosMos",
			LOCTEXT("RuntimeSettingsName", "KosMos"),
			LOCTEXT("RuntimeSettingsDescription", "Configure KosMos plugin settings"),
			ModuleSettings);
	}
}

void FKosMosModule::ShutdownModule()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "KosMos");
	}

	if (!GExitPurge)
	{
		ModuleSettings->RemoveFromRoot();
	}
	else
	{
		ModuleSettings = nullptr;
	}
}

UResponseSettings* FKosMosModule::GetSettings() const
{
	check(ModuleSettings);
	return ModuleSettings;
}

IMPLEMENT_MODULE(FKosMosModule, KosMos)

#undef LOCTEXT_NAMESPACE