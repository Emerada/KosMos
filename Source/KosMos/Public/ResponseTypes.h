// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/EngineBaseTypes.h"

#include "ResponseTypes.generated.h"

UENUM(BlueprintType)
enum class EResponseVerb : uint8
{
	GET,
	POST,
	PUT,
	DEL UMETA(DisplayName = "DELETE"),
	CUSTOM
};

UENUM(BlueprintType)
enum class EResponseContentType : uint8
{
	x_www_form_urlencoded_url	UMETA(DisplayName = "x-www-form-urlencoded (URL)"),
	x_www_form_urlencoded_body	UMETA(DisplayName = "x-www-form-urlencoded (Request Body)"),
	json,
	binary
};

UENUM(BlueprintType)
enum class EResponseStatus : uint8
{
	NotStarted,
	Processing,
	Failed,
	Failed_ConnectionError,
	Succeeded
};

UENUM(BlueprintType)
namespace EResponseHttpStatusCode
{
enum Type
{
	Unknown = 0 UMETA(DisplayName = "Unknown = 0"),
	Continue = 100 UMETA(DisplayName = "Continue = 100"),
	SwitchProtocol = 101 UMETA(DisplayName = "SwitchProtocol = 101"),
	Ok = 200 UMETA(DisplayName = "Ok = 200"),
	Created = 201 UMETA(DisplayName = "Created = 201"),
	Accepted = 202 UMETA(DisplayName = "Accepted = 202"),
	Partial = 203 UMETA(DisplayName = "Partial = 203"),
	NoContent = 204 UMETA(DisplayName = "NoContent = 204"),
	ResetContent = 205 UMETA(DisplayName = "ResetContent = 205"),
	PartialContent = 206 UMETA(DisplayName = "PartialContent = 206"),
	Ambiguous = 300 UMETA(DisplayName = "Ambiguous = 300"),
	Moved = 301 UMETA(DisplayName = "Moved = 301"),
	Redirect = 302 UMETA(DisplayName = "Redirect = 302"),
	RedirectMethod = 303 UMETA(DisplayName = "RedirectMethod = 303"),
	NotModified = 304 UMETA(DisplayName = "NotModified = 304"),
	UseProxy = 305 UMETA(DisplayName = "UseProxy = 305"),
	RedirectKeepVerb = 307 UMETA(DisplayName = "RedirectKeepVerb = 307"),
	BadRequest = 400 UMETA(DisplayName = "BadRequest = 400"),
	Denied = 401 UMETA(DisplayName = "Denied = 401"),
	PaymentReq = 402 UMETA(DisplayName = "PaymentReq = 402"),
	Forbidden = 403 UMETA(DisplayName = "Forbidden = 403"),
	NotFound = 404 UMETA(DisplayName = "NotFound = 404"),
	BadMethod = 405 UMETA(DisplayName = "BadMethod = 405"),
	NoneAcceptable = 406 UMETA(DisplayName = "NoneAcceptable = 406"),
	ProxyAuthReq = 407 UMETA(DisplayName = "ProxyAuthReq = 407"),
	RequestTimeout = 408 UMETA(DisplayName = "RequestTimeout = 408"),
	Conflict = 409 UMETA(DisplayName = "Conflict = 409"),
	Gone = 410 UMETA(DisplayName = "Gone = 410"),
	LengthRequired = 411 UMETA(DisplayName = "LengthRequired = 411"),
	PrecondFailed = 412 UMETA(DisplayName = "PrecondFailed = 412"),
	RequestTooLarge = 413 UMETA(DisplayName = "RequestTooLarge = 413"),
	UriTooLong = 414 UMETA(DisplayName = "UriTooLong = 414"),
	UnsupportedMedia = 415 UMETA(DisplayName = "UnsupportedMedia = 415"),
	TooManyRequests = 429 UMETA(DisplayName = "TooManyRequests = 429"),
	RetryWith = 449 UMETA(DisplayName = "RetryWith = 449"),
	ServerError = 500 UMETA(DisplayName = "ServerError = 500"),
	NotSupported = 501 UMETA(DisplayName = "NotSupported = 501"),
	BadGateway = 502 UMETA(DisplayName = "BadGateway = 502"),
	ServiceUnavail = 503 UMETA(DisplayName = "ServiceUnavail = 503"),
	GatewayTimeout = 504 UMETA(DisplayName = "GatewayTimeout = 504"),
	VersionNotSup = 505 UMETA(DisplayName = "VersionNotSup = 505")
};
}

USTRUCT(BlueprintType)
struct KOSMOS_API FResponseURL
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "URL")
	FString Protocol;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "URL")
	FString Host;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "URL")
	int32 Port;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "URL")
	int32 Valid;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "URL")
	FString Map;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "URL")
	FString RedirectURL;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "URL")
	TArray<FString> Op;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "URL")
	FString Portal;

	FResponseURL()
		: Port(0)
		, Valid(0)
	{
	}

	FResponseURL(FURL& InUrl)
		: Protocol(InUrl.Protocol)
		, Host(InUrl.Host)
		, Port(InUrl.Port)
		, Valid(InUrl.Valid)
		, Map(InUrl.Map)
		, RedirectURL(InUrl.RedirectURL)
		, Op(InUrl.Op)
		, Portal(InUrl.Portal)
	{
	}
};





