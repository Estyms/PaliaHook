#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOscillatorWaveform : uint8
{
	EOscillatorWaveform__SineWave  = 0,
	EOscillatorWaveform__PerlinNoise = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX = 2,
};

enum class EInitialOscillatorOffset : uint8
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2,
};

enum class ECameraAnimationPlaySpace : uint8
{
	ECameraAnimationPlaySpace__CameraLocal = 0,
	ECameraAnimationPlaySpace__World = 1,
	ECameraAnimationPlaySpace__UserDefined = 2,
	ECameraAnimationPlaySpace__ECameraAnimationPlaySpace_MAX = 3,
};

enum class ECameraAnimationEasingType : uint8
{
	ECameraAnimationEasingType__Linear = 0,
	ECameraAnimationEasingType__Sinusoidal = 1,
	ECameraAnimationEasingType__Quadratic = 2,
	ECameraAnimationEasingType__Cubic = 3,
	ECameraAnimationEasingType__Quartic = 4,
	ECameraAnimationEasingType__Quintic = 5,
	ECameraAnimationEasingType__Exponential = 6,
	ECameraAnimationEasingType__Circular = 7,
	ECameraAnimationEasingType__ECameraAnimationEasingType_MAX = 8,
};

enum class EInitialWaveOscillatorOffsetType : uint8
{
	EInitialWaveOscillatorOffsetType__Random = 0,
	EInitialWaveOscillatorOffsetType__Zero = 1,
	EInitialWaveOscillatorOffsetType__EInitialWaveOscillatorOffsetType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct GameplayCameras.FOscillator
struct FFOscillator
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialOscillatorOffset          InitialOffset;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOscillatorWaveform               Waveform;                                          // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D33[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GameplayCameras.ROscillator
struct FROscillator
{
public:
	struct FFOscillator                          Pitch;                                             // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          Yaw;                                               // 0xC(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          Roll;                                              // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GameplayCameras.VOscillator
struct FVOscillator
{
public:
	struct FFOscillator                          X;                                                 // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          Y;                                                 // 0xC(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          Z;                                                 // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayCameras.CameraAnimationParams
struct FCameraAnimationParams
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimationEasingType        EaseInType;                                        // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D37[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EaseInDuration;                                    // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimationEasingType        EaseOutType;                                       // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D38[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EaseOutDuration;                                   // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x18(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomStartTime;                                  // 0x19(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D39[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurationOverride;                                  // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimationPlaySpace         PlaySpace;                                         // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserPlaySpaceRot;                                  // 0x28(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayCameras.CameraAnimationHandle
struct FCameraAnimationHandle
{
public:
	uint8                                        Pad_D3C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GameplayCameras.ActiveCameraAnimationInfo
struct FActiveCameraAnimationInfo
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraAnimationParams                Params;                                            // 0x8(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraAnimationHandle                Handle;                                            // 0x48(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnimationSequencePlayer*        Player;                                            // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                                     // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EaseInCurrentTime;                                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EaseOutCurrentTime;                                // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEasingIn;                                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEasingOut;                                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3F[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayCameras.PerlinNoiseShaker
struct FPerlinNoiseShaker
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GameplayCameras.WaveOscillator
struct FWaveOscillator
{
public:
	float                                        Amplitude;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInitialWaveOscillatorOffsetType  InitialOffsetType;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D42[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif