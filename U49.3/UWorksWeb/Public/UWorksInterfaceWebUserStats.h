#pragma once
#include "CoreMinimal.h"
#include "UWorksInterfaceWeb.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksSteamID -FallbackName=UWorksSteamID
#include "SetUserStatsForGameMinimalDelegateDelegate.h"
#include "GetSchemaForGameMinimalDelegateDelegate.h"
#include "GetUserStatsForGameMinimalDelegateDelegate.h"
#include "GetPlayerAchievementsMinimalDelegateDelegate.h"
#include "GetNumberOfCurrentPlayersMinimalDelegateDelegate.h"
#include "GetGlobalStatsForGameMinimalDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UWorks -ObjectName=UWorksGameID -FallbackName=UWorksGameID
#include "GetGlobalAchievementPercentagesForAppMinimalDelegateDelegate.h"
#include "UWorksInterfaceWebUserStats.generated.h"

class UUWorksRequestWebGetSchemaForGame;
class UUWorksRequestWebSetUserStatsForGame;
class UUWorksRequestWebGetUserStatsForGame;
class UUWorksRequestWebGetPlayerAchievements;
class UUWorksRequestWebGetNumberOfCurrentPlayers;
class UUWorksRequestWebGetGlobalStatsForGame;
class UUWorksRequestWebGetGlobalAchievementPercentagesForApp;

UCLASS(BlueprintType)
class UWORKSWEB_API UUWorksInterfaceWebUserStats : public UUWorksInterfaceWeb {
    GENERATED_BODY()
public:
    UUWorksInterfaceWebUserStats();
    UFUNCTION(BlueprintCallable)
    static void SetUserStatsForGameMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, int32 Count, TArray<FString> Name, TArray<int32> Value, const FSetUserStatsForGameMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebSetUserStatsForGame* SetUserStatsForGame();
    
    UFUNCTION(BlueprintCallable)
    static void GetUserStatsForGameMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FGetUserStatsForGameMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetUserStatsForGame* GetUserStatsForGame();
    
    UFUNCTION(BlueprintCallable)
    static void GetSchemaForGameMinimal(const FString& Key, int32 AppID, const FString& Language, const FGetSchemaForGameMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetSchemaForGame* GetSchemaForGame();
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayerAchievementsMinimal(const FString& Key, FUWorksSteamID SteamID, int32 AppID, const FString& Language, const FGetPlayerAchievementsMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetPlayerAchievements* GetPlayerAchievements();
    
    UFUNCTION(BlueprintCallable)
    static void GetNumberOfCurrentPlayersMinimal(int32 AppID, const FGetNumberOfCurrentPlayersMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();
    
    UFUNCTION(BlueprintCallable)
    static void GetGlobalStatsForGameMinimal(int32 AppID, int32 Count, TArray<FString> Name, int32 StartDate, int32 EndDate, const FGetGlobalStatsForGameMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetGlobalStatsForGame* GetGlobalStatsForGame();
    
    UFUNCTION(BlueprintCallable)
    static void GetGlobalAchievementPercentagesForAppMinimal(FUWorksGameID GameID, const FGetGlobalAchievementPercentagesForAppMinimalDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static UUWorksRequestWebGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForApp();
    
};

