#include "WebBrowser.h"

void UWebBrowser::SetZoomLevel(float NewZoomLevel) {
}

void UWebBrowser::SetManualSize(FVector2D NewSize) {
}

void UWebBrowser::LoadURL(const FString& NewURL) {
}

void UWebBrowser::LoadString(const FString& Contents, const FString& DummyURL) {
}

FString UWebBrowser::GetUrl() const {
    return TEXT("");
}

FText UWebBrowser::GetTitleText() const {
    return FText::GetEmpty();
}

void UWebBrowser::ExecuteJavascript(const FString& ScriptText) {
}

UWebBrowser::UWebBrowser() {
    this->bSupportsTransparency = false;
}

