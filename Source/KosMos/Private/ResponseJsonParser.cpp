// Copyright 2015-2019 Mail.Ru Group. All Rights Reserved.
#pragma once

#include "ResponseJsonParser.h"
#include "ResponseJsonObject.h"

#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"

uint32 FUtf8Helper1::CodepointFromUtf8(const ANSICHAR*& SourceString, const uint32 SourceLengthRemaining)
{
	checkSlow(SourceLengthRemaining > 0);

	const ANSICHAR* OctetPtr = SourceString;

	uint32 Codepoint = 0;
	uint32 Octet = (uint32)((uint8)*SourceString);
	uint32 Octet2, Octet3, Octet4;

	if (Octet < 128) 
	{
		++SourceString; 
		return Octet;
	}
	else if (Octet < 192) 
	{
		++SourceString; 
		return UNICODE_BOGUS_CHAR_CODEPOINT;
	}
	else if (Octet < 224) 
	{
		if (SourceLengthRemaining < 2)
		{
			SourceString += SourceLengthRemaining;
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet -= (128 + 64);
		Octet2 = (uint32)((uint8) * (++OctetPtr));
		if ((Octet2 & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Codepoint = ((Octet << 6) | (Octet2 - 128));
		if ((Codepoint >= 0x80) && (Codepoint <= 0x7FF))
		{
			SourceString += 2; 
			return Codepoint;
		}
	}
	else if (Octet < 240) 
	{
		if (SourceLengthRemaining < 3)
		{
			SourceString += SourceLengthRemaining;
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet -= (128 + 64 + 32);
		Octet2 = (uint32)((uint8) * (++OctetPtr));
		if ((Octet2 & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet3 = (uint32)((uint8) * (++OctetPtr));
		if ((Octet3 & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Codepoint = (((Octet << 12)) | ((Octet2 - 128) << 6) | ((Octet3 - 128)));

		if (StringConv::IsHighSurrogate(Codepoint) || StringConv::IsLowSurrogate(Codepoint))
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		if ((Codepoint >= 0x800) && (Codepoint <= 0xFFFD))
		{
			SourceString += 3; 
			return Codepoint;
		}
	}
	else if (Octet < 248) 
	{
		if (SourceLengthRemaining < 4)
		{
			SourceString += SourceLengthRemaining;
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet -= (128 + 64 + 32 + 16);
		Octet2 = (uint32)((uint8) * (++OctetPtr));
		if ((Octet2 & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet3 = (uint32)((uint8) * (++OctetPtr));
		if ((Octet3 & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet4 = (uint32)((uint8) * (++OctetPtr));
		if ((Octet4 & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Codepoint = (((Octet << 18)) | ((Octet2 - 128) << 12) |
					 ((Octet3 - 128) << 6) | ((Octet4 - 128)));
		if ((Codepoint >= 0x10000) && (Codepoint <= 0x10FFFF))
		{
			SourceString += 4; 
			return Codepoint;
		}
	}
	else if (Octet < 252) 
	{
		if (SourceLengthRemaining < 5)
		{
			SourceString += SourceLengthRemaining;
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		SourceString += 5; 
		return UNICODE_BOGUS_CHAR_CODEPOINT;
	}

	else 
	{
		if (SourceLengthRemaining < 6)
		{
			SourceString += SourceLengthRemaining;
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		Octet = (uint32)((uint8) * (++OctetPtr));
		if ((Octet & (128 + 64)) != 128) 
		{
			++SourceString; 
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		SourceString += 6; 
		return UNICODE_BOGUS_CHAR_CODEPOINT;
	}

	++SourceString;
	return UNICODE_BOGUS_CHAR_CODEPOINT;
}

FJSONState::FJSONState()
	: Notation(EJSONNotation::NONE)
	, bEscape(false)
	, bError(false)
	, Quote(UNICODE_BOGUS_CHAR_CODEPOINT)
{
	Key.Reserve(1024);
	Data.Reserve(4096);

	Root = TSharedPtr<FJsonObject>(nullptr);

	Objects.Reserve(64);
	Tokens.Reserve(64);

	Tokens.Add(EJSONToken::ROOT);

	Size = 0;
}

EJSONToken FJSONState::GetToken(int32 Index)
{
	return Tokens.Num() > Index ? Tokens.Last(Index) : EJSONToken::ERROR;
}

bool FJSONState::CheckTokens(EJSONToken T1)
{
	return T1 == GetToken(0);
}

bool FJSONState::CheckTokens(EJSONToken T1, EJSONToken T2)
{
	return T1 == GetToken(1) && T2 == GetToken(0);
}

bool FJSONState::CheckTokens(EJSONToken T1, EJSONToken T2, EJSONToken T3)
{
	return T1 == GetToken(2) && T2 == GetToken(1) && T3 == GetToken(0);
}

void FJSONState::PopToken(int32 Num)
{
	if (Num > 0)
	{
		if (Tokens.Num() >= Num)
		{
			Tokens.RemoveAt(Tokens.Num() - Num, Num, false);
		}
		else
		{
			bError = true;
		}
	}

	Notation = EJSONNotation::NONE;
}

void FJSONState::PopObject()
{
	if (Objects.Num() > 0)
	{
		const auto Object = Objects.Pop(false);
		if (Object->Type == EJson::Object)
		{
			return;
		}
	}

	bError = true;
}

void FJSONState::PopArray()
{
	if (Objects.Num() > 0)
	{
		const auto Object = Objects.Pop(false);
		if (Object->Type == EJson::Array)
		{
			return;
		}
	}

	bError = true;
}

void FJSONState::PopValue(bool bCheckType)
{
	if (Objects.Num() > 0)
	{
		const auto Value = Objects.Last(0);
		if (Value->Type == EJson::Object || Value->Type == EJson::Array)
		{
			if (bCheckType)
			{
				bError = true;
			}
		}
		else
		{
			Objects.Pop(false);
			if (Objects.Num() > 0)
			{
				switch (Value->Type)
				{
				case EJson::Null:
				{
					const auto LowerCase = Data.ToLower();
					if (LowerCase != TEXT("null"))
					{
						bError = true;
					}
					break;
				}
				case EJson::String:
				{
					FJsonValueNonConstString* JsonValueString = ((FJsonValueNonConstString*)Value.Get());
					JsonValueString->AsNonConstString() = Data;
					JsonValueString->AsNonConstString().Shrink();
					Size += JsonValueString->AsNonConstString().GetAllocatedSize();
					break;
				}
				case EJson::Number:
				{
					const FString LowerCase = Data.ToLower();
					int32 ePosition = INDEX_NONE;
					LowerCase.FindChar('e', ePosition);
					if (ePosition == INDEX_NONE)
					{
						if (LowerCase.IsNumeric())
						{
							((FJsonValueNonConstNumber*)Value.Get())->AsNonConstNumber() = FCString::Atod(*LowerCase);
						}
						else
						{
							bError = true;
						}
					}
					else if (LowerCase.Len() > ePosition + 2)
					{
						const FString Left = LowerCase.Left(ePosition);
						const FString Rigth = LowerCase.Right(LowerCase.Len() - ePosition - 1);
						if (Left.IsNumeric() && Rigth.IsNumeric())
						{
							((FJsonValueNonConstNumber*)Value.Get())->AsNonConstNumber() = FCString::Atod(*Left) * FMath::Pow(10.f, FCString::Atoi(*Rigth));
						}
						else
						{
							bError = true;
						}
					}
					else
					{
						bError = true;
					}
					break;
				}
				case EJson::Boolean:
				{
					const auto LowerCase = Data.ToLower();
					if (LowerCase == TEXT("true"))
					{
						((FJsonValueNonConstBoolean*)Value.Get())->AsNonConstBool() = true;
					}
					else if (LowerCase == TEXT("false"))
					{
						((FJsonValueNonConstBoolean*)Value.Get())->AsNonConstBool() = false;
					}
					else
					{
						bError = true;
					}
					break;
				}
				default:
				{
					bError = true;
					return;
				}
				}

				ClearData();

				const auto Container = Objects.Last(0);
				if (Container->Type == EJson::Object)
				{
					if (Key.Len() > 0)
					{
						FString KeyCopy = Key;
						KeyCopy.Shrink();
						Container->AsObject()->SetField(KeyCopy, Value);
						Size += KeyCopy.GetAllocatedSize();
						ClearKey();
					}
					else
					{
						bError = true;
					}
				}
				else if (Container->Type == EJson::Array)
				{
					((FJsonValueNonConstArray*)Container.Get())->AsNonConstArray().Add(Value);
				}
				else
				{
					bError = true;
				}
			}
			else
			{
				bError = true;
			}
		}
	}
	else
	{
		bError = true;
	}
}

FJsonValue* FJSONState::GetLast()
{
	if (Objects.Num() > 0)
	{
		return Objects.Last(0).Get();
	}
	bError = true;
	return nullptr;
}

FJsonValueObject* FJSONState::GetObject()
{
	FJsonValue* Value = GetLast();
	if (Value != nullptr && Value->Type == EJson::Object)
	{
		return (FJsonValueObject*)Value;
	}
	bError = true;
	return nullptr;
}

FJsonValueNonConstArray* FJSONState::GetArray()
{
	FJsonValue* Value = GetLast();
	if (Value != nullptr && Value->Type == EJson::Array)
	{
		return (FJsonValueNonConstArray*)Value;
	}
	bError = true;
	return nullptr;
}

TSharedPtr<FJsonValueObject> FJSONState::PushObject()
{
	TSharedPtr<FJsonValueObject> Result(new FJsonValueObject(TSharedPtr<FJsonObject>(new FJsonObject())));
	Objects.Add(Result);
	Size += sizeof(TSharedPtr<FJsonValueObject>) + sizeof(FJsonValueObject);
	return Result;
}

TSharedPtr<FJsonValueObject> FJSONState::PushObject(TSharedPtr<FJsonObject> Object)
{
	TSharedPtr<FJsonValueObject> Result(new FJsonValueObject(Object));
	Objects.Add(Result);
	Size += sizeof(TSharedPtr<FJsonValueObject>) + sizeof(FJsonValueObject);
	return Result;
}

TSharedPtr<FJsonValueNonConstArray> FJSONState::PushArray()
{
	const TArray<TSharedPtr<FJsonValue>> Empty;
	TSharedPtr<FJsonValueNonConstArray> Result(new FJsonValueNonConstArray(Empty));
	Objects.Add(Result);
	Size += sizeof(TSharedPtr<FJsonValueNonConstArray>) + sizeof(FJsonValueNonConstArray);
	return Result;
}

TSharedPtr<FJsonValueNonConstBoolean> FJSONState::PushBoolean()
{
	TSharedPtr<FJsonValueNonConstBoolean> Result(new FJsonValueNonConstBoolean(false));
	Objects.Add(Result);
	Size += sizeof(TSharedPtr<FJsonValueNonConstBoolean>) + sizeof(FJsonValueNonConstBoolean);
	return Result;
}

TSharedPtr<FJsonValueNull> FJSONState::PushNull()
{
	TSharedPtr<FJsonValueNull> Result(new FJsonValueNull());
	Objects.Add(Result);
	Size += sizeof(TSharedPtr<FJsonValueNull>) + sizeof(FJsonValueNull);
	return Result;
}

TSharedPtr<FJsonValueNonConstNumber> FJSONState::PushNumber()
{
	TSharedPtr<FJsonValueNonConstNumber> Result(new FJsonValueNonConstNumber(0.f));
	Objects.Add(Result);
	Size += sizeof(TSharedPtr<FJsonValueNonConstNumber>) + sizeof(FJsonValueNonConstNumber);
	return Result;
}

TSharedPtr<FJsonValueNonConstString> FJSONState::PushString()
{
	TSharedPtr<FJsonValueNonConstString> Result(new FJsonValueNonConstString(TEXT("")));
	Objects.Add(Result);
	Size += sizeof(TSharedPtr<FJsonValueNonConstString>) + sizeof(FJsonValueNonConstString);
	return Result;
}

void FJSONState::ClearData()
{
	Data.Empty(Data.GetCharArray().Max());
}

void FJSONState::ClearKey()
{
	Key.Empty(Key.GetCharArray().Max());
}

void FJSONState::DataToKey()
{
	ClearKey();
	Key += Data;
	ClearData();
}

void FJSONState::Error()
{
	bError = true;
}

FJSONReader::FJSONReader()
{
}

bool FJSONReader::IsNewLine(const TCHAR& Char)
{
	return Char == '\n';
}

bool FJSONReader::IsSpace(const TCHAR& Char)
{
	return IsNewLine(Char) || Char == ' ' || Char == '\t' || Char == '\r';
}

bool FJSONReader::FindToken(const TCHAR& Char)
{
	if (State.bEscape)
	{
		return false;
	}

	if (State.Notation != EJSONNotation::STRING)
	{
		switch (Char)
		{
		case '{': State.Tokens.Add(EJSONToken::CURLY_BEGIN); return true;
		case '}': State.Tokens.Add(EJSONToken::CURLY_END); return true;
		case '[': State.Tokens.Add(EJSONToken::SQUARE_BEGIN); return true;
		case ']': State.Tokens.Add(EJSONToken::SQUARE_END); return true;
		case ',': State.Tokens.Add(EJSONToken::COMMA); return true;
		case ':': State.Tokens.Add(EJSONToken::COLON); return true;
		}
	}
	return false;
}

void FJSONReader::UpdateNotation()
{
	switch (State.GetToken())
	{
	case EJSONToken::ROOT:
	{
		return;
	}
	case EJSONToken::CURLY_BEGIN:
	{
		if (State.CheckTokens(EJSONToken::SQUARE_BEGIN, EJSONToken::CURLY_BEGIN)) 
		{
			State.Notation = EJSONNotation::OBJECT;
			auto Value = State.GetArray();
			if (Value != nullptr)
			{
				Value->AsNonConstArray().Add(State.PushObject());
			}
			else
			{
				State.Error();
			}
		}
		else if (State.CheckTokens(EJSONToken::CURLY_BEGIN, EJSONToken::COLON, EJSONToken::CURLY_BEGIN)) 
		{
			if (State.Key.Len() > 0)
			{
				State.Notation = EJSONNotation::OBJECT;
				const auto Value = State.GetObject();
				if (Value != nullptr)
				{
					Value->AsObject()->SetField(State.Key, State.PushObject());
					State.ClearKey();
				}
				else
				{
					State.Error();
				}
			}
			else
			{
				State.Error();
			}
		}
		else if (State.CheckTokens(EJSONToken::ROOT, EJSONToken::CURLY_BEGIN)) 
		{
			if (State.Root.IsValid())
			{
				State.Error();
			}
			else
			{
				State.Root = TSharedPtr<FJsonObject>(new FJsonObject());
				State.PushObject(State.Root); 
				State.Notation = EJSONNotation::OBJECT;
			}
		}
		else
		{
			State.Error();
		}
		break;
	}
	case EJSONToken::CURLY_END:
	{
		if (State.CheckTokens(EJSONToken::CURLY_BEGIN, EJSONToken::CURLY_END)) 
		{
			State.PopToken(2); 
			State.PopObject(); 
		}
		else if (State.CheckTokens(EJSONToken::CURLY_BEGIN, EJSONToken::COLON, EJSONToken::CURLY_END)) 
		{
			State.PopToken(3); 
			State.PopValue();  
			State.PopObject(); 
		}
		else
		{
			State.Error();
		}

		if (State.CheckTokens(EJSONToken::COLON)) 
		{
			State.PopToken(1); 
		}

		State.Notation = EJSONNotation::SKIP;

		break;
	}
	case EJSONToken::SQUARE_BEGIN:
	{
		if (State.CheckTokens(EJSONToken::SQUARE_BEGIN, EJSONToken::SQUARE_BEGIN)) 
		{
			State.Notation = EJSONNotation::ARRAY;
			auto Value = State.GetArray();
			if (Value != nullptr)
			{
				Value->AsNonConstArray().Add(State.PushArray());
			}
			else
			{
				State.Error();
			}
		}
		else if (State.CheckTokens(EJSONToken::CURLY_BEGIN, EJSONToken::COLON, EJSONToken::SQUARE_BEGIN)) 
		{
			State.Notation = EJSONNotation::ARRAY;
			if (State.Key.Len() > 0)
			{
				const auto Value = State.GetObject();
				if (Value != nullptr)
				{
					Value->AsObject()->SetField(State.Key, State.PushArray());
					State.ClearKey();
				}
				else
				{
					State.Error();
				}
			}
			else
			{
				State.Error();
			}
		}
		else if (State.CheckTokens(EJSONToken::ROOT, EJSONToken::SQUARE_BEGIN)) 
		{
			State.Error(); 
		}
		else
		{
			State.Error();
		}
		break;
	}
	case EJSONToken::SQUARE_END:
	{
		if (State.CheckTokens(EJSONToken::SQUARE_BEGIN, EJSONToken::SQUARE_END))
		{
			State.PopToken(2);
			State.PopValue(false);
			State.PopArray();

			if (State.CheckTokens(EJSONToken::COLON))
			{
				State.PopToken(1);
			}
		}
		else
		{
			State.Error();
		}

		State.Notation = EJSONNotation::SKIP;

		break;
	}
	case EJSONToken::COMMA:
	{
		if (State.CheckTokens(EJSONToken::CURLY_BEGIN, EJSONToken::COLON, EJSONToken::COMMA))
		{
			State.PopToken(2);
			State.PopValue(false);
			State.Notation = EJSONNotation::OBJECT;
		}
		else if (State.CheckTokens(EJSONToken::CURLY_BEGIN, EJSONToken::COMMA))
		{
			State.PopToken(1);
			State.Notation = EJSONNotation::OBJECT;
		}
		else if (State.CheckTokens(EJSONToken::SQUARE_BEGIN, EJSONToken::COMMA))
		{
			State.PopToken(1);
			State.PopValue(false);
			State.Notation = EJSONNotation::ARRAY;
		}
		else
		{
			State.Error();
		}
		break;
	}
	case EJSONToken::COLON:
	{
		if (State.CheckTokens(EJSONToken::CURLY_BEGIN, EJSONToken::COLON))
		{
			State.Notation = EJSONNotation::OBJECT;
			if (State.Data.Len() > 0)
			{
				State.DataToKey();
			}
			else
			{
				State.Error();
			}
		}
		else
		{
			State.Error();
		}
		break;
	}
	case EJSONToken::ERROR:
	{
		State.Error();
		break;
	}
	}

	if (!State.bError && State.Notation == EJSONNotation::NONE)
	{
		UpdateNotation();
	}
}

void FJSONReader::ReadAsString(const TCHAR& Char)
{
	if (IsNewLine(Char))
	{
		State.Error();
		return;
	}

	if (!State.bEscape && State.Quote == Char)
	{
		State.Quote = UNICODE_BOGUS_CHAR_CODEPOINT;
		State.Notation = EJSONNotation::SKIP;
	}
	else
	{
		if (State.bEscape)
		{
			switch (Char)
			{
			case 'n': State.Data.AppendChar('\n'); break;
			case 't': State.Data.AppendChar('\t'); break;
			default: State.Data.AppendChar(Char); break;
			}
		}
		else
		{
			State.Data.AppendChar(Char);
		}
	}
}

void FJSONReader::ReadAsStringSpecial(const TCHAR& Char)
{
	if (IsSpace(Char) && State.Data.Len() > 0)
	{
		State.Notation = EJSONNotation::SKIP;
		return;
	}

	State.Data.AppendChar(Char);
}

void FJSONReader::ReadAsNumber(const TCHAR& Char)
{
	if (IsSpace(Char) && State.Data.Len() > 0)
	{
		State.Notation = EJSONNotation::SKIP;
		return;
	}

	if ((Char >= '0' && Char <= '9') || Char == '-' || Char == '.' || Char == '+' || Char == 'e' || Char == 'E')
	{
		State.Data.AppendChar(Char);
	}
	else
	{
		State.Error();
	}
}

void FJSONReader::ReadBasicValue(const TCHAR& Char)
{
	switch (Char)
	{
	case 'T':
	case 't':
	case 'F':
	case 'f':
	{
		State.PushBoolean();
		State.Notation = EJSONNotation::STRING_SPECIAL;
		ReadAsStringSpecial(Char);
		return;
	}
	case 'N':
	case 'n':
	{
		State.PushNull();
		State.Notation = EJSONNotation::STRING_SPECIAL;
		ReadAsStringSpecial(Char);
		return;
	}
	case '\'':
	case '"':
	{
		State.PushString();
		State.Notation = EJSONNotation::STRING;
		State.Quote = Char;
		return;
	}
	}

	if ((Char >= '0' && Char <= '9') || Char == '-')
	{
		State.PushNumber();
		State.Notation = EJSONNotation::NUMBER;
		ReadAsNumber(Char);
		return;
	}
}

void FJSONReader::ReadAsArray(const TCHAR& Char)
{
	if (IsSpace(Char))
	{
		return;
	}
	ReadBasicValue(Char);
}

void FJSONReader::ReadAsObject(const TCHAR& Char)
{
	if (IsSpace(Char))
	{
		return;
	}

	if (State.CheckTokens(EJSONToken::CURLY_BEGIN))
	{
		if (Char == '\'' || Char == '"')
		{
			State.Notation = EJSONNotation::STRING;
			State.Quote = Char;
		}
		else
		{
			State.Notation = EJSONNotation::STRING_SPECIAL;
			ReadAsStringSpecial(Char);
		}
	}
	else if (State.CheckTokens(EJSONToken::CURLY_BEGIN, EJSONToken::COLON))
	{
		ReadBasicValue(Char);
	}
}

void FJSONReader::Skip(const TCHAR& Char)
{
	if (!IsSpace(Char))
	{
		State.Error();
	}
}

bool FJSONReader::Read(const TCHAR Char)
{
	if (Char == '\\' && !State.bEscape)
	{
		State.bEscape = true;
		return true;
	}

	if (FindToken(Char))
	{
		State.Notation = EJSONNotation::NONE;
		UpdateNotation();
		return true;
	}

	switch (State.Notation)
	{
	case EJSONNotation::NONE: UpdateNotation(); break;

	case EJSONNotation::STRING: ReadAsString(Char); break;
	case EJSONNotation::STRING_SPECIAL: ReadAsStringSpecial(Char); break;
	case EJSONNotation::NUMBER: ReadAsNumber(Char); break;
	case EJSONNotation::ARRAY: ReadAsArray(Char); break;
	case EJSONNotation::OBJECT: ReadAsObject(Char); break;

	case EJSONNotation::SKIP: Skip(Char); break;
	}

	if (State.bError)
	{
		State.Root = TSharedPtr<FJsonObject>(nullptr);
		State.Size = 0;
		return false;
	}

	State.bEscape = false;

	return true;
}

FJSONWriter::FJSONWriter()
{
}

bool FJSONWriter::GetStartChar(const TSharedPtr<FJsonValue>& JsonValue, FString& Str)
{
	switch (JsonValue->Type)
	{
	case EJson::Object:
		Str = FString(TEXT("{"));
		break;
	case EJson::Array:
		Str = FString(TEXT("["));
		break;
	case EJson::String:
		Str = FString(TEXT("\""));
		break;
	default:
		return false;
		break;
	}

	return true;
}

bool FJSONWriter::GetEndChar(const TSharedPtr<FJsonValue>& JsonValue, FString& Str)
{
	switch (JsonValue->Type)
	{
	case EJson::Object:
		Str = FString(TEXT("}"));
		break;
	case EJson::Array:
		Str = FString(TEXT("]"));
		break;
	case EJson::String:
		Str = FString(TEXT("\""));
		break;
	default:
		return false;
		break;
	}

	return true;
}

void FJSONWriter::Write(TSharedPtr<FJsonValue> JsonValue, FArchive* Writer, bool IsLastElement)
{
	FString Str;
	FArchive& Ar = *Writer;

	if (GetStartChar(JsonValue, Str))
	{
		UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
	}

	switch (JsonValue->Type)
	{
	case EJson::Object:
	{
		int ElementsCount = 0;
		auto Values = JsonValue->AsObject()->Values;

		for (auto& ChildJsonPair : Values)
		{
			Str = FString(TEXT("\""));
			UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());

			const TCHAR* BufferPtr = *ChildJsonPair.Key;
			for (int i = 0; i < ChildJsonPair.Key.Len(); ++i)
			{
				Str = FString(1, &ChildJsonPair.Key[i]);
				UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
			}

			Str = FString(TEXT("\""));
			UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());

			Str = FString(TEXT(":"));
			UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());

			++ElementsCount;

			Write(ChildJsonPair.Value, Writer, ElementsCount >= Values.Num());
		}
		break;
	}
	case EJson::Array:
	{
		int ElementsCount = 0;
		auto Array = JsonValue->AsArray();

		for (auto& ChildJsonValue : Array)
		{
			++ElementsCount;
			Write(ChildJsonValue, Writer, ElementsCount >= Array.Num());
		}
		break;
	}
	default:
	{
		const FString Value = JsonValue->AsString();

		const TCHAR* BufferPtr = *Value;
		for (int i = 0; i < Value.Len(); ++i)
		{
			Str = FString(1, &BufferPtr[i]);
			if (Str == TEXT("\""))
			{
				Str = FString(TEXT("\\"));
				UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
				Str = FString(1, &BufferPtr[i]);
			}
			if (Str == TEXT("\n"))
			{
				Str = FString(TEXT("\\"));
				UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
				Str = FString(TEXT("n"));
				UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
				Str = FString(1, &BufferPtr[i]);
			}
			else if (Str == TEXT("\t"))
			{
				Str = FString(TEXT("\\"));
				UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
				Str = FString(TEXT("t"));
				UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
				Str = FString(1, &BufferPtr[i]);
			}
			else
			{
				UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
			}
		}

		break;
	}
	}

	if (GetEndChar(JsonValue, Str))
	{
		UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
	}

	if (!IsLastElement)
	{
		Str = FString(TEXT(","));
		UResponseJsonObject::WriteStringToArchive(Ar, *Str, Str.Len());
	}
}
