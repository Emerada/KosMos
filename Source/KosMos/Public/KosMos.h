// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class UResponseSettings;

class FKosMosModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static inline FKosMosModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FKosMosModule>("KosMos");
	}
	
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("KosMos");
	}

	UResponseSettings* GetSettings() const;

protected:
	/** Module settings */
	UResponseSettings* ModuleSettings;
};
