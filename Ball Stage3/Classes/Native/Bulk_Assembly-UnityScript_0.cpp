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

// MouseOrbit
struct MouseOrbit_t143029581;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DUnityScript_MouseOrbit143029581.h"
#include "AssemblyU2DUnityScript_MouseOrbit143029581MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, method) ((  Rigidbody_t4233889191 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MouseOrbit::.ctor()
extern "C"  void MouseOrbit__ctor_m1217624273 (MouseOrbit_t143029581 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		__this->set_distance_3((10.0f));
		__this->set_xSpeed_4((250.0f));
		__this->set_ySpeed_5((120.0f));
		__this->set_yMinLimit_6(((int32_t)-20));
		__this->set_yMaxLimit_7(((int32_t)80));
		return;
	}
}
// System.Void MouseOrbit::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var;
extern const uint32_t MouseOrbit_Start_m1629475745_MetadataUsageId;
extern "C"  void MouseOrbit_Start_m1629475745 (MouseOrbit_t143029581 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseOrbit_Start_m1629475745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t2243707580  L_1 = Transform_get_eulerAngles_m4066505159(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_y_2();
		__this->set_x_8(L_2);
		float L_3 = (&V_0)->get_x_1();
		__this->set_y_9(L_3);
		Rigidbody_t4233889191 * L_4 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		Rigidbody_t4233889191 * L_6 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var);
		NullCheck(L_6);
		Rigidbody_set_freezeRotation_m2131864169(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void MouseOrbit::LateUpdate()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1307534077;
extern Il2CppCodeGenString* _stringLiteral1307534078;
extern const uint32_t MouseOrbit_LateUpdate_m536119640_MetadataUsageId;
extern "C"  void MouseOrbit_LateUpdate_m536119640 (MouseOrbit_t143029581 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseOrbit_LateUpdate_m536119640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t4030073918  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00d6;
		}
	}
	{
		float L_2 = __this->get_x_8();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534077, /*hidden argument*/NULL);
		float L_4 = __this->get_xSpeed_4();
		__this->set_x_8(((float)((float)L_2+(float)((float)((float)((float)((float)L_3*(float)L_4))*(float)(0.02f))))));
		float L_5 = __this->get_y_9();
		float L_6 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1307534078, /*hidden argument*/NULL);
		float L_7 = __this->get_ySpeed_5();
		__this->set_y_9(((float)((float)L_5-(float)((float)((float)((float)((float)L_6*(float)L_7))*(float)(0.02f))))));
		float L_8 = __this->get_y_9();
		int32_t L_9 = __this->get_yMinLimit_6();
		int32_t L_10 = __this->get_yMaxLimit_7();
		float L_11 = MouseOrbit_ClampAngle_m4104644686(NULL /*static, unused*/, L_8, (((float)((float)L_9))), (((float)((float)L_10))), /*hidden argument*/NULL);
		__this->set_y_9(L_11);
		float L_12 = __this->get_y_9();
		float L_13 = __this->get_x_8();
		Quaternion_t4030073918  L_14 = Quaternion_EulerAngles_m3739509137(NULL /*static, unused*/, ((float)((float)L_12*(float)(0.0174532924f))), ((float)((float)L_13*(float)(0.0174532924f))), (((float)((float)0))), /*hidden argument*/NULL);
		V_0 = L_14;
		Quaternion_t4030073918  L_15 = V_0;
		float L_16 = __this->get_distance_3();
		Vector3_t2243707580  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m2638739322(&L_17, (((float)((float)0))), (((float)((float)0))), ((-L_16)), /*hidden argument*/NULL);
		Vector3_t2243707580  L_18 = Quaternion_op_Multiply_m1483423721(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		Transform_t3275118058 * L_19 = __this->get_target_2();
		NullCheck(L_19);
		Vector3_t2243707580  L_20 = Transform_get_position_m1104419803(L_19, /*hidden argument*/NULL);
		Vector3_t2243707580  L_21 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		Transform_t3275118058 * L_22 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_23 = V_0;
		NullCheck(L_22);
		Transform_set_rotation_m3411284563(L_22, L_23, /*hidden argument*/NULL);
		Transform_t3275118058 * L_24 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_25 = V_1;
		NullCheck(L_24);
		Transform_set_position_m2469242620(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		return;
	}
}
// System.Single MouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t MouseOrbit_ClampAngle_m4104644686_MetadataUsageId;
extern "C"  float MouseOrbit_ClampAngle_m4104644686 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___min1, float ___max2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseOrbit_ClampAngle_m4104644686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___angle0;
		if ((((float)L_0) >= ((float)(((float)((float)((int32_t)-360)))))))
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = ___angle0;
		___angle0 = ((float)((float)L_1+(float)(((float)((float)((int32_t)360))))));
	}

IL_001a:
	{
		float L_2 = ___angle0;
		if ((((float)L_2) <= ((float)(((float)((float)((int32_t)360)))))))
		{
			goto IL_0034;
		}
	}
	{
		float L_3 = ___angle0;
		___angle0 = ((float)((float)L_3-(float)(((float)((float)((int32_t)360))))));
	}

IL_0034:
	{
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void MouseOrbit::Main()
extern "C"  void MouseOrbit_Main_m3154091352 (MouseOrbit_t143029581 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
