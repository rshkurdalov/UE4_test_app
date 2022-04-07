// Fill out your copyright notice in the Description page of Project Settings.


#include "StringComparison.h"

int32 UStringComparison::CompareStrings(FString str1, FString str2)
{
	return FPlatformString::Stricmp(*str1, *str2);
}