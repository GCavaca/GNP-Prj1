// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prj1_DashRechargeZone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePrj1_DashRechargeZone() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PROJ1_V2_API UClass* Z_Construct_UClass_APrj1_DashRechargeZone();
PROJ1_V2_API UClass* Z_Construct_UClass_APrj1_DashRechargeZone_NoRegister();
UPackage* Z_Construct_UPackage__Script_Proj1_v2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APrj1_DashRechargeZone Function BeginOverlap *****************************
struct Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics
{
	struct Prj1_DashRechargeZone_eventBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// defines behavior when an actor overlaps with the recharge zone\n" },
#endif
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/Prj1_DashRechargeZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "defines behavior when an actor overlaps with the recharge zone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Prj1_DashRechargeZone_eventBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Prj1_DashRechargeZone_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APrj1_DashRechargeZone, nullptr, "BeginOverlap", Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::Prj1_DashRechargeZone_eventBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::Prj1_DashRechargeZone_eventBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APrj1_DashRechargeZone::execBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class APrj1_DashRechargeZone Function BeginOverlap *******************************

// ********** Begin Class APrj1_DashRechargeZone ***************************************************
void APrj1_DashRechargeZone::StaticRegisterNativesAPrj1_DashRechargeZone()
{
	UClass* Class = APrj1_DashRechargeZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginOverlap", &APrj1_DashRechargeZone::execBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APrj1_DashRechargeZone;
UClass* APrj1_DashRechargeZone::GetPrivateStaticClass()
{
	using TClass = APrj1_DashRechargeZone;
	if (!Z_Registration_Info_UClass_APrj1_DashRechargeZone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Prj1_DashRechargeZone"),
			Z_Registration_Info_UClass_APrj1_DashRechargeZone.InnerSingleton,
			StaticRegisterNativesAPrj1_DashRechargeZone,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APrj1_DashRechargeZone.InnerSingleton;
}
UClass* Z_Construct_UClass_APrj1_DashRechargeZone_NoRegister()
{
	return APrj1_DashRechargeZone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APrj1_DashRechargeZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""An intangible zone that recharges the player's dash when they pass through it\n*/" },
#endif
		{ "IncludePath", "Variant_SideScrolling/Gameplay/Prj1_DashRechargeZone.h" },
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/Prj1_DashRechargeZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An intangible zone that recharges the player's dash when they pass through it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Recharge Zone bounding box */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_SideScrolling/Gameplay/Prj1_DashRechargeZone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recharge Zone bounding box" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APrj1_DashRechargeZone_BeginOverlap, "BeginOverlap" }, // 2503034521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrj1_DashRechargeZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APrj1_DashRechargeZone_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APrj1_DashRechargeZone, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrj1_DashRechargeZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrj1_DashRechargeZone_Statics::NewProp_Box,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrj1_DashRechargeZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APrj1_DashRechargeZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Proj1_v2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrj1_DashRechargeZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APrj1_DashRechargeZone_Statics::ClassParams = {
	&APrj1_DashRechargeZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APrj1_DashRechargeZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APrj1_DashRechargeZone_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrj1_DashRechargeZone_Statics::Class_MetaDataParams), Z_Construct_UClass_APrj1_DashRechargeZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APrj1_DashRechargeZone()
{
	if (!Z_Registration_Info_UClass_APrj1_DashRechargeZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrj1_DashRechargeZone.OuterSingleton, Z_Construct_UClass_APrj1_DashRechargeZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APrj1_DashRechargeZone.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APrj1_DashRechargeZone);
APrj1_DashRechargeZone::~APrj1_DashRechargeZone() {}
// ********** End Class APrj1_DashRechargeZone *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_home_gg_Documents_MscDGD_PJR_Proj1_v2_Source_Proj1_v2_Variant_SideScrolling_Gameplay_Prj1_DashRechargeZone_h__Script_Proj1_v2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APrj1_DashRechargeZone, APrj1_DashRechargeZone::StaticClass, TEXT("APrj1_DashRechargeZone"), &Z_Registration_Info_UClass_APrj1_DashRechargeZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrj1_DashRechargeZone), 442153366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_home_gg_Documents_MscDGD_PJR_Proj1_v2_Source_Proj1_v2_Variant_SideScrolling_Gameplay_Prj1_DashRechargeZone_h__Script_Proj1_v2_1601854257(TEXT("/Script/Proj1_v2"),
	Z_CompiledInDeferFile_FID_home_gg_Documents_MscDGD_PJR_Proj1_v2_Source_Proj1_v2_Variant_SideScrolling_Gameplay_Prj1_DashRechargeZone_h__Script_Proj1_v2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_home_gg_Documents_MscDGD_PJR_Proj1_v2_Source_Proj1_v2_Variant_SideScrolling_Gameplay_Prj1_DashRechargeZone_h__Script_Proj1_v2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
