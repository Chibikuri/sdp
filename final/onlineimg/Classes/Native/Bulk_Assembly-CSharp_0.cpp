#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Game
struct Game_t1067549660;
// GameBase
struct GameBase_t3909370429;
// GameCanvas.BehaviourBase
struct BehaviourBase_t336802119;
// GameCanvas.Engine.Collision
struct Collision_t749710500;
// GameCanvas.Engine.Graphic
struct Graphic_t3861636944;
// GameCanvas.Engine.Network
struct Network_t1486597957;
// GameCanvas.Engine.Sound
struct Sound_t1526268750;
// GameCanvas.Engine.Time
struct Time_t146545966;
// GameCanvas.Input.Accelerometer
struct Accelerometer_t4116943948;
// GameCanvas.Input.CameraDevice
struct CameraDevice_t3521730366;
// GameCanvas.Input.Geolocation
struct Geolocation_t3974250434;
// GameCanvas.Input.Keyboard
struct Keyboard_t1702311912;
// GameCanvas.Input.Pointer
struct Pointer_t913817662;
// GameCanvas.Proxy
struct Proxy_t2620817541;
// GameCanvas.Resource
struct Resource_t74182618;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Random
struct Random_t108471755;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioListener
struct AudioListener_t2734094699;
// UnityEngine.Camera
struct Camera_t4157153871;

extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1512030231;
extern String_t* _stringLiteral2614922686;
extern String_t* _stringLiteral2672671807;
extern String_t* _stringLiteral2734268176;
extern String_t* _stringLiteral2938184353;
extern String_t* _stringLiteral3723472537;
extern String_t* _stringLiteral3963994475;
extern String_t* _stringLiteral757602046;
extern const uint32_t Game_DrawGame_m4067750112_MetadataUsageId;
extern const uint32_t Game_UpdateGame_m3892612959_MetadataUsageId;
extern const uint32_t Game__ctor_m678328513_MetadataUsageId;

struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745559_H
#define U3CMODULEU3E_T692745559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745559 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745559_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef EDOWNLOADSTATE_T3026767991_H
#define EDOWNLOADSTATE_T3026767991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCanvas.EDownloadState
struct  EDownloadState_t3026767991 
{
public:
	// System.Int32 GameCanvas.EDownloadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EDownloadState_t3026767991, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDOWNLOADSTATE_T3026767991_H
#ifndef EKEYCODE_T3426821747_H
#define EKEYCODE_T3426821747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCanvas.EKeyCode
struct  EKeyCode_t3426821747 
{
public:
	// System.Int32 GameCanvas.EKeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EKeyCode_t3426821747, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EKEYCODE_T3426821747_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PROXY_T2620817541_H
#define PROXY_T2620817541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCanvas.Proxy
struct  Proxy_t2620817541  : public RuntimeObject
{
public:
	// GameCanvas.Engine.Time GameCanvas.Proxy::cTime
	Time_t146545966 * ___cTime_0;
	// GameCanvas.Engine.Graphic GameCanvas.Proxy::cGraphic
	Graphic_t3861636944 * ___cGraphic_1;
	// GameCanvas.Engine.Sound GameCanvas.Proxy::cSound
	Sound_t1526268750 * ___cSound_2;
	// GameCanvas.Engine.Collision GameCanvas.Proxy::cCollision
	Collision_t749710500 * ___cCollision_3;
	// GameCanvas.Engine.Network GameCanvas.Proxy::cNetwork
	Network_t1486597957 * ___cNetwork_4;
	// GameCanvas.Input.Pointer GameCanvas.Proxy::cPointer
	Pointer_t913817662 * ___cPointer_5;
	// GameCanvas.Input.Keyboard GameCanvas.Proxy::cKeyboard
	Keyboard_t1702311912 * ___cKeyboard_6;
	// GameCanvas.Input.Accelerometer GameCanvas.Proxy::cAccelerometer
	Accelerometer_t4116943948 * ___cAccelerometer_7;
	// GameCanvas.Input.Geolocation GameCanvas.Proxy::cGeolocation
	Geolocation_t3974250434 * ___cGeolocation_8;
	// GameCanvas.Input.CameraDevice GameCanvas.Proxy::cCameraDevice
	CameraDevice_t3521730366 * ___cCameraDevice_9;
	// System.Random GameCanvas.Proxy::mRandom
	Random_t108471755 * ___mRandom_10;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyEscape
	int32_t ___KeyEscape_11;
	// UnityEngine.Color GameCanvas.Proxy::ColorWhite
	Color_t2555686324  ___ColorWhite_12;
	// UnityEngine.Color GameCanvas.Proxy::ColorBlack
	Color_t2555686324  ___ColorBlack_13;
	// UnityEngine.Color GameCanvas.Proxy::ColorGray
	Color_t2555686324  ___ColorGray_14;
	// UnityEngine.Color GameCanvas.Proxy::ColorRed
	Color_t2555686324  ___ColorRed_15;
	// UnityEngine.Color GameCanvas.Proxy::ColorBlue
	Color_t2555686324  ___ColorBlue_16;
	// UnityEngine.Color GameCanvas.Proxy::ColorGreen
	Color_t2555686324  ___ColorGreen_17;
	// UnityEngine.Color GameCanvas.Proxy::ColorYellow
	Color_t2555686324  ___ColorYellow_18;
	// UnityEngine.Color GameCanvas.Proxy::ColorPurple
	Color_t2555686324  ___ColorPurple_19;
	// UnityEngine.Color GameCanvas.Proxy::ColorCyan
	Color_t2555686324  ___ColorCyan_20;
	// UnityEngine.Color GameCanvas.Proxy::ColorAqua
	Color_t2555686324  ___ColorAqua_21;
	// System.Object GameCanvas.Proxy::WaitForNextFrame
	RuntimeObject * ___WaitForNextFrame_22;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyUp
	int32_t ___KeyUp_23;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyDown
	int32_t ___KeyDown_24;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyLeft
	int32_t ___KeyLeft_25;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyRight
	int32_t ___KeyRight_26;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyZ
	int32_t ___KeyZ_27;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyX
	int32_t ___KeyX_28;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyC
	int32_t ___KeyC_29;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyV
	int32_t ___KeyV_30;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeyEnter
	int32_t ___KeyEnter_31;
	// GameCanvas.EKeyCode GameCanvas.Proxy::KeySpace
	int32_t ___KeySpace_32;

public:
	inline static int32_t get_offset_of_cTime_0() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cTime_0)); }
	inline Time_t146545966 * get_cTime_0() const { return ___cTime_0; }
	inline Time_t146545966 ** get_address_of_cTime_0() { return &___cTime_0; }
	inline void set_cTime_0(Time_t146545966 * value)
	{
		___cTime_0 = value;
		Il2CppCodeGenWriteBarrier((&___cTime_0), value);
	}

	inline static int32_t get_offset_of_cGraphic_1() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cGraphic_1)); }
	inline Graphic_t3861636944 * get_cGraphic_1() const { return ___cGraphic_1; }
	inline Graphic_t3861636944 ** get_address_of_cGraphic_1() { return &___cGraphic_1; }
	inline void set_cGraphic_1(Graphic_t3861636944 * value)
	{
		___cGraphic_1 = value;
		Il2CppCodeGenWriteBarrier((&___cGraphic_1), value);
	}

	inline static int32_t get_offset_of_cSound_2() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cSound_2)); }
	inline Sound_t1526268750 * get_cSound_2() const { return ___cSound_2; }
	inline Sound_t1526268750 ** get_address_of_cSound_2() { return &___cSound_2; }
	inline void set_cSound_2(Sound_t1526268750 * value)
	{
		___cSound_2 = value;
		Il2CppCodeGenWriteBarrier((&___cSound_2), value);
	}

	inline static int32_t get_offset_of_cCollision_3() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cCollision_3)); }
	inline Collision_t749710500 * get_cCollision_3() const { return ___cCollision_3; }
	inline Collision_t749710500 ** get_address_of_cCollision_3() { return &___cCollision_3; }
	inline void set_cCollision_3(Collision_t749710500 * value)
	{
		___cCollision_3 = value;
		Il2CppCodeGenWriteBarrier((&___cCollision_3), value);
	}

	inline static int32_t get_offset_of_cNetwork_4() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cNetwork_4)); }
	inline Network_t1486597957 * get_cNetwork_4() const { return ___cNetwork_4; }
	inline Network_t1486597957 ** get_address_of_cNetwork_4() { return &___cNetwork_4; }
	inline void set_cNetwork_4(Network_t1486597957 * value)
	{
		___cNetwork_4 = value;
		Il2CppCodeGenWriteBarrier((&___cNetwork_4), value);
	}

	inline static int32_t get_offset_of_cPointer_5() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cPointer_5)); }
	inline Pointer_t913817662 * get_cPointer_5() const { return ___cPointer_5; }
	inline Pointer_t913817662 ** get_address_of_cPointer_5() { return &___cPointer_5; }
	inline void set_cPointer_5(Pointer_t913817662 * value)
	{
		___cPointer_5 = value;
		Il2CppCodeGenWriteBarrier((&___cPointer_5), value);
	}

	inline static int32_t get_offset_of_cKeyboard_6() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cKeyboard_6)); }
	inline Keyboard_t1702311912 * get_cKeyboard_6() const { return ___cKeyboard_6; }
	inline Keyboard_t1702311912 ** get_address_of_cKeyboard_6() { return &___cKeyboard_6; }
	inline void set_cKeyboard_6(Keyboard_t1702311912 * value)
	{
		___cKeyboard_6 = value;
		Il2CppCodeGenWriteBarrier((&___cKeyboard_6), value);
	}

	inline static int32_t get_offset_of_cAccelerometer_7() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cAccelerometer_7)); }
	inline Accelerometer_t4116943948 * get_cAccelerometer_7() const { return ___cAccelerometer_7; }
	inline Accelerometer_t4116943948 ** get_address_of_cAccelerometer_7() { return &___cAccelerometer_7; }
	inline void set_cAccelerometer_7(Accelerometer_t4116943948 * value)
	{
		___cAccelerometer_7 = value;
		Il2CppCodeGenWriteBarrier((&___cAccelerometer_7), value);
	}

	inline static int32_t get_offset_of_cGeolocation_8() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cGeolocation_8)); }
	inline Geolocation_t3974250434 * get_cGeolocation_8() const { return ___cGeolocation_8; }
	inline Geolocation_t3974250434 ** get_address_of_cGeolocation_8() { return &___cGeolocation_8; }
	inline void set_cGeolocation_8(Geolocation_t3974250434 * value)
	{
		___cGeolocation_8 = value;
		Il2CppCodeGenWriteBarrier((&___cGeolocation_8), value);
	}

	inline static int32_t get_offset_of_cCameraDevice_9() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___cCameraDevice_9)); }
	inline CameraDevice_t3521730366 * get_cCameraDevice_9() const { return ___cCameraDevice_9; }
	inline CameraDevice_t3521730366 ** get_address_of_cCameraDevice_9() { return &___cCameraDevice_9; }
	inline void set_cCameraDevice_9(CameraDevice_t3521730366 * value)
	{
		___cCameraDevice_9 = value;
		Il2CppCodeGenWriteBarrier((&___cCameraDevice_9), value);
	}

	inline static int32_t get_offset_of_mRandom_10() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___mRandom_10)); }
	inline Random_t108471755 * get_mRandom_10() const { return ___mRandom_10; }
	inline Random_t108471755 ** get_address_of_mRandom_10() { return &___mRandom_10; }
	inline void set_mRandom_10(Random_t108471755 * value)
	{
		___mRandom_10 = value;
		Il2CppCodeGenWriteBarrier((&___mRandom_10), value);
	}

	inline static int32_t get_offset_of_KeyEscape_11() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyEscape_11)); }
	inline int32_t get_KeyEscape_11() const { return ___KeyEscape_11; }
	inline int32_t* get_address_of_KeyEscape_11() { return &___KeyEscape_11; }
	inline void set_KeyEscape_11(int32_t value)
	{
		___KeyEscape_11 = value;
	}

	inline static int32_t get_offset_of_ColorWhite_12() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorWhite_12)); }
	inline Color_t2555686324  get_ColorWhite_12() const { return ___ColorWhite_12; }
	inline Color_t2555686324 * get_address_of_ColorWhite_12() { return &___ColorWhite_12; }
	inline void set_ColorWhite_12(Color_t2555686324  value)
	{
		___ColorWhite_12 = value;
	}

	inline static int32_t get_offset_of_ColorBlack_13() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorBlack_13)); }
	inline Color_t2555686324  get_ColorBlack_13() const { return ___ColorBlack_13; }
	inline Color_t2555686324 * get_address_of_ColorBlack_13() { return &___ColorBlack_13; }
	inline void set_ColorBlack_13(Color_t2555686324  value)
	{
		___ColorBlack_13 = value;
	}

	inline static int32_t get_offset_of_ColorGray_14() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorGray_14)); }
	inline Color_t2555686324  get_ColorGray_14() const { return ___ColorGray_14; }
	inline Color_t2555686324 * get_address_of_ColorGray_14() { return &___ColorGray_14; }
	inline void set_ColorGray_14(Color_t2555686324  value)
	{
		___ColorGray_14 = value;
	}

	inline static int32_t get_offset_of_ColorRed_15() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorRed_15)); }
	inline Color_t2555686324  get_ColorRed_15() const { return ___ColorRed_15; }
	inline Color_t2555686324 * get_address_of_ColorRed_15() { return &___ColorRed_15; }
	inline void set_ColorRed_15(Color_t2555686324  value)
	{
		___ColorRed_15 = value;
	}

	inline static int32_t get_offset_of_ColorBlue_16() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorBlue_16)); }
	inline Color_t2555686324  get_ColorBlue_16() const { return ___ColorBlue_16; }
	inline Color_t2555686324 * get_address_of_ColorBlue_16() { return &___ColorBlue_16; }
	inline void set_ColorBlue_16(Color_t2555686324  value)
	{
		___ColorBlue_16 = value;
	}

	inline static int32_t get_offset_of_ColorGreen_17() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorGreen_17)); }
	inline Color_t2555686324  get_ColorGreen_17() const { return ___ColorGreen_17; }
	inline Color_t2555686324 * get_address_of_ColorGreen_17() { return &___ColorGreen_17; }
	inline void set_ColorGreen_17(Color_t2555686324  value)
	{
		___ColorGreen_17 = value;
	}

	inline static int32_t get_offset_of_ColorYellow_18() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorYellow_18)); }
	inline Color_t2555686324  get_ColorYellow_18() const { return ___ColorYellow_18; }
	inline Color_t2555686324 * get_address_of_ColorYellow_18() { return &___ColorYellow_18; }
	inline void set_ColorYellow_18(Color_t2555686324  value)
	{
		___ColorYellow_18 = value;
	}

	inline static int32_t get_offset_of_ColorPurple_19() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorPurple_19)); }
	inline Color_t2555686324  get_ColorPurple_19() const { return ___ColorPurple_19; }
	inline Color_t2555686324 * get_address_of_ColorPurple_19() { return &___ColorPurple_19; }
	inline void set_ColorPurple_19(Color_t2555686324  value)
	{
		___ColorPurple_19 = value;
	}

	inline static int32_t get_offset_of_ColorCyan_20() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorCyan_20)); }
	inline Color_t2555686324  get_ColorCyan_20() const { return ___ColorCyan_20; }
	inline Color_t2555686324 * get_address_of_ColorCyan_20() { return &___ColorCyan_20; }
	inline void set_ColorCyan_20(Color_t2555686324  value)
	{
		___ColorCyan_20 = value;
	}

	inline static int32_t get_offset_of_ColorAqua_21() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___ColorAqua_21)); }
	inline Color_t2555686324  get_ColorAqua_21() const { return ___ColorAqua_21; }
	inline Color_t2555686324 * get_address_of_ColorAqua_21() { return &___ColorAqua_21; }
	inline void set_ColorAqua_21(Color_t2555686324  value)
	{
		___ColorAqua_21 = value;
	}

	inline static int32_t get_offset_of_WaitForNextFrame_22() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___WaitForNextFrame_22)); }
	inline RuntimeObject * get_WaitForNextFrame_22() const { return ___WaitForNextFrame_22; }
	inline RuntimeObject ** get_address_of_WaitForNextFrame_22() { return &___WaitForNextFrame_22; }
	inline void set_WaitForNextFrame_22(RuntimeObject * value)
	{
		___WaitForNextFrame_22 = value;
		Il2CppCodeGenWriteBarrier((&___WaitForNextFrame_22), value);
	}

	inline static int32_t get_offset_of_KeyUp_23() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyUp_23)); }
	inline int32_t get_KeyUp_23() const { return ___KeyUp_23; }
	inline int32_t* get_address_of_KeyUp_23() { return &___KeyUp_23; }
	inline void set_KeyUp_23(int32_t value)
	{
		___KeyUp_23 = value;
	}

	inline static int32_t get_offset_of_KeyDown_24() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyDown_24)); }
	inline int32_t get_KeyDown_24() const { return ___KeyDown_24; }
	inline int32_t* get_address_of_KeyDown_24() { return &___KeyDown_24; }
	inline void set_KeyDown_24(int32_t value)
	{
		___KeyDown_24 = value;
	}

	inline static int32_t get_offset_of_KeyLeft_25() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyLeft_25)); }
	inline int32_t get_KeyLeft_25() const { return ___KeyLeft_25; }
	inline int32_t* get_address_of_KeyLeft_25() { return &___KeyLeft_25; }
	inline void set_KeyLeft_25(int32_t value)
	{
		___KeyLeft_25 = value;
	}

	inline static int32_t get_offset_of_KeyRight_26() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyRight_26)); }
	inline int32_t get_KeyRight_26() const { return ___KeyRight_26; }
	inline int32_t* get_address_of_KeyRight_26() { return &___KeyRight_26; }
	inline void set_KeyRight_26(int32_t value)
	{
		___KeyRight_26 = value;
	}

	inline static int32_t get_offset_of_KeyZ_27() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyZ_27)); }
	inline int32_t get_KeyZ_27() const { return ___KeyZ_27; }
	inline int32_t* get_address_of_KeyZ_27() { return &___KeyZ_27; }
	inline void set_KeyZ_27(int32_t value)
	{
		___KeyZ_27 = value;
	}

	inline static int32_t get_offset_of_KeyX_28() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyX_28)); }
	inline int32_t get_KeyX_28() const { return ___KeyX_28; }
	inline int32_t* get_address_of_KeyX_28() { return &___KeyX_28; }
	inline void set_KeyX_28(int32_t value)
	{
		___KeyX_28 = value;
	}

	inline static int32_t get_offset_of_KeyC_29() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyC_29)); }
	inline int32_t get_KeyC_29() const { return ___KeyC_29; }
	inline int32_t* get_address_of_KeyC_29() { return &___KeyC_29; }
	inline void set_KeyC_29(int32_t value)
	{
		___KeyC_29 = value;
	}

	inline static int32_t get_offset_of_KeyV_30() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyV_30)); }
	inline int32_t get_KeyV_30() const { return ___KeyV_30; }
	inline int32_t* get_address_of_KeyV_30() { return &___KeyV_30; }
	inline void set_KeyV_30(int32_t value)
	{
		___KeyV_30 = value;
	}

	inline static int32_t get_offset_of_KeyEnter_31() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeyEnter_31)); }
	inline int32_t get_KeyEnter_31() const { return ___KeyEnter_31; }
	inline int32_t* get_address_of_KeyEnter_31() { return &___KeyEnter_31; }
	inline void set_KeyEnter_31(int32_t value)
	{
		___KeyEnter_31 = value;
	}

	inline static int32_t get_offset_of_KeySpace_32() { return static_cast<int32_t>(offsetof(Proxy_t2620817541, ___KeySpace_32)); }
	inline int32_t get_KeySpace_32() const { return ___KeySpace_32; }
	inline int32_t* get_address_of_KeySpace_32() { return &___KeySpace_32; }
	inline void set_KeySpace_32(int32_t value)
	{
		___KeySpace_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXY_T2620817541_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BEHAVIOURBASE_T336802119_H
#define BEHAVIOURBASE_T336802119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCanvas.BehaviourBase
struct  BehaviourBase_t336802119  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 GameCanvas.BehaviourBase::CanvasWidth
	int32_t ___CanvasWidth_4;
	// System.Int32 GameCanvas.BehaviourBase::CanvasHeight
	int32_t ___CanvasHeight_5;
	// GameCanvas.Resource GameCanvas.BehaviourBase::Resource
	Resource_t74182618 * ___Resource_6;
	// UnityEngine.Camera GameCanvas.BehaviourBase::mCamera
	Camera_t4157153871 * ___mCamera_7;
	// UnityEngine.AudioListener GameCanvas.BehaviourBase::mListener
	AudioListener_t2734094699 * ___mListener_8;
	// GameCanvas.Engine.Time GameCanvas.BehaviourBase::mTime
	Time_t146545966 * ___mTime_9;
	// GameCanvas.Engine.Graphic GameCanvas.BehaviourBase::mGraphic
	Graphic_t3861636944 * ___mGraphic_10;
	// GameCanvas.Engine.Sound GameCanvas.BehaviourBase::mSound
	Sound_t1526268750 * ___mSound_11;
	// GameCanvas.Engine.Collision GameCanvas.BehaviourBase::mCollision
	Collision_t749710500 * ___mCollision_12;
	// GameCanvas.Engine.Network GameCanvas.BehaviourBase::mNetwork
	Network_t1486597957 * ___mNetwork_13;
	// GameCanvas.Input.Pointer GameCanvas.BehaviourBase::mPointer
	Pointer_t913817662 * ___mPointer_14;
	// GameCanvas.Input.Keyboard GameCanvas.BehaviourBase::mKeyboard
	Keyboard_t1702311912 * ___mKeyboard_15;
	// GameCanvas.Input.Accelerometer GameCanvas.BehaviourBase::mAccelerometer
	Accelerometer_t4116943948 * ___mAccelerometer_16;
	// GameCanvas.Input.Geolocation GameCanvas.BehaviourBase::mGeolocation
	Geolocation_t3974250434 * ___mGeolocation_17;
	// GameCanvas.Input.CameraDevice GameCanvas.BehaviourBase::mCameraDevice
	CameraDevice_t3521730366 * ___mCameraDevice_18;
	// GameCanvas.Proxy GameCanvas.BehaviourBase::mProxy
	Proxy_t2620817541 * ___mProxy_19;
	// System.Collections.IEnumerator GameCanvas.BehaviourBase::mSequence
	RuntimeObject* ___mSequence_20;
	// System.Boolean GameCanvas.BehaviourBase::mIsRunning
	bool ___mIsRunning_21;

public:
	inline static int32_t get_offset_of_CanvasWidth_4() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___CanvasWidth_4)); }
	inline int32_t get_CanvasWidth_4() const { return ___CanvasWidth_4; }
	inline int32_t* get_address_of_CanvasWidth_4() { return &___CanvasWidth_4; }
	inline void set_CanvasWidth_4(int32_t value)
	{
		___CanvasWidth_4 = value;
	}

	inline static int32_t get_offset_of_CanvasHeight_5() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___CanvasHeight_5)); }
	inline int32_t get_CanvasHeight_5() const { return ___CanvasHeight_5; }
	inline int32_t* get_address_of_CanvasHeight_5() { return &___CanvasHeight_5; }
	inline void set_CanvasHeight_5(int32_t value)
	{
		___CanvasHeight_5 = value;
	}

	inline static int32_t get_offset_of_Resource_6() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___Resource_6)); }
	inline Resource_t74182618 * get_Resource_6() const { return ___Resource_6; }
	inline Resource_t74182618 ** get_address_of_Resource_6() { return &___Resource_6; }
	inline void set_Resource_6(Resource_t74182618 * value)
	{
		___Resource_6 = value;
		Il2CppCodeGenWriteBarrier((&___Resource_6), value);
	}

	inline static int32_t get_offset_of_mCamera_7() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mCamera_7)); }
	inline Camera_t4157153871 * get_mCamera_7() const { return ___mCamera_7; }
	inline Camera_t4157153871 ** get_address_of_mCamera_7() { return &___mCamera_7; }
	inline void set_mCamera_7(Camera_t4157153871 * value)
	{
		___mCamera_7 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_7), value);
	}

	inline static int32_t get_offset_of_mListener_8() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mListener_8)); }
	inline AudioListener_t2734094699 * get_mListener_8() const { return ___mListener_8; }
	inline AudioListener_t2734094699 ** get_address_of_mListener_8() { return &___mListener_8; }
	inline void set_mListener_8(AudioListener_t2734094699 * value)
	{
		___mListener_8 = value;
		Il2CppCodeGenWriteBarrier((&___mListener_8), value);
	}

	inline static int32_t get_offset_of_mTime_9() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mTime_9)); }
	inline Time_t146545966 * get_mTime_9() const { return ___mTime_9; }
	inline Time_t146545966 ** get_address_of_mTime_9() { return &___mTime_9; }
	inline void set_mTime_9(Time_t146545966 * value)
	{
		___mTime_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTime_9), value);
	}

	inline static int32_t get_offset_of_mGraphic_10() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mGraphic_10)); }
	inline Graphic_t3861636944 * get_mGraphic_10() const { return ___mGraphic_10; }
	inline Graphic_t3861636944 ** get_address_of_mGraphic_10() { return &___mGraphic_10; }
	inline void set_mGraphic_10(Graphic_t3861636944 * value)
	{
		___mGraphic_10 = value;
		Il2CppCodeGenWriteBarrier((&___mGraphic_10), value);
	}

	inline static int32_t get_offset_of_mSound_11() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mSound_11)); }
	inline Sound_t1526268750 * get_mSound_11() const { return ___mSound_11; }
	inline Sound_t1526268750 ** get_address_of_mSound_11() { return &___mSound_11; }
	inline void set_mSound_11(Sound_t1526268750 * value)
	{
		___mSound_11 = value;
		Il2CppCodeGenWriteBarrier((&___mSound_11), value);
	}

	inline static int32_t get_offset_of_mCollision_12() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mCollision_12)); }
	inline Collision_t749710500 * get_mCollision_12() const { return ___mCollision_12; }
	inline Collision_t749710500 ** get_address_of_mCollision_12() { return &___mCollision_12; }
	inline void set_mCollision_12(Collision_t749710500 * value)
	{
		___mCollision_12 = value;
		Il2CppCodeGenWriteBarrier((&___mCollision_12), value);
	}

	inline static int32_t get_offset_of_mNetwork_13() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mNetwork_13)); }
	inline Network_t1486597957 * get_mNetwork_13() const { return ___mNetwork_13; }
	inline Network_t1486597957 ** get_address_of_mNetwork_13() { return &___mNetwork_13; }
	inline void set_mNetwork_13(Network_t1486597957 * value)
	{
		___mNetwork_13 = value;
		Il2CppCodeGenWriteBarrier((&___mNetwork_13), value);
	}

	inline static int32_t get_offset_of_mPointer_14() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mPointer_14)); }
	inline Pointer_t913817662 * get_mPointer_14() const { return ___mPointer_14; }
	inline Pointer_t913817662 ** get_address_of_mPointer_14() { return &___mPointer_14; }
	inline void set_mPointer_14(Pointer_t913817662 * value)
	{
		___mPointer_14 = value;
		Il2CppCodeGenWriteBarrier((&___mPointer_14), value);
	}

	inline static int32_t get_offset_of_mKeyboard_15() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mKeyboard_15)); }
	inline Keyboard_t1702311912 * get_mKeyboard_15() const { return ___mKeyboard_15; }
	inline Keyboard_t1702311912 ** get_address_of_mKeyboard_15() { return &___mKeyboard_15; }
	inline void set_mKeyboard_15(Keyboard_t1702311912 * value)
	{
		___mKeyboard_15 = value;
		Il2CppCodeGenWriteBarrier((&___mKeyboard_15), value);
	}

	inline static int32_t get_offset_of_mAccelerometer_16() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mAccelerometer_16)); }
	inline Accelerometer_t4116943948 * get_mAccelerometer_16() const { return ___mAccelerometer_16; }
	inline Accelerometer_t4116943948 ** get_address_of_mAccelerometer_16() { return &___mAccelerometer_16; }
	inline void set_mAccelerometer_16(Accelerometer_t4116943948 * value)
	{
		___mAccelerometer_16 = value;
		Il2CppCodeGenWriteBarrier((&___mAccelerometer_16), value);
	}

	inline static int32_t get_offset_of_mGeolocation_17() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mGeolocation_17)); }
	inline Geolocation_t3974250434 * get_mGeolocation_17() const { return ___mGeolocation_17; }
	inline Geolocation_t3974250434 ** get_address_of_mGeolocation_17() { return &___mGeolocation_17; }
	inline void set_mGeolocation_17(Geolocation_t3974250434 * value)
	{
		___mGeolocation_17 = value;
		Il2CppCodeGenWriteBarrier((&___mGeolocation_17), value);
	}

	inline static int32_t get_offset_of_mCameraDevice_18() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mCameraDevice_18)); }
	inline CameraDevice_t3521730366 * get_mCameraDevice_18() const { return ___mCameraDevice_18; }
	inline CameraDevice_t3521730366 ** get_address_of_mCameraDevice_18() { return &___mCameraDevice_18; }
	inline void set_mCameraDevice_18(CameraDevice_t3521730366 * value)
	{
		___mCameraDevice_18 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraDevice_18), value);
	}

	inline static int32_t get_offset_of_mProxy_19() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mProxy_19)); }
	inline Proxy_t2620817541 * get_mProxy_19() const { return ___mProxy_19; }
	inline Proxy_t2620817541 ** get_address_of_mProxy_19() { return &___mProxy_19; }
	inline void set_mProxy_19(Proxy_t2620817541 * value)
	{
		___mProxy_19 = value;
		Il2CppCodeGenWriteBarrier((&___mProxy_19), value);
	}

	inline static int32_t get_offset_of_mSequence_20() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mSequence_20)); }
	inline RuntimeObject* get_mSequence_20() const { return ___mSequence_20; }
	inline RuntimeObject** get_address_of_mSequence_20() { return &___mSequence_20; }
	inline void set_mSequence_20(RuntimeObject* value)
	{
		___mSequence_20 = value;
		Il2CppCodeGenWriteBarrier((&___mSequence_20), value);
	}

	inline static int32_t get_offset_of_mIsRunning_21() { return static_cast<int32_t>(offsetof(BehaviourBase_t336802119, ___mIsRunning_21)); }
	inline bool get_mIsRunning_21() const { return ___mIsRunning_21; }
	inline bool* get_address_of_mIsRunning_21() { return &___mIsRunning_21; }
	inline void set_mIsRunning_21(bool value)
	{
		___mIsRunning_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOURBASE_T336802119_H
#ifndef GAMEBASE_T3909370429_H
#define GAMEBASE_T3909370429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameBase
struct  GameBase_t3909370429  : public BehaviourBase_t336802119
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEBASE_T3909370429_H
#ifndef GAME_T1067549660_H
#define GAME_T1067549660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Game
struct  Game_t1067549660  : public GameBase_t3909370429
{
public:
	// System.Int32 Game::sec
	int32_t ___sec_22;
	// System.Int32 Game::score
	int32_t ___score_23;
	// System.String Game::pname
	String_t* ___pname_24;
	// System.String Game::url
	String_t* ___url_25;
	// System.String Game::str
	String_t* ___str_26;
	// System.Int32 Game::gameState
	int32_t ___gameState_27;
	// System.Int32[] Game::box_x
	Int32U5BU5D_t385246372* ___box_x_29;
	// System.Int32[] Game::box_y
	Int32U5BU5D_t385246372* ___box_y_30;
	// System.Int32[] Game::box_speed
	Int32U5BU5D_t385246372* ___box_speed_31;
	// System.Int32 Game::box_w
	int32_t ___box_w_32;
	// System.Int32 Game::box_h
	int32_t ___box_h_33;
	// System.Int32 Game::player_x
	int32_t ___player_x_34;
	// System.Int32 Game::player_y
	int32_t ___player_y_35;
	// System.Int32 Game::player_dir
	int32_t ___player_dir_36;
	// System.Int32 Game::player_speed
	int32_t ___player_speed_37;
	// System.Int32 Game::count
	int32_t ___count_38;

public:
	inline static int32_t get_offset_of_sec_22() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___sec_22)); }
	inline int32_t get_sec_22() const { return ___sec_22; }
	inline int32_t* get_address_of_sec_22() { return &___sec_22; }
	inline void set_sec_22(int32_t value)
	{
		___sec_22 = value;
	}

	inline static int32_t get_offset_of_score_23() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___score_23)); }
	inline int32_t get_score_23() const { return ___score_23; }
	inline int32_t* get_address_of_score_23() { return &___score_23; }
	inline void set_score_23(int32_t value)
	{
		___score_23 = value;
	}

	inline static int32_t get_offset_of_pname_24() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___pname_24)); }
	inline String_t* get_pname_24() const { return ___pname_24; }
	inline String_t** get_address_of_pname_24() { return &___pname_24; }
	inline void set_pname_24(String_t* value)
	{
		___pname_24 = value;
		Il2CppCodeGenWriteBarrier((&___pname_24), value);
	}

	inline static int32_t get_offset_of_url_25() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___url_25)); }
	inline String_t* get_url_25() const { return ___url_25; }
	inline String_t** get_address_of_url_25() { return &___url_25; }
	inline void set_url_25(String_t* value)
	{
		___url_25 = value;
		Il2CppCodeGenWriteBarrier((&___url_25), value);
	}

	inline static int32_t get_offset_of_str_26() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___str_26)); }
	inline String_t* get_str_26() const { return ___str_26; }
	inline String_t** get_address_of_str_26() { return &___str_26; }
	inline void set_str_26(String_t* value)
	{
		___str_26 = value;
		Il2CppCodeGenWriteBarrier((&___str_26), value);
	}

	inline static int32_t get_offset_of_gameState_27() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___gameState_27)); }
	inline int32_t get_gameState_27() const { return ___gameState_27; }
	inline int32_t* get_address_of_gameState_27() { return &___gameState_27; }
	inline void set_gameState_27(int32_t value)
	{
		___gameState_27 = value;
	}

	inline static int32_t get_offset_of_box_x_29() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___box_x_29)); }
	inline Int32U5BU5D_t385246372* get_box_x_29() const { return ___box_x_29; }
	inline Int32U5BU5D_t385246372** get_address_of_box_x_29() { return &___box_x_29; }
	inline void set_box_x_29(Int32U5BU5D_t385246372* value)
	{
		___box_x_29 = value;
		Il2CppCodeGenWriteBarrier((&___box_x_29), value);
	}

	inline static int32_t get_offset_of_box_y_30() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___box_y_30)); }
	inline Int32U5BU5D_t385246372* get_box_y_30() const { return ___box_y_30; }
	inline Int32U5BU5D_t385246372** get_address_of_box_y_30() { return &___box_y_30; }
	inline void set_box_y_30(Int32U5BU5D_t385246372* value)
	{
		___box_y_30 = value;
		Il2CppCodeGenWriteBarrier((&___box_y_30), value);
	}

	inline static int32_t get_offset_of_box_speed_31() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___box_speed_31)); }
	inline Int32U5BU5D_t385246372* get_box_speed_31() const { return ___box_speed_31; }
	inline Int32U5BU5D_t385246372** get_address_of_box_speed_31() { return &___box_speed_31; }
	inline void set_box_speed_31(Int32U5BU5D_t385246372* value)
	{
		___box_speed_31 = value;
		Il2CppCodeGenWriteBarrier((&___box_speed_31), value);
	}

	inline static int32_t get_offset_of_box_w_32() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___box_w_32)); }
	inline int32_t get_box_w_32() const { return ___box_w_32; }
	inline int32_t* get_address_of_box_w_32() { return &___box_w_32; }
	inline void set_box_w_32(int32_t value)
	{
		___box_w_32 = value;
	}

	inline static int32_t get_offset_of_box_h_33() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___box_h_33)); }
	inline int32_t get_box_h_33() const { return ___box_h_33; }
	inline int32_t* get_address_of_box_h_33() { return &___box_h_33; }
	inline void set_box_h_33(int32_t value)
	{
		___box_h_33 = value;
	}

	inline static int32_t get_offset_of_player_x_34() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___player_x_34)); }
	inline int32_t get_player_x_34() const { return ___player_x_34; }
	inline int32_t* get_address_of_player_x_34() { return &___player_x_34; }
	inline void set_player_x_34(int32_t value)
	{
		___player_x_34 = value;
	}

	inline static int32_t get_offset_of_player_y_35() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___player_y_35)); }
	inline int32_t get_player_y_35() const { return ___player_y_35; }
	inline int32_t* get_address_of_player_y_35() { return &___player_y_35; }
	inline void set_player_y_35(int32_t value)
	{
		___player_y_35 = value;
	}

	inline static int32_t get_offset_of_player_dir_36() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___player_dir_36)); }
	inline int32_t get_player_dir_36() const { return ___player_dir_36; }
	inline int32_t* get_address_of_player_dir_36() { return &___player_dir_36; }
	inline void set_player_dir_36(int32_t value)
	{
		___player_dir_36 = value;
	}

	inline static int32_t get_offset_of_player_speed_37() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___player_speed_37)); }
	inline int32_t get_player_speed_37() const { return ___player_speed_37; }
	inline int32_t* get_address_of_player_speed_37() { return &___player_speed_37; }
	inline void set_player_speed_37(int32_t value)
	{
		___player_speed_37 = value;
	}

	inline static int32_t get_offset_of_count_38() { return static_cast<int32_t>(offsetof(Game_t1067549660, ___count_38)); }
	inline int32_t get_count_38() const { return ___count_38; }
	inline int32_t* get_address_of_count_38() { return &___count_38; }
	inline void set_count_38(int32_t value)
	{
		___count_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAME_T1067549660_H
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void GameBase::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameBase__ctor_m1574233200 (GameBase_t3909370429 * __this, const RuntimeMethod* method);
// GameCanvas.Proxy GameCanvas.BehaviourBase::get_gc()
extern "C" IL2CPP_METHOD_ATTR Proxy_t2620817541 * BehaviourBase_get_gc_m581928726 (BehaviourBase_t336802119 * __this, const RuntimeMethod* method);
// System.Int32 GameCanvas.Proxy::Random(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Proxy_Random_m4066551540 (Proxy_t2620817541 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void GameCanvas.Proxy::SetResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Proxy_SetResolution_m1101389593 (Proxy_t2620817541 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single GameCanvas.Proxy::get_TimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Proxy_get_TimeSinceStartup_m655787162 (Proxy_t2620817541 * __this, const RuntimeMethod* method);
// System.Int32 GameCanvas.Proxy::GetPointerFrameCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Proxy_GetPointerFrameCount_m2820804690 (Proxy_t2620817541 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean GameCanvas.Proxy::CheckHitRect(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Proxy_CheckHitRect_m2429715007 (Proxy_t2620817541 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, int32_t p7, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// GameCanvas.EDownloadState GameCanvas.Proxy::GetOnlineTextAsync(System.String,System.String&)
extern "C" IL2CPP_METHOD_ATTR int32_t Proxy_GetOnlineTextAsync_m1562623743 (Proxy_t2620817541 * __this, String_t* p0, String_t** p1, const RuntimeMethod* method);
// System.Void GameCanvas.Proxy::ClearScreen()
extern "C" IL2CPP_METHOD_ATTR void Proxy_ClearScreen_m2041212886 (Proxy_t2620817541 * __this, const RuntimeMethod* method);
// System.Void GameCanvas.Proxy::SetColor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Proxy_SetColor_m2590178511 (Proxy_t2620817541 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void GameCanvas.Proxy::DrawString(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Proxy_DrawString_m79157274 (Proxy_t2620817541 * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void GameCanvas.Proxy::FillRect(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Proxy_FillRect_m4184629520 (Proxy_t2620817541 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// GameCanvas.EDownloadState GameCanvas.Proxy::DrawOnlineImage(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Proxy_DrawOnlineImage_m1302517019 (Proxy_t2620817541 * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Game__ctor_m678328513 (Game_t1067549660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Game__ctor_m678328513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int sec = 0;
		__this->set_sec_22(0);
		// int score=0;
		__this->set_score_23(0);
		// string pname = "t93520mw";
		__this->set_pname_24(_stringLiteral2614922686);
		// string url = "";
		__this->set_url_25(_stringLiteral757602046);
		// string str = "";
		__this->set_str_26(_stringLiteral757602046);
		// int gameState = 0;
		__this->set_gameState_27(0);
		// int[] box_x = new int [BOX_NUM];
		Int32U5BU5D_t385246372* L_0 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_box_x_29(L_0);
		// int[] box_y = new int [BOX_NUM];
		Int32U5BU5D_t385246372* L_1 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_box_y_30(L_1);
		// int[] box_speed = new int [BOX_NUM];
		Int32U5BU5D_t385246372* L_2 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_box_speed_31(L_2);
		// int box_w = 24;
		__this->set_box_w_32(((int32_t)24));
		// int box_h = 24;
		__this->set_box_h_33(((int32_t)24));
		// int player_x = 304;
		__this->set_player_x_34(((int32_t)304));
		// int player_y = 400;
		__this->set_player_y_35(((int32_t)400));
		// int player_dir = 1;
		__this->set_player_dir_36(1);
		// int player_speed = 5;
		__this->set_player_speed_37(5);
		// int count =0;
		__this->set_count_38(0);
		GameBase__ctor_m1574233200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Game::InitGame()
extern "C" IL2CPP_METHOD_ATTR void Game_InitGame_m3035833348 (Game_t1067549660 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		V_0 = 0;
		goto IL_0057;
	}

IL_0008:
	{
		// box_x[i] = gc.Random(0,616);
		Int32U5BU5D_t385246372* L_0 = __this->get_box_x_29();
		int32_t L_1 = V_0;
		// box_x[i] = gc.Random(0,616);
		Proxy_t2620817541 * L_2 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// box_x[i] = gc.Random(0,616);
		NullCheck(L_2);
		int32_t L_3 = Proxy_Random_m4066551540(L_2, 0, ((int32_t)616), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)L_3);
		// box_y[i] = -gc.Random(100,480);
		Int32U5BU5D_t385246372* L_4 = __this->get_box_y_30();
		int32_t L_5 = V_0;
		// box_y[i] = -gc.Random(100,480);
		Proxy_t2620817541 * L_6 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// box_y[i] = -gc.Random(100,480);
		NullCheck(L_6);
		int32_t L_7 = Proxy_Random_m4066551540(L_6, ((int32_t)100), ((int32_t)480), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)((-L_7)));
		// box_speed[i] = gc.Random(3,6);
		Int32U5BU5D_t385246372* L_8 = __this->get_box_speed_31();
		int32_t L_9 = V_0;
		// box_speed[i] = gc.Random(3,6);
		Proxy_t2620817541 * L_10 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// box_speed[i] = gc.Random(3,6);
		NullCheck(L_10);
		int32_t L_11 = Proxy_Random_m4066551540(L_10, 3, 6, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_11);
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0057:
	{
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)10))))
		{
			goto IL_0008;
		}
	}
	{
		// gc.SetResolution(720, 1280);
		// gc.SetResolution(720, 1280);
		Proxy_t2620817541 * L_14 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// gc.SetResolution(720, 1280);
		NullCheck(L_14);
		Proxy_SetResolution_m1101389593(L_14, ((int32_t)720), ((int32_t)1280), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Game::UpdateGame()
extern "C" IL2CPP_METHOD_ATTR void Game_UpdateGame_m3892612959 (Game_t1067549660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Game_UpdateGame_m3892612959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// sec = (int)gc.TimeSinceStartup;
		// sec = (int)gc.TimeSinceStartup;
		Proxy_t2620817541 * L_0 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// sec = (int)gc.TimeSinceStartup;
		NullCheck(L_0);
		float L_1 = Proxy_get_TimeSinceStartup_m655787162(L_0, /*hidden argument*/NULL);
		__this->set_sec_22((((int32_t)((int32_t)L_1))));
		// if(gameState == 0){
		int32_t L_2 = __this->get_gameState_27();
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		// if(gc.GetPointerFrameCount(0) == 1){
		// if(gc.GetPointerFrameCount(0) == 1){
		Proxy_t2620817541 * L_3 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// if(gc.GetPointerFrameCount(0) == 1){
		NullCheck(L_3);
		int32_t L_4 = Proxy_GetPointerFrameCount_m2820804690(L_3, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		// gameState = 1;
		__this->set_gameState_27(1);
	}

IL_003a:
	{
		goto IL_0265;
	}

IL_0040:
	{
		// }else if(gameState == 1){
		int32_t L_5 = __this->get_gameState_27();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_01ca;
		}
	}
	{
		// count++;
		int32_t L_6 = __this->get_count_38();
		__this->set_count_38(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// score = count/60;
		int32_t L_7 = __this->get_count_38();
		__this->set_score_23(((int32_t)((int32_t)L_7/(int32_t)((int32_t)60))));
		// box_w = 24+count/300;
		int32_t L_8 = __this->get_count_38();
		__this->set_box_w_32(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)24), (int32_t)((int32_t)((int32_t)L_8/(int32_t)((int32_t)300))))));
		// box_h = 24+count/300;
		int32_t L_9 = __this->get_count_38();
		__this->set_box_h_33(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)24), (int32_t)((int32_t)((int32_t)L_9/(int32_t)((int32_t)300))))));
		// if(gc.GetPointerFrameCount(0) ==1){
		// if(gc.GetPointerFrameCount(0) ==1){
		Proxy_t2620817541 * L_10 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// if(gc.GetPointerFrameCount(0) ==1){
		NullCheck(L_10);
		int32_t L_11 = Proxy_GetPointerFrameCount_m2820804690(L_10, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00b5;
		}
	}
	{
		// player_dir = -player_dir;
		int32_t L_12 = __this->get_player_dir_36();
		__this->set_player_dir_36(((-L_12)));
	}

IL_00b5:
	{
		// player_x += player_dir * player_speed;
		int32_t L_13 = __this->get_player_x_34();
		int32_t L_14 = __this->get_player_dir_36();
		int32_t L_15 = __this->get_player_speed_37();
		__this->set_player_x_34(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15)))));
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		V_0 = 0;
		goto IL_0197;
	}

IL_00d6:
	{
		// box_y[i] = box_y[i] + box_speed[i];
		Int32U5BU5D_t385246372* L_16 = __this->get_box_y_30();
		int32_t L_17 = V_0;
		Int32U5BU5D_t385246372* L_18 = __this->get_box_y_30();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Int32U5BU5D_t385246372* L_22 = __this->get_box_speed_31();
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_25)));
		// if(box_y[i]> 480){
		Int32U5BU5D_t385246372* L_26 = __this->get_box_y_30();
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) <= ((int32_t)((int32_t)480))))
		{
			goto IL_014d;
		}
	}
	{
		// box_x[i] = gc.Random(0,616);
		Int32U5BU5D_t385246372* L_30 = __this->get_box_x_29();
		int32_t L_31 = V_0;
		// box_x[i] = gc.Random(0,616);
		Proxy_t2620817541 * L_32 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// box_x[i] = gc.Random(0,616);
		NullCheck(L_32);
		int32_t L_33 = Proxy_Random_m4066551540(L_32, 0, ((int32_t)616), /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)L_33);
		// box_y[i] = -gc.Random(100,480);
		Int32U5BU5D_t385246372* L_34 = __this->get_box_y_30();
		int32_t L_35 = V_0;
		// box_y[i] = -gc.Random(100,480);
		Proxy_t2620817541 * L_36 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// box_y[i] = -gc.Random(100,480);
		NullCheck(L_36);
		int32_t L_37 = Proxy_Random_m4066551540(L_36, ((int32_t)100), ((int32_t)480), /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (int32_t)((-L_37)));
		// box_speed[i] = gc.Random(3,6);
		Int32U5BU5D_t385246372* L_38 = __this->get_box_speed_31();
		int32_t L_39 = V_0;
		// box_speed[i] = gc.Random(3,6);
		Proxy_t2620817541 * L_40 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// box_speed[i] = gc.Random(3,6);
		NullCheck(L_40);
		int32_t L_41 = Proxy_Random_m4066551540(L_40, 3, 6, /*hidden argument*/NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (int32_t)L_41);
	}

IL_014d:
	{
		// if (gc.CheckHitRect (player_x,player_y,32,32,box_x[i],box_y[i],box_w,box_h)) {
		// if (gc.CheckHitRect (player_x,player_y,32,32,box_x[i],box_y[i],box_w,box_h)) {
		Proxy_t2620817541 * L_42 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		int32_t L_43 = __this->get_player_x_34();
		int32_t L_44 = __this->get_player_y_35();
		Int32U5BU5D_t385246372* L_45 = __this->get_box_x_29();
		int32_t L_46 = V_0;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Int32U5BU5D_t385246372* L_49 = __this->get_box_y_30();
		int32_t L_50 = V_0;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = __this->get_box_w_32();
		int32_t L_54 = __this->get_box_h_33();
		// if (gc.CheckHitRect (player_x,player_y,32,32,box_x[i],box_y[i],box_w,box_h)) {
		NullCheck(L_42);
		bool L_55 = Proxy_CheckHitRect_m2429715007(L_42, L_43, L_44, ((int32_t)32), ((int32_t)32), L_48, L_52, L_53, L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0192;
		}
	}
	{
		// gameState = 2;
		__this->set_gameState_27(2);
	}

IL_0192:
	{
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0197:
	{
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		int32_t L_57 = V_0;
		if ((((int32_t)L_57) < ((int32_t)((int32_t)10))))
		{
			goto IL_00d6;
		}
	}
	{
		// if(player_x < 0 || player_x > 608){
		int32_t L_58 = __this->get_player_x_34();
		if ((((int32_t)L_58) < ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t L_59 = __this->get_player_x_34();
		if ((((int32_t)L_59) <= ((int32_t)((int32_t)608))))
		{
			goto IL_01c4;
		}
	}

IL_01bb:
	{
		// gameState = 2;
		__this->set_gameState_27(2);
	}

IL_01c4:
	{
		goto IL_0265;
	}

IL_01ca:
	{
		// }else if(gameState == 2){
		int32_t L_60 = __this->get_gameState_27();
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_0265;
		}
	}
	{
		// if(gc.GetPointerFrameCount(0) ==1 ){
		// if(gc.GetPointerFrameCount(0) ==1 ){
		Proxy_t2620817541 * L_61 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// if(gc.GetPointerFrameCount(0) ==1 ){
		NullCheck(L_61);
		int32_t L_62 = Proxy_GetPointerFrameCount_m2820804690(L_61, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_62) == ((uint32_t)1))))
		{
			goto IL_023b;
		}
	}
	{
		// url = "http://web.sfc.keio.ac.jp/~wadari/sdp/k07_web/score.cgi?score="
		ObjectU5BU5D_t2843939325* L_63 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral2938184353);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2938184353);
		ObjectU5BU5D_t2843939325* L_65 = L_64;
		int32_t L_66 = __this->get_score_23();
		int32_t L_67 = L_66;
		RuntimeObject * L_68 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_68);
		ObjectU5BU5D_t2843939325* L_69 = L_65;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteral2734268176);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2734268176);
		ObjectU5BU5D_t2843939325* L_70 = L_69;
		String_t* L_71 = __this->get_pname_24();
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_71);
		String_t* L_72 = String_Concat_m2971454694(NULL /*static, unused*/, L_70, /*hidden argument*/NULL);
		__this->set_url_25(L_72);
		// gc.GetOnlineTextAsync(url,out str);
		// gc.GetOnlineTextAsync(url,out str);
		Proxy_t2620817541 * L_73 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		String_t* L_74 = __this->get_url_25();
		String_t** L_75 = __this->get_address_of_str_26();
		// gc.GetOnlineTextAsync(url,out str);
		NullCheck(L_73);
		Proxy_GetOnlineTextAsync_m1562623743(L_73, L_74, (String_t**)L_75, /*hidden argument*/NULL);
	}

IL_023b:
	{
		// if(gc.GetPointerFrameCount(0) >= 120){
		// if(gc.GetPointerFrameCount(0) >= 120){
		Proxy_t2620817541 * L_76 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// if(gc.GetPointerFrameCount(0) >= 120){
		NullCheck(L_76);
		int32_t L_77 = Proxy_GetPointerFrameCount_m2820804690(L_76, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_77) < ((int32_t)((int32_t)120))))
		{
			goto IL_0264;
		}
	}
	{
		// gameState = 0;
		__this->set_gameState_27(0);
		// count = 0;
		__this->set_count_38(0);
		// InitGame();
		// InitGame();
		VirtActionInvoker0::Invoke(4 /* System.Void GameCanvas.BehaviourBase::InitGame() */, __this);
	}

IL_0264:
	{
	}

IL_0265:
	{
		// }
		return;
	}
}
// System.Void Game::DrawGame()
extern "C" IL2CPP_METHOD_ATTR void Game_DrawGame_m4067750112 (Game_t1067549660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Game_DrawGame_m4067750112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// gc.ClearScreen();
		// gc.ClearScreen();
		Proxy_t2620817541 * L_0 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// gc.ClearScreen();
		NullCheck(L_0);
		Proxy_ClearScreen_m2041212886(L_0, /*hidden argument*/NULL);
		// gc.SetColor(0, 0, 0);
		// gc.SetColor(0, 0, 0);
		Proxy_t2620817541 * L_1 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// gc.SetColor(0, 0, 0);
		NullCheck(L_1);
		Proxy_SetColor_m2590178511(L_1, 0, 0, 0, /*hidden argument*/NULL);
		// if(gameState==0){
		int32_t L_2 = __this->get_gameState_27();
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		// gc.DrawString("Title", 60, 250);
		// gc.DrawString("Title", 60, 250);
		Proxy_t2620817541 * L_3 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// gc.DrawString("Title", 60, 250);
		NullCheck(L_3);
		Proxy_DrawString_m79157274(L_3, _stringLiteral3963994475, ((int32_t)60), ((int32_t)250), /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_0043:
	{
		// }else if(gameState==2){
		int32_t L_4 = __this->get_gameState_27();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0097;
		}
	}
	{
		// gc.DrawString("Game Over", 60, 250);
		// gc.DrawString("Game Over", 60, 250);
		Proxy_t2620817541 * L_5 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		// gc.DrawString("Game Over", 60, 250);
		NullCheck(L_5);
		Proxy_DrawString_m79157274(L_5, _stringLiteral2672671807, ((int32_t)60), ((int32_t)250), /*hidden argument*/NULL);
		// gc.DrawString("score" + score, 200, 250);
		// gc.DrawString("score" + score, 200, 250);
		Proxy_t2620817541 * L_6 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_score_23();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1512030231, L_9, /*hidden argument*/NULL);
		// gc.DrawString("score" + score, 200, 250);
		NullCheck(L_6);
		Proxy_DrawString_m79157274(L_6, L_10, ((int32_t)200), ((int32_t)250), /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_0097:
	{
		// }else if (gameState==1){
		int32_t L_11 = __this->get_gameState_27();
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00fe;
		}
	}
	{
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		V_0 = 0;
		goto IL_00d8;
	}

IL_00ab:
	{
		// gc.FillRect(box_x[i],box_y[i],box_w,box_h);
		// gc.FillRect(box_x[i],box_y[i],box_w,box_h);
		Proxy_t2620817541 * L_12 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_13 = __this->get_box_x_29();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Int32U5BU5D_t385246372* L_17 = __this->get_box_y_30();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = __this->get_box_w_32();
		int32_t L_22 = __this->get_box_h_33();
		// gc.FillRect(box_x[i],box_y[i],box_w,box_h);
		NullCheck(L_12);
		Proxy_FillRect_m4184629520(L_12, L_16, L_20, L_21, L_22, /*hidden argument*/NULL);
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00d8:
	{
		// for(int i =0 ; i < BOX_NUM ; i ++ ){
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)10))))
		{
			goto IL_00ab;
		}
	}
	{
		// gc.DrawOnlineImage("http://web.sfc.keio.ac.jp/~wadari/sdp/k07_web/Player.png",player_x,player_y);
		// gc.DrawOnlineImage("http://web.sfc.keio.ac.jp/~wadari/sdp/k07_web/Player.png",player_x,player_y);
		Proxy_t2620817541 * L_25 = BehaviourBase_get_gc_m581928726(__this, /*hidden argument*/NULL);
		int32_t L_26 = __this->get_player_x_34();
		int32_t L_27 = __this->get_player_y_35();
		// gc.DrawOnlineImage("http://web.sfc.keio.ac.jp/~wadari/sdp/k07_web/Player.png",player_x,player_y);
		NullCheck(L_25);
		Proxy_DrawOnlineImage_m1302517019(L_25, _stringLiteral3723472537, L_26, L_27, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
