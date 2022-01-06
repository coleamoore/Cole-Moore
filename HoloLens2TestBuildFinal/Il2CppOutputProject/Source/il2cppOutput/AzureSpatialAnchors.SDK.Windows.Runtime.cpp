#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>>
struct Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF;
// System.Func`2<System.IntPtr,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713;
// System.Func`2<System.IntPtr,System.Object>
struct Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC;
// System.Collections.Generic.IEnumerable`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct IEnumerable_1_tBF584A15EFCF3AC9F9DD6A069897685A41C26008;
// System.Collections.Generic.IEnumerable`1<System.IntPtr>
struct IEnumerable_1_t3D6B9EB43382EB4019BF7653871B60C7270CDC5E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IList`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct IList_1_tADF5B93706CB5294F8ED0DD9A199F4A979FF7586;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct IReadOnlyList_1_t0C318D679B2EE1A61403449ED4D952A0DB40AF89;
// System.Collections.Generic.List`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct ReadOnlyCollection_1_t2255307CB460E6EA65E2AD9D74D6EF05F100CA53;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher[]
struct CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate
struct AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17;
// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative
struct AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76;
// Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs
struct AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor
struct CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession
struct CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral
struct CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher
struct CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9;
// Microsoft.Azure.SpatialAnchors.CloudSpatialException
struct CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952;
// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate
struct LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91;
// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative
struct LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E;
// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs
struct LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate
struct OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB;
// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative
struct OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116;
// Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs
struct OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs
struct SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461;
// Microsoft.Azure.SpatialAnchors.SessionConfiguration
struct SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2;
// Microsoft.Azure.SpatialAnchors.SessionErrorDelegate
struct SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E;
// Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative
struct SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B;
// Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs
struct SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F;
// Microsoft.Azure.SpatialAnchors.SessionStatus
struct SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF;
// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate
struct SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0;
// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative
struct SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C;
// Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs
struct SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate
struct TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266;
// Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative
struct TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB;
// Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs
struct TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60;
// Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate
struct UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19;
// Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative
struct UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c
struct U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass85_0
struct U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass92_0
struct U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2289F1737C939FD5C0F268A12CDEF12056F4D1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral255FBA2ECA71FFA96DC210DD7D19B7E371913A64;
IL2CPP_EXTERN_C String_t* _stringLiteral2CE2C17741ED25198CD318B850D1FC1948BA6904;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8DFD923DB95CBD9ED4E17497DFF203E1F96C32;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_m7C684BC4E4A025992D735D6C54A9D3BB3988F1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m5C5097708E09EB8ADBA7E1B380E6720705B8F4FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF8D42ED09B03E8A714020A09EB03891407A125AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m193317B84A50FEED9C15BA9D6241A51272F28530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m278873A9D9E0508E740C59A19A6BD44BA60FC61F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_mB55678FE2A059452ED95AA01BEB1A59F366EEB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mC9892D8306B15A4FD28F300B258E16B0E0945543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m4A5FE81EC2DEEF61B19C369A32AF413A25D3E6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_mB4B1AC2DAEF72DEFF81B82CD7910755599DA174B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m31F885388C8DDB9D9708DE5F2A42C1E23468FE73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_m99B8D6D02BB6328D3DF21313ECC2E65163FD7A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudSpatialAnchorSession_AnchorLocatedStaticHandler_m64E9E6D3AB036F0C861FE8ADCE0533E48FFA1B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudSpatialAnchorSession_ErrorStaticHandler_m6BB2FBBE0E72FE3F9FC434B8E95FE0A4851E8302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudSpatialAnchorSession_LocateAnchorsCompletedStaticHandler_mC912801985FAD887254411C6FC612C6638155C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudSpatialAnchorSession_OnLogDebugStaticHandler_m90532737252CBC09C98D17C3457FF770BB1ACCFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudSpatialAnchorSession_SessionUpdatedStaticHandler_m644C88E4D56677AA92E417A8A997EB699E9011C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudSpatialAnchorSession_TokenRequiredStaticHandler_m246C34045315E93DEA6E7323F880A2D5797AB7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudSpatialAnchorSession_U3CGetSessionStatusAsyncU3Eb__93_0_mE5E9876BD5CBF82BAB72C989B9E045A3A5B0389D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudSpatialAnchorSession_UpdatedSensorFingerprintRequiredStaticHandler_m76F871ECC8D0D0A5E1E3A248A5A2CA145CBE8A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieTracker_1_Add_m95BE29557D7C45367CB7F5F2D22482AA73885490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIntPtr_t_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mE135557D31178A8AF99090A2B0F01C5C74D2835C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisIntPtr_t_m456F1B8EE2356E3FEB83646C6005CD3994F72085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mC1411A606A08E260E4DBF9F4BDC3A7CAC23717C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m70CD8B46F1B146410ED8773C1FF4C882327E9BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0B5314AB2487979AA54A12812798199E455E9FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_m75521C360D663C786FAB301E47742E4C930B5319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m9004D584DCBCC105C798D2E5FC79DCD752CE8F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m319F1AF0C68450C7E35A72FA0855A242442EC268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7C1DB4BC3271066432B742144E9C2A0EFFF16B6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisSessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_m95667516390D6C8D9B739BFC8D0AD732875868C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetActiveWatchersU3Eb__89_0_m7749DDD8EF11F649B04DB4A29F653523AF330BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass85_0_U3CCreateAnchorAsyncU3Eb__0_m02491106FF8B5C25C2DACEA67ACA39054C7A8D67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass92_0_U3CDeleteAnchorAsyncU3Eb__0_mE348BCD0A05AA7FEBC17B26CFAC0E0588B4CAB96_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7FA9B51149E1B8E0E1E881BD772720DB9604A570 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C, ____items_1)); }
	inline CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1* get__items_1() const { return ____items_1; }
	inline CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C_StaticFields, ____emptyArray_5)); }
	inline CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CloudSpatialAnchorWatcherU5BU5D_t6AEB289ED3AC9948938625927CAD6E0CB3506FA1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct ReadOnlyCollection_1_t2255307CB460E6EA65E2AD9D74D6EF05F100CA53  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2255307CB460E6EA65E2AD9D74D6EF05F100CA53, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2255307CB460E6EA65E2AD9D74D6EF05F100CA53, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.NativeLibrary
struct NativeLibrary_t8575596B2FDBF320BD0F3FA40BDAB135BEE4DA73  : public RuntimeObject
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers
struct NativeLibraryHelpers_t72A5B6201FEEA4288F5E42750E326D04CD7E7D3D  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c
struct U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_StaticFields
{
public:
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c::<>9
	U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher> Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c::<>9__89_0
	Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * ___U3CU3E9__89_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__89_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_StaticFields, ___U3CU3E9__89_0_1)); }
	inline Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * get_U3CU3E9__89_0_1() const { return ___U3CU3E9__89_0_1; }
	inline Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 ** get_address_of_U3CU3E9__89_0_1() { return &___U3CU3E9__89_0_1; }
	inline void set_U3CU3E9__89_0_1(Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * value)
	{
		___U3CU3E9__89_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__89_0_1), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass85_0
struct U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094  : public RuntimeObject
{
public:
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass85_0::<>4__this
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * ___U3CU3E4__this_0;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass85_0::anchor
	CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * ___anchor_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094, ___U3CU3E4__this_0)); }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_anchor_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094, ___anchor_1)); }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * get_anchor_1() const { return ___anchor_1; }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 ** get_address_of_anchor_1() { return &___anchor_1; }
	inline void set_anchor_1(CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * value)
	{
		___anchor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchor_1), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass92_0
struct U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206  : public RuntimeObject
{
public:
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass92_0::<>4__this
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * ___U3CU3E4__this_0;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass92_0::anchor
	CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * ___anchor_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206, ___U3CU3E4__this_0)); }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_anchor_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206, ___anchor_1)); }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * get_anchor_1() const { return ___anchor_1; }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 ** get_address_of_anchor_1() { return &___anchor_1; }
	inline void set_anchor_1(CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * value)
	{
		___anchor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchor_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE, ___m_task_0)); }
	inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D, ___m_task_2)); }
	inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs
struct AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor
struct CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession
struct CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::handle
	intptr_t ___handle_0;
	// System.UInt64 Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::cookie
	uint64_t ___cookie_1;
	// Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::_TokenRequired
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * ____TokenRequired_2;
	// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::_AnchorLocated
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * ____AnchorLocated_4;
	// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::_LocateAnchorsCompleted
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * ____LocateAnchorsCompleted_6;
	// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::_SessionUpdated
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * ____SessionUpdated_8;
	// Microsoft.Azure.SpatialAnchors.SessionErrorDelegate Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::_Error
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * ____Error_10;
	// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::_OnLogDebug
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * ____OnLogDebug_12;
	// Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::_UpdatedSensorFingerprintRequired
	UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * ____UpdatedSensorFingerprintRequired_14;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_cookie_1() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ___cookie_1)); }
	inline uint64_t get_cookie_1() const { return ___cookie_1; }
	inline uint64_t* get_address_of_cookie_1() { return &___cookie_1; }
	inline void set_cookie_1(uint64_t value)
	{
		___cookie_1 = value;
	}

	inline static int32_t get_offset_of__TokenRequired_2() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ____TokenRequired_2)); }
	inline TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * get__TokenRequired_2() const { return ____TokenRequired_2; }
	inline TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 ** get_address_of__TokenRequired_2() { return &____TokenRequired_2; }
	inline void set__TokenRequired_2(TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * value)
	{
		____TokenRequired_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TokenRequired_2), (void*)value);
	}

	inline static int32_t get_offset_of__AnchorLocated_4() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ____AnchorLocated_4)); }
	inline AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * get__AnchorLocated_4() const { return ____AnchorLocated_4; }
	inline AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 ** get_address_of__AnchorLocated_4() { return &____AnchorLocated_4; }
	inline void set__AnchorLocated_4(AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * value)
	{
		____AnchorLocated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AnchorLocated_4), (void*)value);
	}

	inline static int32_t get_offset_of__LocateAnchorsCompleted_6() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ____LocateAnchorsCompleted_6)); }
	inline LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * get__LocateAnchorsCompleted_6() const { return ____LocateAnchorsCompleted_6; }
	inline LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 ** get_address_of__LocateAnchorsCompleted_6() { return &____LocateAnchorsCompleted_6; }
	inline void set__LocateAnchorsCompleted_6(LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * value)
	{
		____LocateAnchorsCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____LocateAnchorsCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of__SessionUpdated_8() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ____SessionUpdated_8)); }
	inline SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * get__SessionUpdated_8() const { return ____SessionUpdated_8; }
	inline SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 ** get_address_of__SessionUpdated_8() { return &____SessionUpdated_8; }
	inline void set__SessionUpdated_8(SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * value)
	{
		____SessionUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SessionUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of__Error_10() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ____Error_10)); }
	inline SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * get__Error_10() const { return ____Error_10; }
	inline SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E ** get_address_of__Error_10() { return &____Error_10; }
	inline void set__Error_10(SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * value)
	{
		____Error_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Error_10), (void*)value);
	}

	inline static int32_t get_offset_of__OnLogDebug_12() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ____OnLogDebug_12)); }
	inline OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * get__OnLogDebug_12() const { return ____OnLogDebug_12; }
	inline OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB ** get_address_of__OnLogDebug_12() { return &____OnLogDebug_12; }
	inline void set__OnLogDebug_12(OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * value)
	{
		____OnLogDebug_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____OnLogDebug_12), (void*)value);
	}

	inline static int32_t get_offset_of__UpdatedSensorFingerprintRequired_14() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0, ____UpdatedSensorFingerprintRequired_14)); }
	inline UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * get__UpdatedSensorFingerprintRequired_14() const { return ____UpdatedSensorFingerprintRequired_14; }
	inline UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 ** get_address_of__UpdatedSensorFingerprintRequired_14() { return &____UpdatedSensorFingerprintRequired_14; }
	inline void set__UpdatedSensorFingerprintRequired_14(UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * value)
	{
		____UpdatedSensorFingerprintRequired_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UpdatedSensorFingerprintRequired_14), (void*)value);
	}
};

struct CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields
{
public:
	// Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::TokenRequiredStaticHandlerDelegate
	TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * ___TokenRequiredStaticHandlerDelegate_3;
	// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::AnchorLocatedStaticHandlerDelegate
	AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * ___AnchorLocatedStaticHandlerDelegate_5;
	// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::LocateAnchorsCompletedStaticHandlerDelegate
	LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * ___LocateAnchorsCompletedStaticHandlerDelegate_7;
	// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::SessionUpdatedStaticHandlerDelegate
	SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * ___SessionUpdatedStaticHandlerDelegate_9;
	// Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::ErrorStaticHandlerDelegate
	SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * ___ErrorStaticHandlerDelegate_11;
	// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::OnLogDebugStaticHandlerDelegate
	OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * ___OnLogDebugStaticHandlerDelegate_13;
	// Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::UpdatedSensorFingerprintRequiredStaticHandlerDelegate
	UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * ___UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15;

public:
	inline static int32_t get_offset_of_TokenRequiredStaticHandlerDelegate_3() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields, ___TokenRequiredStaticHandlerDelegate_3)); }
	inline TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * get_TokenRequiredStaticHandlerDelegate_3() const { return ___TokenRequiredStaticHandlerDelegate_3; }
	inline TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB ** get_address_of_TokenRequiredStaticHandlerDelegate_3() { return &___TokenRequiredStaticHandlerDelegate_3; }
	inline void set_TokenRequiredStaticHandlerDelegate_3(TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * value)
	{
		___TokenRequiredStaticHandlerDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TokenRequiredStaticHandlerDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_AnchorLocatedStaticHandlerDelegate_5() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields, ___AnchorLocatedStaticHandlerDelegate_5)); }
	inline AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * get_AnchorLocatedStaticHandlerDelegate_5() const { return ___AnchorLocatedStaticHandlerDelegate_5; }
	inline AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 ** get_address_of_AnchorLocatedStaticHandlerDelegate_5() { return &___AnchorLocatedStaticHandlerDelegate_5; }
	inline void set_AnchorLocatedStaticHandlerDelegate_5(AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * value)
	{
		___AnchorLocatedStaticHandlerDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnchorLocatedStaticHandlerDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_LocateAnchorsCompletedStaticHandlerDelegate_7() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields, ___LocateAnchorsCompletedStaticHandlerDelegate_7)); }
	inline LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * get_LocateAnchorsCompletedStaticHandlerDelegate_7() const { return ___LocateAnchorsCompletedStaticHandlerDelegate_7; }
	inline LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E ** get_address_of_LocateAnchorsCompletedStaticHandlerDelegate_7() { return &___LocateAnchorsCompletedStaticHandlerDelegate_7; }
	inline void set_LocateAnchorsCompletedStaticHandlerDelegate_7(LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * value)
	{
		___LocateAnchorsCompletedStaticHandlerDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocateAnchorsCompletedStaticHandlerDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_SessionUpdatedStaticHandlerDelegate_9() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields, ___SessionUpdatedStaticHandlerDelegate_9)); }
	inline SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * get_SessionUpdatedStaticHandlerDelegate_9() const { return ___SessionUpdatedStaticHandlerDelegate_9; }
	inline SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C ** get_address_of_SessionUpdatedStaticHandlerDelegate_9() { return &___SessionUpdatedStaticHandlerDelegate_9; }
	inline void set_SessionUpdatedStaticHandlerDelegate_9(SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * value)
	{
		___SessionUpdatedStaticHandlerDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionUpdatedStaticHandlerDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorStaticHandlerDelegate_11() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields, ___ErrorStaticHandlerDelegate_11)); }
	inline SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * get_ErrorStaticHandlerDelegate_11() const { return ___ErrorStaticHandlerDelegate_11; }
	inline SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B ** get_address_of_ErrorStaticHandlerDelegate_11() { return &___ErrorStaticHandlerDelegate_11; }
	inline void set_ErrorStaticHandlerDelegate_11(SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * value)
	{
		___ErrorStaticHandlerDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorStaticHandlerDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnLogDebugStaticHandlerDelegate_13() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields, ___OnLogDebugStaticHandlerDelegate_13)); }
	inline OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * get_OnLogDebugStaticHandlerDelegate_13() const { return ___OnLogDebugStaticHandlerDelegate_13; }
	inline OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 ** get_address_of_OnLogDebugStaticHandlerDelegate_13() { return &___OnLogDebugStaticHandlerDelegate_13; }
	inline void set_OnLogDebugStaticHandlerDelegate_13(OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * value)
	{
		___OnLogDebugStaticHandlerDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLogDebugStaticHandlerDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields, ___UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15)); }
	inline UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * get_UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15() const { return ___UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15; }
	inline UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 ** get_address_of_UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15() { return &___UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15; }
	inline void set_UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15(UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * value)
	{
		___UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral
struct CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher
struct CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialErrorCode
struct CloudSpatialErrorCode_tD6728233658630974C036B083054FE23C4F7C17D 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.CloudSpatialErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloudSpatialErrorCode_tD6728233658630974C036B083054FE23C4F7C17D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Microsoft.Azure.SpatialAnchors.LocateAnchorStatus
struct LocateAnchorStatus_t0D35003BCED53ACDC9501A90E60B7100AC7FF990 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.LocateAnchorStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocateAnchorStatus_t0D35003BCED53ACDC9501A90E60B7100AC7FF990, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs
struct LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs
struct OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs
struct SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SessionConfiguration
struct SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.SessionConfiguration::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs
struct SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SessionLogLevel
struct SessionLogLevel_tDFF9FB18403205E23C46A5A03C1B68F95A1ABC7F 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.SessionLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionLogLevel_tDFF9FB18403205E23C46A5A03C1B68F95A1ABC7F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SessionStatus
struct SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.SessionStatus::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs
struct SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs
struct TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.status
struct status_tEA46B2A1C945DDD1154E277136E3088E3A9C576B 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(status_tEA46B2A1C945DDD1154E277136E3088E3A9C576B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA, ___m_result_40)); }
	inline SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * get_m_result_40() const { return ___m_result_40; }
	inline SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Microsoft.Azure.SpatialAnchors.CloudSpatialException
struct CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4  : public Exception_t
{
public:
	// Microsoft.Azure.SpatialAnchors.CloudSpatialErrorCode Microsoft.Azure.SpatialAnchors.CloudSpatialException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;
	// System.String Microsoft.Azure.SpatialAnchors.CloudSpatialException::<RequestCorrelationVector>k__BackingField
	String_t* ___U3CRequestCorrelationVectorU3Ek__BackingField_18;
	// System.String Microsoft.Azure.SpatialAnchors.CloudSpatialException::<ResponseCorrelationVector>k__BackingField
	String_t* ___U3CResponseCorrelationVectorU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CRequestCorrelationVectorU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4, ___U3CRequestCorrelationVectorU3Ek__BackingField_18)); }
	inline String_t* get_U3CRequestCorrelationVectorU3Ek__BackingField_18() const { return ___U3CRequestCorrelationVectorU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CRequestCorrelationVectorU3Ek__BackingField_18() { return &___U3CRequestCorrelationVectorU3Ek__BackingField_18; }
	inline void set_U3CRequestCorrelationVectorU3Ek__BackingField_18(String_t* value)
	{
		___U3CRequestCorrelationVectorU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestCorrelationVectorU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseCorrelationVectorU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4, ___U3CResponseCorrelationVectorU3Ek__BackingField_19)); }
	inline String_t* get_U3CResponseCorrelationVectorU3Ek__BackingField_19() const { return ___U3CResponseCorrelationVectorU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CResponseCorrelationVectorU3Ek__BackingField_19() { return &___U3CResponseCorrelationVectorU3Ek__BackingField_19; }
	inline void set_U3CResponseCorrelationVectorU3Ek__BackingField_19(String_t* value)
	{
		___U3CResponseCorrelationVectorU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseCorrelationVectorU3Ek__BackingField_19), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93
struct U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus> Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93::<>t__builder
	AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93::<>4__this
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.SpatialAnchors.SessionStatus> Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93::<>u__1
	TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB, ___U3CU3E4__this_2)); }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Func`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IntPtr,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>
struct Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate
struct AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative
struct AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate
struct LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative
struct LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate
struct OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative
struct OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116  : public MulticastDelegate_t
{
public:

public:
};


// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.SessionErrorDelegate
struct SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative
struct SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate
struct SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative
struct SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate
struct TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative
struct TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate
struct UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative
struct UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85
struct U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::<>4__this
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * ___U3CU3E4__this_2;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::anchor
	CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * ___anchor_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736, ___U3CU3E4__this_2)); }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_anchor_3() { return static_cast<int32_t>(offsetof(U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736, ___anchor_3)); }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * get_anchor_3() const { return ___anchor_3; }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 ** get_address_of_anchor_3() { return &___anchor_3; }
	inline void set_anchor_3(CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * value)
	{
		___anchor_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchor_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92
struct U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::<>4__this
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * ___U3CU3E4__this_2;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::anchor
	CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * ___anchor_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763, ___U3CU3E4__this_2)); }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_anchor_3() { return static_cast<int32_t>(offsetof(U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763, ___anchor_3)); }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * get_anchor_3() const { return ___anchor_3; }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 ** get_address_of_anchor_3() { return &___anchor_3; }
	inline void set_anchor_3(CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * value)
	{
		___anchor_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchor_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Microsoft.Azure.SpatialAnchors.CookieTracker`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieTracker_1_Add_m6028EA15B5B742A6D71FBD8AC21F120081A5F1DE_gshared (RuntimeObject * ___instance0, const RuntimeMethod* method);
// T Microsoft.Azure.SpatialAnchors.CookieTracker`1<System.Object>::Lookup(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CookieTracker_1_Lookup_mFD66DA1559B5ACB4C7DDFE0D38E2F46CD6DFB0E2_gshared (uint64_t ___cookie0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m31F885388C8DDB9D9708DE5F2A42C1E23468FE73_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * ___stateMachine0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.IntPtr>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisIntPtr_t_m456F1B8EE2356E3FEB83646C6005CD3994F72085_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Func`2<System.IntPtr,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m01C83B45985F21ACDD85311314C3751FEEB5F9C5_gshared (Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.IntPtr,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIntPtr_t_TisRuntimeObject_m5401B883B68D0DE8291C7FB5E93E0D5A309557A3_gshared (RuntimeObject* ___source0, Func_2_tBAE19E72D7DA6A7039B9076A73522B08CCF10BAC * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * List_1_AsReadOnly_m2A562BCF70602A773C266FE3B151E1A56D884F71_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_m99B8D6D02BB6328D3DF21313ECC2E65163FD7A44_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_mCFBEF70FAF21AE678F84ADF28525EA43053249B6_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m4A5FE81EC2DEEF61B19C369A32AF413A25D3E6F5_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_mB4B1AC2DAEF72DEFF81B82CD7910755599DA174B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___function0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_m48D7469595FCFB5564D865686FF2A525BE74EF0E_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_anchor_located_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_anchor_located_event_args_addref_m1A1B2A5A206D1D9DF2D749A83324AB4D8CD0C78E (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_anchor_located_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_anchor_located_event_args_release_m9F2224B74E09A7348E9CD18047B434696F62D6C1 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.SpatialAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_anchor_located_event_args_get_anchor(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_anchor_located_event_args_get_anchor_mF587C361DDE6491C9262FDC045466F2C4B3CEB08 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchor__ctor_m0DC069CF367E9E6CFF72E48B7CCD0F7EFCD2E741 (CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_anchor_located_event_args_get_status(System.IntPtr,Microsoft.Azure.SpatialAnchors.LocateAnchorStatus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_anchor_located_event_args_get_status_mB929C4F71C8BD7402645FA8811563B42BD0631F1 (intptr_t ___handle0, int32_t* ___result1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_addref_mAA61ED8EEC7C8851DE28D92A7C87839CEC77CBB8 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_create(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_create_mA2E7357D170858F0CA2DC0C1A8F1C7A4D2B8249B (intptr_t* ___instance0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_release_mA341AFD5AFE95F00D148501319A31777B6C24F7E (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_get_local_anchor(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_get_local_anchor_m971B9EB28F717FCE17B769CE7B99EB1974C0ED7B (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_set_local_anchor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_set_local_anchor_m38C6EDC63DBBCC7FC184B990E0E61C8E49536A42 (intptr_t ___handle0, intptr_t ___value1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::TokenRequiredStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_TokenRequiredStaticHandler_m246C34045315E93DEA6E7323F880A2D5797AB7F2 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::AnchorLocatedStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_AnchorLocatedStaticHandler_m64E9E6D3AB036F0C861FE8ADCE0533E48FFA1B90 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::LocateAnchorsCompletedStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_LocateAnchorsCompletedStaticHandler_mC912801985FAD887254411C6FC612C6638155C7F (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::SessionUpdatedStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_SessionUpdatedStaticHandler_m644C88E4D56677AA92E417A8A997EB699E9011C4 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::ErrorStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_ErrorStaticHandler_m6BB2FBBE0E72FE3F9FC434B8E95FE0A4851E8302 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::OnLogDebugStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_OnLogDebugStaticHandler_m90532737252CBC09C98D17C3457FF770BB1ACCFE (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::UpdatedSensorFingerprintRequiredStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_UpdatedSensorFingerprintRequiredStaticHandler_m76F871ECC8D0D0A5E1E3A248A5A2CA145CBE8A16 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_create(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_create_m0EC7835DDD803074362737274563D23F73AD9849 (intptr_t* ___instance0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CookieTracker`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>::Add(T)
inline void CookieTracker_1_Add_m95BE29557D7C45367CB7F5F2D22482AA73885490 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * ___instance0, const RuntimeMethod* method)
{
	((  void (*) (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 *, const RuntimeMethod*))CookieTracker_1_Add_m6028EA15B5B742A6D71FBD8AC21F120081A5F1DE_gshared)(___instance0, method);
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_release_mD6225307157954288C2C2DE7D2FECE954CBBE9E3 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_dispose_m5BF767873D166ACABA577502E7F6126AEA7BDBD5 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_get_configuration(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_get_configuration_mD4F75ABDE7143D1B014F9A1FDBBC12BC628EDA12 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SessionConfiguration::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionConfiguration__ctor_m23C0BED787081216B1502566B1F1052D47B4E4EF (SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_log_level(System.IntPtr,Microsoft.Azure.SpatialAnchors.SessionLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_log_level_mAE60DD06126A4227355ED33F6404D9D8B8E7412C (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// T Microsoft.Azure.SpatialAnchors.CookieTracker`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>::Lookup(System.UInt64)
inline CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9 (uint64_t ___cookie0, const RuntimeMethod* method)
{
	return ((  CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * (*) (uint64_t, const RuntimeMethod*))CookieTracker_1_Lookup_mFD66DA1559B5ACB4C7DDFE0D38E2F46CD6DFB0E2_gshared)(___cookie0, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredEventArgs__ctor_mFF207B362C02DFBC435AD5FDD0F569670CE7E32C (TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredDelegate_Invoke_mE70B72E5703A61C49DE5F08704A82D86200E26EA (TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * __this, RuntimeObject * ___sender0, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__TokenRequired(Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__TokenRequired_mF7C35416D7CA993E33254299E14B0CFA6F3AA2E5 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * ___value0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_token_required(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_token_required_mD27FC1DFA945450B3A0A517C3407A4147A9189A8 (intptr_t ___handle0, uint64_t ___value1, TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * ___value_fn2, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__TokenRequired(Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__TokenRequired_m0524602D424E40C033ECF32016E93A2BAB774E1C (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedEventArgs__ctor_m750F4EA5F8CEDAA86F7BB2AD5A73C35C5752D318 (AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedDelegate_Invoke_m8A0DB282A73B6BB788D874D669C7255CB82808A6 (AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * __this, RuntimeObject * ___sender0, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__AnchorLocated(Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__AnchorLocated_m02239EE44F2C25763F2AFE1C1EF2F733DED7ACCE (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * ___value0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_anchor_located(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_anchor_located_mF6C2A4178C147CB65E47E51E2644E093CA2EADAA (intptr_t ___handle0, uint64_t ___value1, AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * ___value_fn2, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__AnchorLocated(Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__AnchorLocated_m10F0CD396931B0DE920AC753F46C166347E2A962 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedEventArgs__ctor_m8C0FDEAC2D9556019F93D342982BA762A56E57BF (LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedDelegate_Invoke_m45E6469BEBF0FC6791416BC11DD8616B34E3A36E (LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * __this, RuntimeObject * ___sender0, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__LocateAnchorsCompleted(Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__LocateAnchorsCompleted_m0600C1FD580E2957CB3DCC144352173AAF091ADB (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * ___value0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_locate_anchors_completed(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_locate_anchors_completed_m47A449E6BE690BACC175A914E5DD424C9AC189BB (intptr_t ___handle0, uint64_t ___value1, LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * ___value_fn2, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__LocateAnchorsCompleted(Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__LocateAnchorsCompleted_m4729E1AAEF2C31B2865525E0ADB7BFFF6EF87ED7 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedEventArgs__ctor_m0A958EFBC1AD297AEC54308BA9E56BA62E2A9946 (SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedDelegate_Invoke_mD09A39FED81D43A0519542EDC97219E917822833 (SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * __this, RuntimeObject * ___sender0, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__SessionUpdated(Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__SessionUpdated_m424E69AB0158DB65B9129679F9B509ED3757BF0E (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * ___value0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_session_updated(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_session_updated_m20B71EFC6781C3C91B228E9253BBBA1949562193 (intptr_t ___handle0, uint64_t ___value1, SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * ___value_fn2, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__SessionUpdated(Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__SessionUpdated_m7F5D7DC5630D8F064A8CAA3D40F16E4208B7536D (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorEventArgs__ctor_m5F84EF10D18CD4F263AF8608E5CEEAC235847E44 (SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorDelegate_Invoke_m109DE1741BC17627558DD61BB1F7424A739CA041 (SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * __this, RuntimeObject * ___sender0, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__Error(Microsoft.Azure.SpatialAnchors.SessionErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__Error_mE8424F0E08E6B62573E8B5676049594637183FDB (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * ___value0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_error(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_error_m498EE00F91BB5FE9706C510BE09F09C5015E8E2D (intptr_t ___handle0, uint64_t ___value1, SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * ___value_fn2, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__Error(Microsoft.Azure.SpatialAnchors.SessionErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__Error_m241EF6710B7088DEE496CFAD6C4FC2832DCE3EEE (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugEventArgs__ctor_m5E9C80CEB6D82F6380568FD5E70FB47D2C0C0755 (OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugDelegate_Invoke_mC7884BE747188FC9358E41ED44E2E1514D0859CA (OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * __this, RuntimeObject * ___sender0, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * ___args1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__OnLogDebug(Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__OnLogDebug_mCB57E95A8D5D2FE0DC2CB35EF62F6C3657BA1A02 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * ___value0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_on_log_debug(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_on_log_debug_mF97EE94486E1DE01DB3C6E9654D912B8FA5B4D2C (intptr_t ___handle0, uint64_t ___value1, OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * ___value_fn2, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__OnLogDebug(Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__OnLogDebug_m623CE52E62450DA91FCB2844AD5C34925CB7454F (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorFingerprintEventArgs__ctor_m2AA3FD6469E09C81292528D7B6A6A768F7BD29FB (SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedSensorFingerprintRequiredDelegate_Invoke_mAAE63D71A2500853220F5CCAC915D4CA6A137C49 (UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * __this, RuntimeObject * ___sender0, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * ___args1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m31F885388C8DDB9D9708DE5F2A42C1E23468FE73 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m31F885388C8DDB9D9708DE5F2A42C1E23468FE73_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_get_active_watchers_count(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_get_active_watchers_count_m61F83A8CB53A5CCE226E7BE4C5665FFF8754709D (intptr_t ___handle0, int32_t* ___result_count1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_get_active_watchers_items(System.IntPtr,System.IntPtr[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_get_active_watchers_items_mECFF73216E4D8B49554C00E362DC5E565D949DA8 (intptr_t ___handle0, IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___result_array1, int32_t* ___result_count2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.IntPtr>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisIntPtr_t_m456F1B8EE2356E3FEB83646C6005CD3994F72085 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisIntPtr_t_m456F1B8EE2356E3FEB83646C6005CD3994F72085_gshared)(___source0, ___count1, method);
}
// System.Void System.Func`2<System.IntPtr,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0B5314AB2487979AA54A12812798199E455E9FDC (Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m01C83B45985F21ACDD85311314C3751FEEB5F9C5_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.IntPtr,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisIntPtr_t_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mE135557D31178A8AF99090A2B0F01C5C74D2835C (RuntimeObject* ___source0, Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 *, const RuntimeMethod*))Enumerable_Select_TisIntPtr_t_TisRuntimeObject_m5401B883B68D0DE8291C7FB5E93E0D5A309557A3_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C * Enumerable_ToList_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mC1411A606A08E260E4DBF9F4BDC3A7CAC23717C7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher>::AsReadOnly()
inline ReadOnlyCollection_1_t2255307CB460E6EA65E2AD9D74D6EF05F100CA53 * List_1_AsReadOnly_m75521C360D663C786FAB301E47742E4C930B5319 (List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t2255307CB460E6EA65E2AD9D74D6EF05F100CA53 * (*) (List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C *, const RuntimeMethod*))List_1_AsReadOnly_m2A562BCF70602A773C266FE3B151E1A56D884F71_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_m99B8D6D02BB6328D3DF21313ECC2E65163FD7A44 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_m99B8D6D02BB6328D3DF21313ECC2E65163FD7A44_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::Create()
inline AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D  AsyncTaskMethodBuilder_1_Create_m5C5097708E09EB8ADBA7E1B380E6720705B8F4FC (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::Start<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_mB55678FE2A059452ED95AA01BEB1A59F366EEB60 (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * __this, U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *, U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_mCFBEF70FAF21AE678F84ADF28525EA43053249B6_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::get_Task()
inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * AsyncTaskMethodBuilder_1_get_Task_mC9892D8306B15A4FD28F300B258E16B0E0945543 (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * (*) (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_start(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_start_m640F0FB4D09CB906F924CA61BE019403FC6D714A (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_stop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_stop_mF2C3A186368F12DE3F0DBC11039861EF21EDE42F (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_reset_mE9415AF3E0D384B5764290F7BC5B4A81772D0817 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredDelegateNative__ctor_m66B72CA43B3AB3D1F36C30DFB00D58C375C4B3D7 (TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedDelegateNative__ctor_m7E9167A0243288BB650728239F07F39EBAD52D9E (AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedDelegateNative__ctor_m698B0066FA35860DB625CC20596378503270A60C (LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedDelegateNative__ctor_mAA9609436B9A6331F3769870B3CBEB70717A3214 (SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorDelegateNative__ctor_m27FB558B34FC472D3420AFD6D0174888B5BD80B9 (SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugDelegateNative__ctor_mA52D62F3C52926DEB9D37507C044FE1428915FC4 (OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedSensorFingerprintRequiredDelegateNative__ctor_m08E022D1F6D5699AEE8FB305E86C120DD315B74B (UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_get_session_status_async(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_get_session_status_async_m234A58335F35EA4A16F40B070D49368E5CFB758E (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.SessionStatus::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStatus__ctor_m4856914EB82E254F0F0EA2B05D304583A06E317B (SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_deferral_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_addref_m5C7378886E4B244C30798A36E33A021772B2ECE5 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_deferral_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_release_m80DB30D14470094BFB696BD64839D607E0B2A373 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_deferral_complete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_complete_m5DBA1859C36664A244D1EAC42559F9CFB34A1C7B (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_watcher_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_watcher_addref_m04C9D5AC20AF82E921A7B3FFACD503ACB2999ECA (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_watcher_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_watcher_release_m0449E95E3DD8D48F3AE9AEB5F7898D358B9D9EFD (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_locate_anchors_completed_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_locate_anchors_completed_event_args_addref_mAC0F63DD9E10A9EA43CB944B78472DBD72FEDA4A (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_locate_anchors_completed_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_locate_anchors_completed_event_args_release_m2896EC66FB3F768099A1733A6B993BFC04FFA74A (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_get_error_details_m6218D41A86CF93FA55C65C363F6E08FB61686983 (intptr_t ___handle0, String_t** ___result_message1, String_t** ___result_requestCorrelationVector2, String_t** ___result_responseCorrelationVector3, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m7A10A40E5051AF0288392AAEF504C394A6C5FAD2 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m0EC42CEED5BA7A842158FFADCF05BBACF33B700D (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialException::.ctor(Microsoft.Azure.SpatialAnchors.CloudSpatialErrorCode,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * __this, int32_t ___code0, String_t* ___message1, String_t* ___requestCorrelationVector2, String_t* ___responseCorrelationVector3, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_on_log_debug_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_on_log_debug_event_args_addref_mDA7B022250AA87F35C567035AEB1856AEEF37852 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_on_log_debug_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_on_log_debug_event_args_release_m1E8E7A5D40A033142A957D3D460C15DF0ED46AEF (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_sensor_fingerprint_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_sensor_fingerprint_event_args_addref_mAFEB2522453E2F91360539D68E35A2BE4E8C58FC (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_sensor_fingerprint_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_sensor_fingerprint_event_args_release_m7CDE3F001C350603A417896448115A36EE8ABB6A (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_addref_m2184B84335B7AF9DD6B542316BB083EA7AA01DE0 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_release_m90814278C4FA09A25F8C830461EAC2DD426E414D (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_set_account_domain(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_set_account_domain_mC4EAD680F9BA7397468E7000EF35DFBB13015E67 (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_set_account_id(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_set_account_id_mC3041094B2413492710FD52222B19DDBC23E0C9F (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_set_account_key(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_set_account_key_m8B850EA75C1D1F2D6ADDBD58794B918A2CB3BA28 (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_error_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_error_event_args_addref_mDCA6E2BCC841DEC06B6A5F99A2AB513505CCDD2E (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_error_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_error_event_args_release_mE7E5478048CEB32AA2BB398868DBC8E6D4B0CEFB (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_status_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_status_addref_mA2A5DC88FAC358C9D7FE60F51D7B31244BE5D619 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_status_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_status_release_m25D664F58280521504183619CB66FB6AE91058F4 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_status_get_recommended_for_create_progress(System.IntPtr,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_status_get_recommended_for_create_progress_m010CEBE78DAA16636F3F2B982B99928142ACAE1D (intptr_t ___handle0, float* ___result1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_updated_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_updated_event_args_addref_mE2A23C528D506CC6BFF999FC06569F5A231CA202 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_updated_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_updated_event_args_release_m039699EC5BB415D95D668C432EBDD48D2C28E849 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_updated_event_args_get_status(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_updated_event_args_get_status_m27F4065283F1BC5962A4225A4899C76BAD7FBCE5 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_token_required_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_token_required_event_args_addref_m4E05639E6BD5A6D29162D2308D1A02835B7D3941 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_token_required_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_token_required_event_args_release_m86A9288AED53CDAA1AEA893BCC368DD174F18BA8 (intptr_t ___handle0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_token_required_event_args_set_authentication_token(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_token_required_event_args_set_authentication_token_mDDC8FC85C8FA4C0AADEE6AEF4B70750722BB9E22 (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_token_required_event_args_get_deferral(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_token_required_event_args_get_deferral_mFD4D0BF54F572A6091933D141247D6AAC8F47D80 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSessionDeferral__ctor_mCFEE4DEE621C9ABD900772C31CA50BA51A684C5D (CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9E5DEE10A5309264E45343D3EDE35AAA866267BD (U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorWatcher__ctor_mF036166F758F5315D865BF3A9738AD07DFB15845 (CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_create_anchor_async(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_create_anchor_async_m82DDA458D573CC380DC09894A281C9E00E1D2294 (intptr_t ___handle0, intptr_t ___anchor1, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_delete_anchor_async(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_delete_anchor_async_m887BFEF2657B3EBC3593DC3263BF21AA01079A94 (intptr_t ___handle0, intptr_t ___anchor1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass85_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass85_0__ctor_m65D2341484EC1BF072EB790EC0CF04FD288A0C1A (U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m4A5FE81EC2DEEF61B19C369A32AF413A25D3E6F5 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m4A5FE81EC2DEEF61B19C369A32AF413A25D3E6F5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAnchorAsyncU3Ed__85_MoveNext_mBE2ECD0DC023222E17A5F87F970003217E99147A (U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAnchorAsyncU3Ed__85_SetStateMachine_m6A8258FB51AA8A23077FFD9644F7AD57D2F69E1F (U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass92_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass92_0__ctor_m3453BE032A106C07D81BBEF30C5051352A8C2B2C (U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_mB4B1AC2DAEF72DEFF81B82CD7910755599DA174B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_mB4B1AC2DAEF72DEFF81B82CD7910755599DA174B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAnchorAsyncU3Ed__92_MoveNext_mC061679BDC73187CED416303B1DD1DD073AC6E37 (U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAnchorAsyncU3Ed__92_SetStateMachine_mBCDF98A605639907A6006B0C95FE0ABA86E99CB0 (U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m70CD8B46F1B146410ED8773C1FF4C882327E9BCB (Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<Microsoft.Azure.SpatialAnchors.SessionStatus>(System.Func`1<!!0>)
inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * Task_Run_TisSessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_m95667516390D6C8D9B739BFC8D0AD732875868C1 (Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * (*) (Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC *, const RuntimeMethod*))Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared)(___function0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::GetAwaiter()
inline TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  Task_1_GetAwaiter_m7C1DB4BC3271066432B742144E9C2A0EFFF16B6E (Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  (*) (Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m319F1AF0C68450C7E35A72FA0855A242442EC268 (TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.SpatialAnchors.SessionStatus>,Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_m7C684BC4E4A025992D735D6C54A9D3BB3988F1A1 (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * __this, TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE * ___awaiter0, U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *, TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE *, U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_m48D7469595FCFB5564D865686FF2A525BE74EF0E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::GetResult()
inline SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * TaskAwaiter_1_GetResult_m9004D584DCBCC105C798D2E5FC79DCD752CE8F33 (TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE * __this, const RuntimeMethod* method)
{
	return ((  SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * (*) (TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF8D42ED09B03E8A714020A09EB03891407A125AB (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m193317B84A50FEED9C15BA9D6241A51272F28530 (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * __this, SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *, SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionStatusAsyncU3Ed__93_MoveNext_mFE0DE46720E8F2E2FAE82AC4E9B1DE1C35BAB098 (U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.Azure.SpatialAnchors.SessionStatus>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m278873A9D9E0508E740C59A19A6BD44BA60FC61F (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionStatusAsyncU3Ed__93_SetStateMachine_m24D5E6F079F9E58C5374F978B30F9529430FE2BE (U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_locate_anchors_completed_event_args_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_locate_anchors_completed_event_args_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_watcher_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_watcher_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_anchor_located_event_args_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_anchor_located_event_args_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_anchor_located_event_args_get_anchor(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_create(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_get_local_anchor(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_set_local_anchor(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_anchor_located_event_args_get_status(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_configuration_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_configuration_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_configuration_set_account_domain_wide(intptr_t, Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_configuration_set_account_id_wide(intptr_t, Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_configuration_set_account_key_wide(intptr_t, Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_create(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_get_configuration(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_set_log_level(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_set_token_required(intptr_t, uint64_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_token_required_event_args_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_token_required_event_args_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_token_required_event_args_set_authentication_token_wide(intptr_t, Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_token_required_event_args_get_deferral(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_deferral_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_deferral_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_deferral_complete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_set_anchor_located(intptr_t, uint64_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_set_locate_anchors_completed(intptr_t, uint64_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_set_session_updated(intptr_t, uint64_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_updated_event_args_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_updated_event_args_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_updated_event_args_get_status(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_status_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_status_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_status_get_recommended_for_create_progress(intptr_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_set_error(intptr_t, uint64_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_error_event_args_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_session_error_event_args_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_set_on_log_debug(intptr_t, uint64_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_on_log_debug_event_args_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_on_log_debug_event_args_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_sensor_fingerprint_event_args_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_sensor_fingerprint_event_args_addref(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_dispose(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_create_anchor_async(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_get_active_watchers_count(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_get_active_watchers_items(intptr_t, intptr_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_delete_anchor_async(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_get_session_status_async(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_start(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_stop(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_cloud_spatial_anchor_session_reset(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ssc_get_error_details_wide(intptr_t, Il2CppChar**, Il2CppChar**, Il2CppChar**);
#endif
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
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedDelegate__ctor_m8C4AC61EDFF76908A01EFE6405B2ED95DC8EA9CD (AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedDelegate_Invoke_m8A0DB282A73B6BB788D874D669C7255CB82808A6 (AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * __this, RuntimeObject * ___sender0, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate::BeginInvoke(System.Object,Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnchorLocatedDelegate_BeginInvoke_mEACA363C536574160933DFC7512CC98523AF62DD (AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * __this, RuntimeObject * ___sender0, AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedDelegate_EndInvoke_m8A680BC007AA0ECFA3C3665D060FDF263095F618 (AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 (AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint64_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___cookie0, ___args1);

}
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedDelegateNative__ctor_m7E9167A0243288BB650728239F07F39EBAD52D9E (AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative::Invoke(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedDelegateNative_Invoke_mE1AA829D13BB0306B10654427BDF662AB904ED4A (AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cookie0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
					else
						GenericVirtActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cookie0, ___args1);
					else
						VirtActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cookie0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnchorLocatedDelegateNative_BeginInvoke_mC0DAB4DA13023845DDE8AE109686395BCBEE7F98 (AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * __this, uint64_t ___cookie0, intptr_t ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___cookie0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedDelegateNative_EndInvoke_m195CBB71DA7FCB21627344F29D717EE1D4BCE84A (AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedEventArgs__ctor_m750F4EA5F8CEDAA86F7BB2AD5A73C35C5752D318 (AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal AnchorLocatedEventArgs(IntPtr ahandle, bool transfer)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_1((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_anchor_located_event_args_addref_m1A1B2A5A206D1D9DF2D749A83324AB4D8CD0C78E((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorLocatedEventArgs_Finalize_m6050660C34E80E5E6DFD5F46BB6C56AB7C3D9A2F (AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_release(this.handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_anchor_located_event_args_release_m9F2224B74E09A7348E9CD18047B434696F62D6C1((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_1((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs::get_Anchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * AnchorLocatedEventArgs_get_Anchor_mAB864BDB250E4DE53421B554AAA49DF0C910B3A1 (AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_get_anchor(this.handle, out result_handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_anchor_located_event_args_get_anchor_mF587C361DDE6491C9262FDC045466F2C4B3CEB08((intptr_t)L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor(result_handle, transfer:true) : null;
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		return (CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 *)NULL;
	}

IL_0027:
	{
		intptr_t L_5 = V_0;
		CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_6 = (CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 *)il2cpp_codegen_object_new(CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70_il2cpp_TypeInfo_var);
		CloudSpatialAnchor__ctor_m0DC069CF367E9E6CFF72E48B7CCD0F7EFCD2E741(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
		// return result_object;
		return L_6;
	}
}
// Microsoft.Azure.SpatialAnchors.LocateAnchorStatus Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnchorLocatedEventArgs_get_Status_m0DA0C633043432F0E495B0B43908C8B020AB4FED (AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_get_status(this.handle, out result));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_anchor_located_event_args_get_status_mB929C4F71C8BD7402645FA8811563B42BD0631F1((intptr_t)L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// return result;
		int32_t L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchor__ctor_m0DC069CF367E9E6CFF72E48B7CCD0F7EFCD2E741 (CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	{
		// internal CloudSpatialAnchor(IntPtr ahandle, bool transfer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_0((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_cloud_spatial_anchor_addref_mAA61ED8EEC7C8851DE28D92A7C87839CEC77CBB8((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchor__ctor_m8F7802395616D2711E640667BDA2245CE18BB201 (CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public CloudSpatialAnchor()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_create(out this.handle));
		intptr_t* L_0 = __this->get_address_of_handle_0();
		int32_t L_1;
		L_1 = NativeLibrary_ssc_cloud_spatial_anchor_create_mA2E7357D170858F0CA2DC0C1A8F1C7A4D2B8249B((intptr_t*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
		intptr_t L_2 = __this->get_handle_0();
		int32_t L_3 = V_0;
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchor_Finalize_m72837FC8AEB7BAEBAF232739944D2A3F3217E303 (CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_release(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_release_mA341AFD5AFE95F00D148501319A31777B6C24F7E((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_0((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.IntPtr Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::get_LocalAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CloudSpatialAnchor_get_LocalAnchor_m7897941BC507F239EEE7DF8D0054642B9036CE1A (CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_get_local_anchor(this.handle, out result));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_get_local_anchor_m971B9EB28F717FCE17B769CE7B99EB1974C0ED7B((intptr_t)L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// return result;
		intptr_t L_3 = V_0;
		return (intptr_t)L_3;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::set_LocalAnchor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchor_set_LocalAnchor_m4C7226CA2D45E31A4286B4D00B986BD7E036AB15 (CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_set_local_anchor(this.handle, value));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		intptr_t L_2 = ___value0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_cloud_spatial_anchor_set_local_anchor_m38C6EDC63DBBCC7FC184B990E0E61C8E49536A42((intptr_t)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_CloudSpatialAnchorSession_TokenRequiredStaticHandler_m246C34045315E93DEA6E7323F880A2D5797AB7F2(uint64_t ___cookie0, intptr_t ___args1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	CloudSpatialAnchorSession_TokenRequiredStaticHandler_m246C34045315E93DEA6E7323F880A2D5797AB7F2(___cookie0, ___args1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_CloudSpatialAnchorSession_AnchorLocatedStaticHandler_m64E9E6D3AB036F0C861FE8ADCE0533E48FFA1B90(uint64_t ___cookie0, intptr_t ___args1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	CloudSpatialAnchorSession_AnchorLocatedStaticHandler_m64E9E6D3AB036F0C861FE8ADCE0533E48FFA1B90(___cookie0, ___args1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_CloudSpatialAnchorSession_LocateAnchorsCompletedStaticHandler_mC912801985FAD887254411C6FC612C6638155C7F(uint64_t ___cookie0, intptr_t ___args1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	CloudSpatialAnchorSession_LocateAnchorsCompletedStaticHandler_mC912801985FAD887254411C6FC612C6638155C7F(___cookie0, ___args1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_CloudSpatialAnchorSession_SessionUpdatedStaticHandler_m644C88E4D56677AA92E417A8A997EB699E9011C4(uint64_t ___cookie0, intptr_t ___args1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	CloudSpatialAnchorSession_SessionUpdatedStaticHandler_m644C88E4D56677AA92E417A8A997EB699E9011C4(___cookie0, ___args1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_CloudSpatialAnchorSession_ErrorStaticHandler_m6BB2FBBE0E72FE3F9FC434B8E95FE0A4851E8302(uint64_t ___cookie0, intptr_t ___args1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	CloudSpatialAnchorSession_ErrorStaticHandler_m6BB2FBBE0E72FE3F9FC434B8E95FE0A4851E8302(___cookie0, ___args1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_CloudSpatialAnchorSession_OnLogDebugStaticHandler_m90532737252CBC09C98D17C3457FF770BB1ACCFE(uint64_t ___cookie0, intptr_t ___args1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	CloudSpatialAnchorSession_OnLogDebugStaticHandler_m90532737252CBC09C98D17C3457FF770BB1ACCFE(___cookie0, ___args1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_CloudSpatialAnchorSession_UpdatedSensorFingerprintRequiredStaticHandler_m76F871ECC8D0D0A5E1E3A248A5A2CA145CBE8A16(uint64_t ___cookie0, intptr_t ___args1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	CloudSpatialAnchorSession_UpdatedSensorFingerprintRequiredStaticHandler_m76F871ECC8D0D0A5E1E3A248A5A2CA145CBE8A16(___cookie0, ___args1, NULL);

}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession__ctor_m2B6D9AE804E8B4715AA86245889F934B953AC786 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_Add_m95BE29557D7C45367CB7F5F2D22482AA73885490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public CloudSpatialAnchorSession()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_create(out this.handle));
		intptr_t* L_0 = __this->get_address_of_handle_0();
		int32_t L_1;
		L_1 = NativeLibrary_ssc_cloud_spatial_anchor_session_create_m0EC7835DDD803074362737274563D23F73AD9849((intptr_t*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
		intptr_t L_2 = __this->get_handle_0();
		int32_t L_3 = V_0;
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_2, L_3, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Add(this);
		IL2CPP_RUNTIME_CLASS_INIT(CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		CookieTracker_1_Add_m95BE29557D7C45367CB7F5F2D22482AA73885490(__this, /*hidden argument*/CookieTracker_1_Add_m95BE29557D7C45367CB7F5F2D22482AA73885490_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_Finalize_m99DFFDF3199C5C130998894D214B9D19B6512D1A (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.ssc_cloud_spatial_anchor_session_release(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_release_mD6225307157954288C2C2DE7D2FECE954CBBE9E3((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x1F, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_Dispose_mEE5D01EC471CB6CCA1EA352F31E7D1EDF7CA0653 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	{
		// NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.ssc_cloud_spatial_anchor_session_dispose (this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_dispose_m5BF767873D166ACABA577502E7F6126AEA7BDBD5((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.Azure.SpatialAnchors.SessionConfiguration Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 * CloudSpatialAnchorSession_get_Configuration_mC33F7DAF704605F9EEF29F49DF49CE4E215C09A5 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_configuration(this.handle, out result_handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_get_configuration_mD4F75ABDE7143D1B014F9A1FDBBC12BC628EDA12((intptr_t)L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.SessionConfiguration(result_handle, transfer:true) : null;
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		return (SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 *)NULL;
	}

IL_0027:
	{
		intptr_t L_5 = V_0;
		SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 * L_6 = (SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 *)il2cpp_codegen_object_new(SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2_il2cpp_TypeInfo_var);
		SessionConfiguration__ctor_m23C0BED787081216B1502566B1F1052D47B4E4EF(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
		// return result_object;
		return L_6;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::set_LogLevel(Microsoft.Azure.SpatialAnchors.SessionLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_set_LogLevel_mB0D3442131342F8C839DEBC9E0968C02963C1D32 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_log_level(this.handle, value));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2 = ___value0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_cloud_spatial_anchor_session_set_log_level_mAE60DD06126A4227355ED33F6404D9D8B8E7412C((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.UInt64 Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::Microsoft.Azure.SpatialAnchors.ICookie.get_Cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CloudSpatialAnchorSession_Microsoft_Azure_SpatialAnchors_ICookie_get_Cookie_mA4A88A8B0D279EC5F61DE74ABF7B371BAB171AFE (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	{
		// ulong ICookie.Cookie { get { return this.cookie; } set { this.cookie = value; } }
		uint64_t L_0 = __this->get_cookie_1();
		return L_0;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::Microsoft.Azure.SpatialAnchors.ICookie.set_Cookie(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_Microsoft_Azure_SpatialAnchors_ICookie_set_Cookie_m2BB682550A9827EBDE1D446BA0E92E12FCFA982F (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// ulong ICookie.Cookie { get { return this.cookie; } set { this.cookie = value; } }
		uint64_t L_0 = ___value0;
		__this->set_cookie_1(L_0);
		// ulong ICookie.Cookie { get { return this.cookie; } set { this.cookie = value; } }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__TokenRequired(Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__TokenRequired_mF7C35416D7CA993E33254299E14B0CFA6F3AA2E5 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * V_0 = NULL;
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * V_1 = NULL;
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * V_2 = NULL;
	{
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_0 = __this->get__TokenRequired_2();
		V_0 = L_0;
	}

IL_0007:
	{
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_1 = V_0;
		V_1 = L_1;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_2 = V_1;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *)CastclassSealed((RuntimeObject*)L_4, TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266_il2cpp_TypeInfo_var));
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 ** L_5 = __this->get_address_of__TokenRequired_2();
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_6 = V_2;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_7 = V_1;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_8;
		L_8 = InterlockedCompareExchangeImpl<TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *>((TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 **)L_5, L_6, L_7);
		V_0 = L_8;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_9 = V_0;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_10 = V_1;
		if ((!(((RuntimeObject*)(TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *)L_9) == ((RuntimeObject*)(TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__TokenRequired(Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__TokenRequired_m0524602D424E40C033ECF32016E93A2BAB774E1C (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * V_0 = NULL;
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * V_1 = NULL;
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * V_2 = NULL;
	{
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_0 = __this->get__TokenRequired_2();
		V_0 = L_0;
	}

IL_0007:
	{
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_1 = V_0;
		V_1 = L_1;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_2 = V_1;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *)CastclassSealed((RuntimeObject*)L_4, TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266_il2cpp_TypeInfo_var));
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 ** L_5 = __this->get_address_of__TokenRequired_2();
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_6 = V_2;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_7 = V_1;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_8;
		L_8 = InterlockedCompareExchangeImpl<TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *>((TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 **)L_5, L_6, L_7);
		V_0 = L_8;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_9 = V_0;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_10 = V_1;
		if ((!(((RuntimeObject*)(TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *)L_9) == ((RuntimeObject*)(TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::TokenRequiredStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_TokenRequiredStaticHandler_m246C34045315E93DEA6E7323F880A2D5797AB7F2 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * V_0 = NULL;
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * V_1 = NULL;
	TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * G_B3_0 = NULL;
	{
		// var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
		uint64_t L_0 = ___cookie0;
		IL2CPP_RUNTIME_CLASS_INIT(CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_1;
		L_1 = CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9(L_0, /*hidden argument*/CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate handler = (instance == null) ? null : instance._TokenRequired;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_3 = V_0;
		NullCheck(L_3);
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_4 = L_3->get__TokenRequired_2();
		G_B3_0 = L_4;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = ((TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 *)(NULL));
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (handler != null)
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// handler(instance, new Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs(args, transfer:false));
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_6 = V_1;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_7 = V_0;
		intptr_t L_8 = ___args1;
		TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * L_9 = (TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 *)il2cpp_codegen_object_new(TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60_il2cpp_TypeInfo_var);
		TokenRequiredEventArgs__ctor_mFF207B362C02DFBC435AD5FDD0F569670CE7E32C(L_9, (intptr_t)L_8, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_6);
		TokenRequiredDelegate_Invoke_mE70B72E5703A61C49DE5F08704A82D86200E26EA(L_6, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add_TokenRequired(Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add_TokenRequired_m5326F3F3B5402DE39DF6CF7019DE584997E9E14E (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._TokenRequired += value;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_0 = ___value0;
		CloudSpatialAnchorSession_add__TokenRequired_mF7C35416D7CA993E33254299E14B0CFA6F3AA2E5(__this, L_0, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_token_required(this.handle, this.cookie, TokenRequiredStaticHandlerDelegate));
		intptr_t L_1 = __this->get_handle_0();
		intptr_t L_2 = __this->get_handle_0();
		uint64_t L_3 = __this->get_cookie_1();
		IL2CPP_RUNTIME_CLASS_INIT(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * L_4 = ((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->get_TokenRequiredStaticHandlerDelegate_3();
		int32_t L_5;
		L_5 = NativeLibrary_ssc_cloud_spatial_anchor_session_set_token_required_mD27FC1DFA945450B3A0A517C3407A4147A9189A8((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove_TokenRequired(Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove_TokenRequired_m56580C256387170DDF1C1DC337832AAF8C0DCF68 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * ___value0, const RuntimeMethod* method)
{
	{
		// this._TokenRequired -= value;
		TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * L_0 = ___value0;
		CloudSpatialAnchorSession_remove__TokenRequired_m0524602D424E40C033ECF32016E93A2BAB774E1C(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__AnchorLocated(Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__AnchorLocated_m02239EE44F2C25763F2AFE1C1EF2F733DED7ACCE (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * V_0 = NULL;
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * V_1 = NULL;
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * V_2 = NULL;
	{
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_0 = __this->get__AnchorLocated_4();
		V_0 = L_0;
	}

IL_0007:
	{
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_1 = V_0;
		V_1 = L_1;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_2 = V_1;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *)CastclassSealed((RuntimeObject*)L_4, AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17_il2cpp_TypeInfo_var));
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 ** L_5 = __this->get_address_of__AnchorLocated_4();
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_6 = V_2;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_7 = V_1;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_8;
		L_8 = InterlockedCompareExchangeImpl<AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *>((AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 **)L_5, L_6, L_7);
		V_0 = L_8;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_9 = V_0;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_10 = V_1;
		if ((!(((RuntimeObject*)(AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *)L_9) == ((RuntimeObject*)(AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__AnchorLocated(Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__AnchorLocated_m10F0CD396931B0DE920AC753F46C166347E2A962 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * V_0 = NULL;
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * V_1 = NULL;
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * V_2 = NULL;
	{
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_0 = __this->get__AnchorLocated_4();
		V_0 = L_0;
	}

IL_0007:
	{
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_1 = V_0;
		V_1 = L_1;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_2 = V_1;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *)CastclassSealed((RuntimeObject*)L_4, AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17_il2cpp_TypeInfo_var));
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 ** L_5 = __this->get_address_of__AnchorLocated_4();
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_6 = V_2;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_7 = V_1;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_8;
		L_8 = InterlockedCompareExchangeImpl<AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *>((AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 **)L_5, L_6, L_7);
		V_0 = L_8;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_9 = V_0;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_10 = V_1;
		if ((!(((RuntimeObject*)(AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *)L_9) == ((RuntimeObject*)(AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::AnchorLocatedStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_AnchorLocatedStaticHandler_m64E9E6D3AB036F0C861FE8ADCE0533E48FFA1B90 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * V_0 = NULL;
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * V_1 = NULL;
	AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * G_B3_0 = NULL;
	{
		// var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
		uint64_t L_0 = ___cookie0;
		IL2CPP_RUNTIME_CLASS_INIT(CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_1;
		L_1 = CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9(L_0, /*hidden argument*/CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate handler = (instance == null) ? null : instance._AnchorLocated;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_3 = V_0;
		NullCheck(L_3);
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_4 = L_3->get__AnchorLocated_4();
		G_B3_0 = L_4;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = ((AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 *)(NULL));
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (handler != null)
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// handler(instance, new Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs(args, transfer:false));
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_6 = V_1;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_7 = V_0;
		intptr_t L_8 = ___args1;
		AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B * L_9 = (AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B *)il2cpp_codegen_object_new(AnchorLocatedEventArgs_t720725E81E3D70A4D051BB6D791FE28B7864C55B_il2cpp_TypeInfo_var);
		AnchorLocatedEventArgs__ctor_m750F4EA5F8CEDAA86F7BB2AD5A73C35C5752D318(L_9, (intptr_t)L_8, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_6);
		AnchorLocatedDelegate_Invoke_m8A0DB282A73B6BB788D874D669C7255CB82808A6(L_6, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add_AnchorLocated(Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add_AnchorLocated_mB32269C55A69816523325F1529A4AB349A5535FE (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._AnchorLocated += value;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_0 = ___value0;
		CloudSpatialAnchorSession_add__AnchorLocated_m02239EE44F2C25763F2AFE1C1EF2F733DED7ACCE(__this, L_0, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_anchor_located(this.handle, this.cookie, AnchorLocatedStaticHandlerDelegate));
		intptr_t L_1 = __this->get_handle_0();
		intptr_t L_2 = __this->get_handle_0();
		uint64_t L_3 = __this->get_cookie_1();
		IL2CPP_RUNTIME_CLASS_INIT(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * L_4 = ((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->get_AnchorLocatedStaticHandlerDelegate_5();
		int32_t L_5;
		L_5 = NativeLibrary_ssc_cloud_spatial_anchor_session_set_anchor_located_mF6C2A4178C147CB65E47E51E2644E093CA2EADAA((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove_AnchorLocated(Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove_AnchorLocated_mCA9CA002CBD7AD21F0B383FF60C1736CB0CC46B4 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * ___value0, const RuntimeMethod* method)
{
	{
		// this._AnchorLocated -= value;
		AnchorLocatedDelegate_t7FDFB5E1A64A68F7D883B82B39001CCDD6149A17 * L_0 = ___value0;
		CloudSpatialAnchorSession_remove__AnchorLocated_m10F0CD396931B0DE920AC753F46C166347E2A962(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__LocateAnchorsCompleted(Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__LocateAnchorsCompleted_m0600C1FD580E2957CB3DCC144352173AAF091ADB (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * V_0 = NULL;
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * V_1 = NULL;
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * V_2 = NULL;
	{
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_0 = __this->get__LocateAnchorsCompleted_6();
		V_0 = L_0;
	}

IL_0007:
	{
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_1 = V_0;
		V_1 = L_1;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_2 = V_1;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *)CastclassSealed((RuntimeObject*)L_4, LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91_il2cpp_TypeInfo_var));
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 ** L_5 = __this->get_address_of__LocateAnchorsCompleted_6();
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_6 = V_2;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_7 = V_1;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_8;
		L_8 = InterlockedCompareExchangeImpl<LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *>((LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 **)L_5, L_6, L_7);
		V_0 = L_8;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_9 = V_0;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_10 = V_1;
		if ((!(((RuntimeObject*)(LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *)L_9) == ((RuntimeObject*)(LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__LocateAnchorsCompleted(Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__LocateAnchorsCompleted_m4729E1AAEF2C31B2865525E0ADB7BFFF6EF87ED7 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * V_0 = NULL;
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * V_1 = NULL;
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * V_2 = NULL;
	{
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_0 = __this->get__LocateAnchorsCompleted_6();
		V_0 = L_0;
	}

IL_0007:
	{
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_1 = V_0;
		V_1 = L_1;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_2 = V_1;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *)CastclassSealed((RuntimeObject*)L_4, LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91_il2cpp_TypeInfo_var));
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 ** L_5 = __this->get_address_of__LocateAnchorsCompleted_6();
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_6 = V_2;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_7 = V_1;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_8;
		L_8 = InterlockedCompareExchangeImpl<LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *>((LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 **)L_5, L_6, L_7);
		V_0 = L_8;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_9 = V_0;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_10 = V_1;
		if ((!(((RuntimeObject*)(LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *)L_9) == ((RuntimeObject*)(LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::LocateAnchorsCompletedStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_LocateAnchorsCompletedStaticHandler_mC912801985FAD887254411C6FC612C6638155C7F (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * V_0 = NULL;
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * V_1 = NULL;
	LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * G_B3_0 = NULL;
	{
		// var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
		uint64_t L_0 = ___cookie0;
		IL2CPP_RUNTIME_CLASS_INIT(CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_1;
		L_1 = CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9(L_0, /*hidden argument*/CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate handler = (instance == null) ? null : instance._LocateAnchorsCompleted;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_3 = V_0;
		NullCheck(L_3);
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_4 = L_3->get__LocateAnchorsCompleted_6();
		G_B3_0 = L_4;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = ((LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 *)(NULL));
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (handler != null)
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// handler(instance, new Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs(args, transfer:false));
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_6 = V_1;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_7 = V_0;
		intptr_t L_8 = ___args1;
		LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * L_9 = (LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD *)il2cpp_codegen_object_new(LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD_il2cpp_TypeInfo_var);
		LocateAnchorsCompletedEventArgs__ctor_m8C0FDEAC2D9556019F93D342982BA762A56E57BF(L_9, (intptr_t)L_8, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_6);
		LocateAnchorsCompletedDelegate_Invoke_m45E6469BEBF0FC6791416BC11DD8616B34E3A36E(L_6, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add_LocateAnchorsCompleted(Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add_LocateAnchorsCompleted_m7226C11939853C163EEA63A0546432E0009EF78B (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._LocateAnchorsCompleted += value;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_0 = ___value0;
		CloudSpatialAnchorSession_add__LocateAnchorsCompleted_m0600C1FD580E2957CB3DCC144352173AAF091ADB(__this, L_0, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_locate_anchors_completed(this.handle, this.cookie, LocateAnchorsCompletedStaticHandlerDelegate));
		intptr_t L_1 = __this->get_handle_0();
		intptr_t L_2 = __this->get_handle_0();
		uint64_t L_3 = __this->get_cookie_1();
		IL2CPP_RUNTIME_CLASS_INIT(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * L_4 = ((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->get_LocateAnchorsCompletedStaticHandlerDelegate_7();
		int32_t L_5;
		L_5 = NativeLibrary_ssc_cloud_spatial_anchor_session_set_locate_anchors_completed_m47A449E6BE690BACC175A914E5DD424C9AC189BB((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove_LocateAnchorsCompleted(Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove_LocateAnchorsCompleted_m24FA50B502C22D7A3D0A80E221D7EDCDC76699CE (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * ___value0, const RuntimeMethod* method)
{
	{
		// this._LocateAnchorsCompleted -= value;
		LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * L_0 = ___value0;
		CloudSpatialAnchorSession_remove__LocateAnchorsCompleted_m4729E1AAEF2C31B2865525E0ADB7BFFF6EF87ED7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__SessionUpdated(Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__SessionUpdated_m424E69AB0158DB65B9129679F9B509ED3757BF0E (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * V_0 = NULL;
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * V_1 = NULL;
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * V_2 = NULL;
	{
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_0 = __this->get__SessionUpdated_8();
		V_0 = L_0;
	}

IL_0007:
	{
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_1 = V_0;
		V_1 = L_1;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_2 = V_1;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *)CastclassSealed((RuntimeObject*)L_4, SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0_il2cpp_TypeInfo_var));
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 ** L_5 = __this->get_address_of__SessionUpdated_8();
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_6 = V_2;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_7 = V_1;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_8;
		L_8 = InterlockedCompareExchangeImpl<SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *>((SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 **)L_5, L_6, L_7);
		V_0 = L_8;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_9 = V_0;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *)L_9) == ((RuntimeObject*)(SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__SessionUpdated(Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__SessionUpdated_m7F5D7DC5630D8F064A8CAA3D40F16E4208B7536D (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * V_0 = NULL;
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * V_1 = NULL;
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * V_2 = NULL;
	{
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_0 = __this->get__SessionUpdated_8();
		V_0 = L_0;
	}

IL_0007:
	{
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_1 = V_0;
		V_1 = L_1;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_2 = V_1;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *)CastclassSealed((RuntimeObject*)L_4, SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0_il2cpp_TypeInfo_var));
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 ** L_5 = __this->get_address_of__SessionUpdated_8();
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_6 = V_2;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_7 = V_1;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_8;
		L_8 = InterlockedCompareExchangeImpl<SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *>((SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 **)L_5, L_6, L_7);
		V_0 = L_8;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_9 = V_0;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_10 = V_1;
		if ((!(((RuntimeObject*)(SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *)L_9) == ((RuntimeObject*)(SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::SessionUpdatedStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_SessionUpdatedStaticHandler_m644C88E4D56677AA92E417A8A997EB699E9011C4 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * V_0 = NULL;
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * V_1 = NULL;
	SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * G_B3_0 = NULL;
	{
		// var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
		uint64_t L_0 = ___cookie0;
		IL2CPP_RUNTIME_CLASS_INIT(CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_1;
		L_1 = CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9(L_0, /*hidden argument*/CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate handler = (instance == null) ? null : instance._SessionUpdated;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_3 = V_0;
		NullCheck(L_3);
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_4 = L_3->get__SessionUpdated_8();
		G_B3_0 = L_4;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = ((SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 *)(NULL));
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (handler != null)
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// handler(instance, new Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs(args, transfer:false));
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_6 = V_1;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_7 = V_0;
		intptr_t L_8 = ___args1;
		SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * L_9 = (SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 *)il2cpp_codegen_object_new(SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46_il2cpp_TypeInfo_var);
		SessionUpdatedEventArgs__ctor_m0A958EFBC1AD297AEC54308BA9E56BA62E2A9946(L_9, (intptr_t)L_8, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_6);
		SessionUpdatedDelegate_Invoke_mD09A39FED81D43A0519542EDC97219E917822833(L_6, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add_SessionUpdated(Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add_SessionUpdated_mAE12C3DE963F102CFCD5D7AE1A2C99365DBCFCC7 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._SessionUpdated += value;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_0 = ___value0;
		CloudSpatialAnchorSession_add__SessionUpdated_m424E69AB0158DB65B9129679F9B509ED3757BF0E(__this, L_0, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_session_updated(this.handle, this.cookie, SessionUpdatedStaticHandlerDelegate));
		intptr_t L_1 = __this->get_handle_0();
		intptr_t L_2 = __this->get_handle_0();
		uint64_t L_3 = __this->get_cookie_1();
		IL2CPP_RUNTIME_CLASS_INIT(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * L_4 = ((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->get_SessionUpdatedStaticHandlerDelegate_9();
		int32_t L_5;
		L_5 = NativeLibrary_ssc_cloud_spatial_anchor_session_set_session_updated_m20B71EFC6781C3C91B228E9253BBBA1949562193((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove_SessionUpdated(Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove_SessionUpdated_mA6613E9FD4B21C9EF2D7CD1D78EEF1527ECECEFA (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * ___value0, const RuntimeMethod* method)
{
	{
		// this._SessionUpdated -= value;
		SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * L_0 = ___value0;
		CloudSpatialAnchorSession_remove__SessionUpdated_m7F5D7DC5630D8F064A8CAA3D40F16E4208B7536D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__Error(Microsoft.Azure.SpatialAnchors.SessionErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__Error_mE8424F0E08E6B62573E8B5676049594637183FDB (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * V_0 = NULL;
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * V_1 = NULL;
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * V_2 = NULL;
	{
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_0 = __this->get__Error_10();
		V_0 = L_0;
	}

IL_0007:
	{
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_1 = V_0;
		V_1 = L_1;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_2 = V_1;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *)CastclassSealed((RuntimeObject*)L_4, SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E_il2cpp_TypeInfo_var));
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E ** L_5 = __this->get_address_of__Error_10();
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_6 = V_2;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_7 = V_1;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_8;
		L_8 = InterlockedCompareExchangeImpl<SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *>((SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E **)L_5, L_6, L_7);
		V_0 = L_8;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_9 = V_0;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_10 = V_1;
		if ((!(((RuntimeObject*)(SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *)L_9) == ((RuntimeObject*)(SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__Error(Microsoft.Azure.SpatialAnchors.SessionErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__Error_m241EF6710B7088DEE496CFAD6C4FC2832DCE3EEE (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * V_0 = NULL;
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * V_1 = NULL;
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * V_2 = NULL;
	{
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_0 = __this->get__Error_10();
		V_0 = L_0;
	}

IL_0007:
	{
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_1 = V_0;
		V_1 = L_1;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_2 = V_1;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *)CastclassSealed((RuntimeObject*)L_4, SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E_il2cpp_TypeInfo_var));
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E ** L_5 = __this->get_address_of__Error_10();
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_6 = V_2;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_7 = V_1;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_8;
		L_8 = InterlockedCompareExchangeImpl<SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *>((SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E **)L_5, L_6, L_7);
		V_0 = L_8;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_9 = V_0;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_10 = V_1;
		if ((!(((RuntimeObject*)(SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *)L_9) == ((RuntimeObject*)(SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::ErrorStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_ErrorStaticHandler_m6BB2FBBE0E72FE3F9FC434B8E95FE0A4851E8302 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * V_0 = NULL;
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * V_1 = NULL;
	SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * G_B3_0 = NULL;
	{
		// var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
		uint64_t L_0 = ___cookie0;
		IL2CPP_RUNTIME_CLASS_INIT(CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_1;
		L_1 = CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9(L_0, /*hidden argument*/CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.SessionErrorDelegate handler = (instance == null) ? null : instance._Error;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_3 = V_0;
		NullCheck(L_3);
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_4 = L_3->get__Error_10();
		G_B3_0 = L_4;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = ((SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E *)(NULL));
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (handler != null)
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// handler(instance, new Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs(args, transfer:false));
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_6 = V_1;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_7 = V_0;
		intptr_t L_8 = ___args1;
		SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * L_9 = (SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F *)il2cpp_codegen_object_new(SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F_il2cpp_TypeInfo_var);
		SessionErrorEventArgs__ctor_m5F84EF10D18CD4F263AF8608E5CEEAC235847E44(L_9, (intptr_t)L_8, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_6);
		SessionErrorDelegate_Invoke_m109DE1741BC17627558DD61BB1F7424A739CA041(L_6, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add_Error(Microsoft.Azure.SpatialAnchors.SessionErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add_Error_m95CEB12210783AC01C4367073480CDF3707BA98C (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._Error += value;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_0 = ___value0;
		CloudSpatialAnchorSession_add__Error_mE8424F0E08E6B62573E8B5676049594637183FDB(__this, L_0, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_error(this.handle, this.cookie, ErrorStaticHandlerDelegate));
		intptr_t L_1 = __this->get_handle_0();
		intptr_t L_2 = __this->get_handle_0();
		uint64_t L_3 = __this->get_cookie_1();
		IL2CPP_RUNTIME_CLASS_INIT(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * L_4 = ((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->get_ErrorStaticHandlerDelegate_11();
		int32_t L_5;
		L_5 = NativeLibrary_ssc_cloud_spatial_anchor_session_set_error_m498EE00F91BB5FE9706C510BE09F09C5015E8E2D((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove_Error(Microsoft.Azure.SpatialAnchors.SessionErrorDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove_Error_m02376BB6368EBDA9E94379926E37F48600653F46 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * ___value0, const RuntimeMethod* method)
{
	{
		// this._Error -= value;
		SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * L_0 = ___value0;
		CloudSpatialAnchorSession_remove__Error_m241EF6710B7088DEE496CFAD6C4FC2832DCE3EEE(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add__OnLogDebug(Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add__OnLogDebug_mCB57E95A8D5D2FE0DC2CB35EF62F6C3657BA1A02 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * V_0 = NULL;
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * V_1 = NULL;
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * V_2 = NULL;
	{
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_0 = __this->get__OnLogDebug_12();
		V_0 = L_0;
	}

IL_0007:
	{
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_1 = V_0;
		V_1 = L_1;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_2 = V_1;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *)CastclassSealed((RuntimeObject*)L_4, OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB_il2cpp_TypeInfo_var));
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB ** L_5 = __this->get_address_of__OnLogDebug_12();
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_6 = V_2;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_7 = V_1;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *>((OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB **)L_5, L_6, L_7);
		V_0 = L_8;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_9 = V_0;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *)L_9) == ((RuntimeObject*)(OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove__OnLogDebug(Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove__OnLogDebug_m623CE52E62450DA91FCB2844AD5C34925CB7454F (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * V_0 = NULL;
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * V_1 = NULL;
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * V_2 = NULL;
	{
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_0 = __this->get__OnLogDebug_12();
		V_0 = L_0;
	}

IL_0007:
	{
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_1 = V_0;
		V_1 = L_1;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_2 = V_1;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *)CastclassSealed((RuntimeObject*)L_4, OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB_il2cpp_TypeInfo_var));
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB ** L_5 = __this->get_address_of__OnLogDebug_12();
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_6 = V_2;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_7 = V_1;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *>((OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB **)L_5, L_6, L_7);
		V_0 = L_8;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_9 = V_0;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *)L_9) == ((RuntimeObject*)(OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::OnLogDebugStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_OnLogDebugStaticHandler_m90532737252CBC09C98D17C3457FF770BB1ACCFE (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * V_0 = NULL;
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * V_1 = NULL;
	OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * G_B3_0 = NULL;
	{
		// var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
		uint64_t L_0 = ___cookie0;
		IL2CPP_RUNTIME_CLASS_INIT(CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_1;
		L_1 = CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9(L_0, /*hidden argument*/CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate handler = (instance == null) ? null : instance._OnLogDebug;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_3 = V_0;
		NullCheck(L_3);
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_4 = L_3->get__OnLogDebug_12();
		G_B3_0 = L_4;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = ((OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB *)(NULL));
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (handler != null)
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// handler(instance, new Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs(args, transfer:false));
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_6 = V_1;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_7 = V_0;
		intptr_t L_8 = ___args1;
		OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * L_9 = (OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC *)il2cpp_codegen_object_new(OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC_il2cpp_TypeInfo_var);
		OnLogDebugEventArgs__ctor_m5E9C80CEB6D82F6380568FD5E70FB47D2C0C0755(L_9, (intptr_t)L_8, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_6);
		OnLogDebugDelegate_Invoke_mC7884BE747188FC9358E41ED44E2E1514D0859CA(L_6, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::add_OnLogDebug(Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_add_OnLogDebug_mE20E385659929ED11681B9E87356A3AD7D48E2B3 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this._OnLogDebug += value;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_0 = ___value0;
		CloudSpatialAnchorSession_add__OnLogDebug_mCB57E95A8D5D2FE0DC2CB35EF62F6C3657BA1A02(__this, L_0, /*hidden argument*/NULL);
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_on_log_debug(this.handle, this.cookie, OnLogDebugStaticHandlerDelegate));
		intptr_t L_1 = __this->get_handle_0();
		intptr_t L_2 = __this->get_handle_0();
		uint64_t L_3 = __this->get_cookie_1();
		IL2CPP_RUNTIME_CLASS_INIT(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * L_4 = ((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->get_OnLogDebugStaticHandlerDelegate_13();
		int32_t L_5;
		L_5 = NativeLibrary_ssc_cloud_spatial_anchor_session_set_on_log_debug_mF97EE94486E1DE01DB3C6E9654D912B8FA5B4D2C((intptr_t)L_2, L_3, L_4, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::remove_OnLogDebug(Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_remove_OnLogDebug_m040719605CE125895587CF7C3BC45CE34D18FB71 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * ___value0, const RuntimeMethod* method)
{
	{
		// this._OnLogDebug -= value;
		OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * L_0 = ___value0;
		CloudSpatialAnchorSession_remove__OnLogDebug_m623CE52E62450DA91FCB2844AD5C34925CB7454F(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::UpdatedSensorFingerprintRequiredStaticHandler(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_UpdatedSensorFingerprintRequiredStaticHandler_m76F871ECC8D0D0A5E1E3A248A5A2CA145CBE8A16 (uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * V_0 = NULL;
	UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * V_1 = NULL;
	UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * G_B3_0 = NULL;
	{
		// var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
		uint64_t L_0 = ___cookie0;
		IL2CPP_RUNTIME_CLASS_INIT(CookieTracker_1_t32A662E1834F8B376DD45014358F05B2C38BF127_il2cpp_TypeInfo_var);
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_1;
		L_1 = CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9(L_0, /*hidden argument*/CookieTracker_1_Lookup_m0634F0D09FE8F3515A55464BC4AE0B714FF852A9_RuntimeMethod_var);
		V_0 = L_1;
		// Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate handler = (instance == null) ? null : instance._UpdatedSensorFingerprintRequired;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_3 = V_0;
		NullCheck(L_3);
		UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * L_4 = L_3->get__UpdatedSensorFingerprintRequired_14();
		G_B3_0 = L_4;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = ((UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 *)(NULL));
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (handler != null)
		UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// handler(instance, new Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs(args, transfer:false));
		UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * L_6 = V_1;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_7 = V_0;
		intptr_t L_8 = ___args1;
		SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * L_9 = (SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 *)il2cpp_codegen_object_new(SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461_il2cpp_TypeInfo_var);
		SensorFingerprintEventArgs__ctor_m2AA3FD6469E09C81292528D7B6A6A768F7BD29FB(L_9, (intptr_t)L_8, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_6);
		UpdatedSensorFingerprintRequiredDelegate_Invoke_mAAE63D71A2500853220F5CCAC915D4CA6A137C49(L_6, L_7, L_9, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::CreateAnchorAsync(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CloudSpatialAnchorSession_CreateAnchorAsync_m1B8FC408EE27EE1CFE0583E6CBE25722EBC0624F (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m31F885388C8DDB9D9708DE5F2A42C1E23468FE73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_0 = ___anchor0;
		(&V_0)->set_anchor_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m31F885388C8DDB9D9708DE5F2A42C1E23468FE73((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m31F885388C8DDB9D9708DE5F2A42C1E23468FE73_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher> Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::GetActiveWatchers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CloudSpatialAnchorSession_GetActiveWatchers_mEF204D4A6F5953AE511084EFC4980FBB2D0A260C (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIntPtr_t_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mE135557D31178A8AF99090A2B0F01C5C74D2835C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisIntPtr_t_m456F1B8EE2356E3FEB83646C6005CD3994F72085_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mC1411A606A08E260E4DBF9F4BDC3A7CAC23717C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m0B5314AB2487979AA54A12812798199E455E9FDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_m75521C360D663C786FAB301E47742E4C930B5319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetActiveWatchersU3Eb__89_0_m7749DDD8EF11F649B04DB4A29F653523AF330BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_0 = NULL;
	int32_t V_1 = 0;
	Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_active_watchers_count(this.handle, out result_count));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_get_active_watchers_count_m61F83A8CB53A5CCE226E7BE4C5665FFF8754709D((intptr_t)L_1, (int32_t*)(&V_1), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// result_array = new IntPtr[result_count];
		int32_t L_3 = V_1;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_4 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)SZArrayNew(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_active_watchers_items(this.handle, result_array, ref result_count));
		intptr_t L_5 = __this->get_handle_0();
		intptr_t L_6 = __this->get_handle_0();
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_7 = V_0;
		int32_t L_8;
		L_8 = NativeLibrary_ssc_cloud_spatial_anchor_session_get_active_watchers_items_mECFF73216E4D8B49554C00E362DC5E565D949DA8((intptr_t)L_6, L_7, (int32_t*)(&V_1), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_5, L_8, /*hidden argument*/NULL);
		// result = result_array.Take(result_count).Select(handle => new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher(handle, transfer:true)).ToList().AsReadOnly();
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_9 = V_0;
		int32_t L_10 = V_1;
		RuntimeObject* L_11;
		L_11 = Enumerable_Take_TisIntPtr_t_m456F1B8EE2356E3FEB83646C6005CD3994F72085((RuntimeObject*)(RuntimeObject*)L_9, L_10, /*hidden argument*/Enumerable_Take_TisIntPtr_t_m456F1B8EE2356E3FEB83646C6005CD3994F72085_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var);
		Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * L_12 = ((U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var))->get_U3CU3E9__89_0_1();
		Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * L_13 = L_12;
		G_B1_0 = L_13;
		G_B1_1 = L_11;
		if (L_13)
		{
			G_B2_0 = L_13;
			G_B2_1 = L_11;
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var);
		U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 * L_14 = ((U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * L_15 = (Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 *)il2cpp_codegen_object_new(Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713_il2cpp_TypeInfo_var);
		Func_2__ctor_m0B5314AB2487979AA54A12812798199E455E9FDC(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec_U3CGetActiveWatchersU3Eb__89_0_m7749DDD8EF11F649B04DB4A29F653523AF330BD1_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0B5314AB2487979AA54A12812798199E455E9FDC_RuntimeMethod_var);
		Func_2_t6AEC3C63B73410D4676D33BCF9438F695819E713 * L_16 = L_15;
		((U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var))->set_U3CU3E9__89_0_1(L_16);
		G_B2_0 = L_16;
		G_B2_1 = G_B1_1;
	}

IL_005e:
	{
		RuntimeObject* L_17;
		L_17 = Enumerable_Select_TisIntPtr_t_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mE135557D31178A8AF99090A2B0F01C5C74D2835C(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisIntPtr_t_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mE135557D31178A8AF99090A2B0F01C5C74D2835C_RuntimeMethod_var);
		List_1_tBD73B3F0977FB777373B9431C896264FFBCE414C * L_18;
		L_18 = Enumerable_ToList_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mC1411A606A08E260E4DBF9F4BDC3A7CAC23717C7(L_17, /*hidden argument*/Enumerable_ToList_TisCloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_mC1411A606A08E260E4DBF9F4BDC3A7CAC23717C7_RuntimeMethod_var);
		NullCheck(L_18);
		ReadOnlyCollection_1_t2255307CB460E6EA65E2AD9D74D6EF05F100CA53 * L_19;
		L_19 = List_1_AsReadOnly_m75521C360D663C786FAB301E47742E4C930B5319(L_18, /*hidden argument*/List_1_AsReadOnly_m75521C360D663C786FAB301E47742E4C930B5319_RuntimeMethod_var);
		// return result;
		return L_19;
	}
}
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::DeleteAnchorAsync(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CloudSpatialAnchorSession_DeleteAnchorAsync_m6CDB88E5D0CF8CB962A59BFC694A23426973634C (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * ___anchor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_m99B8D6D02BB6328D3DF21313ECC2E65163FD7A44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_0 = ___anchor0;
		(&V_0)->set_anchor_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_m99B8D6D02BB6328D3DF21313ECC2E65163FD7A44((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_m99B8D6D02BB6328D3DF21313ECC2E65163FD7A44_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus> Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::GetSessionStatusAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * CloudSpatialAnchorSession_GetSessionStatusAsync_mDD5465D42894F4FB5820A73D093AE0BA57F266AA (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m5C5097708E09EB8ADBA7E1B380E6720705B8F4FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_mB55678FE2A059452ED95AA01BEB1A59F366EEB60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC9892D8306B15A4FD28F300B258E16B0E0945543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m5C5097708E09EB8ADBA7E1B380E6720705B8F4FC(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m5C5097708E09EB8ADBA7E1B380E6720705B8F4FC_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB  L_1 = V_0;
		AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_mB55678FE2A059452ED95AA01BEB1A59F366EEB60((AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *)(&V_1), (U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_mB55678FE2A059452ED95AA01BEB1A59F366EEB60_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_mC9892D8306B15A4FD28F300B258E16B0E0945543((AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mC9892D8306B15A4FD28F300B258E16B0E0945543_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_Start_m23F016D1DFE48BE797141C4FDAB53AF93598194A (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_start(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_start_m640F0FB4D09CB906F924CA61BE019403FC6D714A((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_Stop_mE22C065A5F22B6A56B514D8259109C8BC898733F (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_stop(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_stop_mF2C3A186368F12DE3F0DBC11039861EF21EDE42F((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession_Reset_m91D9301A08E467A5AF24A8214F2014E2E8E04433 (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_reset(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_reset_mE9415AF3E0D384B5764290F7BC5B4A81772D0817((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSession__cctor_m1B9AFF305C373971F9499F12C45C1EC7DD239327 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_AnchorLocatedStaticHandler_m64E9E6D3AB036F0C861FE8ADCE0533E48FFA1B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_ErrorStaticHandler_m6BB2FBBE0E72FE3F9FC434B8E95FE0A4851E8302_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_LocateAnchorsCompletedStaticHandler_mC912801985FAD887254411C6FC612C6638155C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_OnLogDebugStaticHandler_m90532737252CBC09C98D17C3457FF770BB1ACCFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_SessionUpdatedStaticHandler_m644C88E4D56677AA92E417A8A997EB699E9011C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_TokenRequiredStaticHandler_m246C34045315E93DEA6E7323F880A2D5797AB7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_UpdatedSensorFingerprintRequiredStaticHandler_m76F871ECC8D0D0A5E1E3A248A5A2CA145CBE8A16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative TokenRequiredStaticHandlerDelegate = TokenRequiredStaticHandler;
		TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * L_0 = (TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB *)il2cpp_codegen_object_new(TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB_il2cpp_TypeInfo_var);
		TokenRequiredDelegateNative__ctor_m66B72CA43B3AB3D1F36C30DFB00D58C375C4B3D7(L_0, NULL, (intptr_t)((intptr_t)CloudSpatialAnchorSession_TokenRequiredStaticHandler_m246C34045315E93DEA6E7323F880A2D5797AB7F2_RuntimeMethod_var), /*hidden argument*/NULL);
		((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->set_TokenRequiredStaticHandlerDelegate_3(L_0);
		// private static Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative AnchorLocatedStaticHandlerDelegate = AnchorLocatedStaticHandler;
		AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * L_1 = (AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 *)il2cpp_codegen_object_new(AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76_il2cpp_TypeInfo_var);
		AnchorLocatedDelegateNative__ctor_m7E9167A0243288BB650728239F07F39EBAD52D9E(L_1, NULL, (intptr_t)((intptr_t)CloudSpatialAnchorSession_AnchorLocatedStaticHandler_m64E9E6D3AB036F0C861FE8ADCE0533E48FFA1B90_RuntimeMethod_var), /*hidden argument*/NULL);
		((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->set_AnchorLocatedStaticHandlerDelegate_5(L_1);
		// private static Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative LocateAnchorsCompletedStaticHandlerDelegate = LocateAnchorsCompletedStaticHandler;
		LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * L_2 = (LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E *)il2cpp_codegen_object_new(LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E_il2cpp_TypeInfo_var);
		LocateAnchorsCompletedDelegateNative__ctor_m698B0066FA35860DB625CC20596378503270A60C(L_2, NULL, (intptr_t)((intptr_t)CloudSpatialAnchorSession_LocateAnchorsCompletedStaticHandler_mC912801985FAD887254411C6FC612C6638155C7F_RuntimeMethod_var), /*hidden argument*/NULL);
		((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->set_LocateAnchorsCompletedStaticHandlerDelegate_7(L_2);
		// private static Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative SessionUpdatedStaticHandlerDelegate = SessionUpdatedStaticHandler;
		SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * L_3 = (SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C *)il2cpp_codegen_object_new(SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C_il2cpp_TypeInfo_var);
		SessionUpdatedDelegateNative__ctor_mAA9609436B9A6331F3769870B3CBEB70717A3214(L_3, NULL, (intptr_t)((intptr_t)CloudSpatialAnchorSession_SessionUpdatedStaticHandler_m644C88E4D56677AA92E417A8A997EB699E9011C4_RuntimeMethod_var), /*hidden argument*/NULL);
		((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->set_SessionUpdatedStaticHandlerDelegate_9(L_3);
		// private static Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative ErrorStaticHandlerDelegate = ErrorStaticHandler;
		SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * L_4 = (SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B *)il2cpp_codegen_object_new(SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B_il2cpp_TypeInfo_var);
		SessionErrorDelegateNative__ctor_m27FB558B34FC472D3420AFD6D0174888B5BD80B9(L_4, NULL, (intptr_t)((intptr_t)CloudSpatialAnchorSession_ErrorStaticHandler_m6BB2FBBE0E72FE3F9FC434B8E95FE0A4851E8302_RuntimeMethod_var), /*hidden argument*/NULL);
		((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->set_ErrorStaticHandlerDelegate_11(L_4);
		// private static Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative OnLogDebugStaticHandlerDelegate = OnLogDebugStaticHandler;
		OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * L_5 = (OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 *)il2cpp_codegen_object_new(OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116_il2cpp_TypeInfo_var);
		OnLogDebugDelegateNative__ctor_mA52D62F3C52926DEB9D37507C044FE1428915FC4(L_5, NULL, (intptr_t)((intptr_t)CloudSpatialAnchorSession_OnLogDebugStaticHandler_m90532737252CBC09C98D17C3457FF770BB1ACCFE_RuntimeMethod_var), /*hidden argument*/NULL);
		((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->set_OnLogDebugStaticHandlerDelegate_13(L_5);
		// private static Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative UpdatedSensorFingerprintRequiredStaticHandlerDelegate = UpdatedSensorFingerprintRequiredStaticHandler;
		UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * L_6 = (UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 *)il2cpp_codegen_object_new(UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224_il2cpp_TypeInfo_var);
		UpdatedSensorFingerprintRequiredDelegateNative__ctor_m08E022D1F6D5699AEE8FB305E86C120DD315B74B(L_6, NULL, (intptr_t)((intptr_t)CloudSpatialAnchorSession_UpdatedSensorFingerprintRequiredStaticHandler_m76F871ECC8D0D0A5E1E3A248A5A2CA145CBE8A16_RuntimeMethod_var), /*hidden argument*/NULL);
		((CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_StaticFields*)il2cpp_codegen_static_fields_for(CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0_il2cpp_TypeInfo_var))->set_UpdatedSensorFingerprintRequiredStaticHandlerDelegate_15(L_6);
		return;
	}
}
// Microsoft.Azure.SpatialAnchors.SessionStatus Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession::<GetSessionStatusAsync>b__93_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * CloudSpatialAnchorSession_U3CGetSessionStatusAsyncU3Eb__93_0_mE5E9876BD5CBF82BAB72C989B9E045A3A5B0389D (CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_session_status_async(this.handle, out result_handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_get_session_status_async_m234A58335F35EA4A16F40B070D49368E5CFB758E((intptr_t)L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// result_object = new Microsoft.Azure.SpatialAnchors.SessionStatus(result_handle, transfer:true);
		intptr_t L_3 = V_0;
		SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * L_4 = (SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF *)il2cpp_codegen_object_new(SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_il2cpp_TypeInfo_var);
		SessionStatus__ctor_m4856914EB82E254F0F0EA2B05D304583A06E317B(L_4, (intptr_t)L_3, (bool)1, /*hidden argument*/NULL);
		// return result_object;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSessionDeferral__ctor_mCFEE4DEE621C9ABD900772C31CA50BA51A684C5D (CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	{
		// internal CloudSpatialAnchorSessionDeferral(IntPtr ahandle, bool transfer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_0((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_deferral_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_deferral_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_addref_m5C7378886E4B244C30798A36E33A021772B2ECE5((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSessionDeferral_Finalize_mC8D347B91BC97CA43B519CAB410342A9606E11F8 (CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_deferral_release(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_release_m80DB30D14470094BFB696BD64839D607E0B2A373((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_0((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorSessionDeferral_Complete_m298238174FEE897C668679EACFC4CE9FD97CC74B (CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE * __this, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_deferral_complete(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_complete_m5DBA1859C36664A244D1EAC42559F9CFB34A1C7B((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorWatcher__ctor_mF036166F758F5315D865BF3A9738AD07DFB15845 (CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	{
		// internal CloudSpatialAnchorWatcher(IntPtr ahandle, bool transfer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_0((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_watcher_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_watcher_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_cloud_spatial_anchor_watcher_addref_m04C9D5AC20AF82E921A7B3FFACD503ACB2999ECA((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchorWatcher_Finalize_mC012F2AAC6CBF077BB44247A3209F602514F50E9 (CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_watcher_release(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_cloud_spatial_anchor_watcher_release_m0449E95E3DD8D48F3AE9AEB5F7898D358B9D9EFD((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_0((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialException::.ctor(Microsoft.Azure.SpatialAnchors.CloudSpatialErrorCode,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * __this, int32_t ___code0, String_t* ___message1, String_t* ___requestCorrelationVector2, String_t* ___responseCorrelationVector3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CloudSpatialException(CloudSpatialErrorCode code, string message, string requestCorrelationVector, string responseCorrelationVector) : base(message)
		String_t* L_0 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// this.ErrorCode = code;
		int32_t L_1 = ___code0;
		__this->set_U3CErrorCodeU3Ek__BackingField_17(L_1);
		// this.RequestCorrelationVector = requestCorrelationVector;
		String_t* L_2 = ___requestCorrelationVector2;
		__this->set_U3CRequestCorrelationVectorU3Ek__BackingField_18(L_2);
		// this.ResponseCorrelationVector = responseCorrelationVector;
		String_t* L_3 = ___responseCorrelationVector3;
		__this->set_U3CResponseCorrelationVectorU3Ek__BackingField_19(L_3);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedDelegate__ctor_mA0865702FA4E2D7A6AF709B0E84AFA89B90758A3 (LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedDelegate_Invoke_m45E6469BEBF0FC6791416BC11DD8616B34E3A36E (LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * __this, RuntimeObject * ___sender0, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate::BeginInvoke(System.Object,Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocateAnchorsCompletedDelegate_BeginInvoke_mF3F33C2C4D32EEB6FF89A6564EE53A5BEFFAD291 (LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * __this, RuntimeObject * ___sender0, LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedDelegate_EndInvoke_mFEBB23A905A0E55B4C3BDE5D508396C15281B7D0 (LocateAnchorsCompletedDelegate_t73E51F6E92EAF6812D46CB7118A0E04DBD1ABF91 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E (LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint64_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___cookie0, ___args1);

}
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedDelegateNative__ctor_m698B0066FA35860DB625CC20596378503270A60C (LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative::Invoke(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedDelegateNative_Invoke_mF19CFC4AF96D574A7DD67E5B9C989609C52A0407 (LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cookie0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
					else
						GenericVirtActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cookie0, ___args1);
					else
						VirtActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cookie0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocateAnchorsCompletedDelegateNative_BeginInvoke_m226E9454CBEB68775A256EE1BF848415D43E8A2C (LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * __this, uint64_t ___cookie0, intptr_t ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___cookie0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedDelegateNative_EndInvoke_mFFDFE5897288B8EE9A5CADECEB44F7C21680B8AF (LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedEventArgs__ctor_m8C0FDEAC2D9556019F93D342982BA762A56E57BF (LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal LocateAnchorsCompletedEventArgs(IntPtr ahandle, bool transfer)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_1((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_locate_anchors_completed_event_args_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_locate_anchors_completed_event_args_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_locate_anchors_completed_event_args_addref_mAC0F63DD9E10A9EA43CB944B78472DBD72FEDA4A((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateAnchorsCompletedEventArgs_Finalize_m18E7F755FD6E777DE75DB195209B3922CE586A4B (LocateAnchorsCompletedEventArgs_tA2B0431641D3164E78909D0F0CA77DA946732FBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_locate_anchors_completed_event_args_release(this.handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_locate_anchors_completed_event_args_release_m2896EC66FB3F768099A1733A6B993BFC04FFA74A((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_1((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_locate_anchors_completed_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_locate_anchors_completed_event_args_release_m2896EC66FB3F768099A1733A6B993BFC04FFA74A (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_locate_anchors_completed_event_args_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_locate_anchors_completed_event_args_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_locate_anchors_completed_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_locate_anchors_completed_event_args_addref_mAC0F63DD9E10A9EA43CB944B78472DBD72FEDA4A (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_locate_anchors_completed_event_args_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_locate_anchors_completed_event_args_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_watcher_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_watcher_release_m0449E95E3DD8D48F3AE9AEB5F7898D358B9D9EFD (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_watcher_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_watcher_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_watcher_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_watcher_addref_m04C9D5AC20AF82E921A7B3FFACD503ACB2999ECA (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_watcher_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_watcher_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_anchor_located_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_anchor_located_event_args_release_m9F2224B74E09A7348E9CD18047B434696F62D6C1 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_anchor_located_event_args_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_anchor_located_event_args_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_anchor_located_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_anchor_located_event_args_addref_m1A1B2A5A206D1D9DF2D749A83324AB4D8CD0C78E (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_anchor_located_event_args_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_anchor_located_event_args_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_anchor_located_event_args_get_anchor(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_anchor_located_event_args_get_anchor_mF587C361DDE6491C9262FDC045466F2C4B3CEB08 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_anchor_located_event_args_get_anchor", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_anchor_located_event_args_get_anchor)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_create(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_create_mA2E7357D170858F0CA2DC0C1A8F1C7A4D2B8249B (intptr_t* ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_create)(___instance0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___instance0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_release_mA341AFD5AFE95F00D148501319A31777B6C24F7E (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_addref_mAA61ED8EEC7C8851DE28D92A7C87839CEC77CBB8 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_get_local_anchor(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_get_local_anchor_m971B9EB28F717FCE17B769CE7B99EB1974C0ED7B (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_get_local_anchor", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_get_local_anchor)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_set_local_anchor(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_set_local_anchor_m38C6EDC63DBBCC7FC184B990E0E61C8E49536A42 (intptr_t ___handle0, intptr_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_set_local_anchor", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_set_local_anchor)(___handle0, ___value1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_anchor_located_event_args_get_status(System.IntPtr,Microsoft.Azure.SpatialAnchors.LocateAnchorStatus&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_anchor_located_event_args_get_status_mB929C4F71C8BD7402645FA8811563B42BD0631F1 (intptr_t ___handle0, int32_t* ___result1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_anchor_located_event_args_get_status", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_anchor_located_event_args_get_status)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_release_m90814278C4FA09A25F8C830461EAC2DD426E414D (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_configuration_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_configuration_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_addref_m2184B84335B7AF9DD6B542316BB083EA7AA01DE0 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_configuration_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_configuration_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_set_account_domain(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_set_account_domain_mC4EAD680F9BA7397468E7000EF35DFBB13015E67 (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_configuration_set_account_domain_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value1' to native representation
	Il2CppChar* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = ___value1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_configuration_set_account_domain_wide)(___handle0, ____value1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____value1_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_set_account_id(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_set_account_id_mC3041094B2413492710FD52222B19DDBC23E0C9F (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_configuration_set_account_id_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value1' to native representation
	Il2CppChar* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = ___value1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_configuration_set_account_id_wide)(___handle0, ____value1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____value1_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_configuration_set_account_key(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_configuration_set_account_key_m8B850EA75C1D1F2D6ADDBD58794B918A2CB3BA28 (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_configuration_set_account_key_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value1' to native representation
	Il2CppChar* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = ___value1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_configuration_set_account_key_wide)(___handle0, ____value1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____value1_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_create(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_create_m0EC7835DDD803074362737274563D23F73AD9849 (intptr_t* ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_create)(___instance0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___instance0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_release_mD6225307157954288C2C2DE7D2FECE954CBBE9E3 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_get_configuration(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_get_configuration_mD4F75ABDE7143D1B014F9A1FDBBC12BC628EDA12 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_get_configuration", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_get_configuration)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_log_level(System.IntPtr,Microsoft.Azure.SpatialAnchors.SessionLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_log_level_mAE60DD06126A4227355ED33F6404D9D8B8E7412C (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_set_log_level", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_set_log_level)(___handle0, ___value1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_token_required(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_token_required_mD27FC1DFA945450B3A0A517C3407A4147A9189A8 (intptr_t ___handle0, uint64_t ___value1, TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * ___value_fn2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_set_token_required", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value_fn2' to native representation
	Il2CppMethodPointer ____value_fn2_marshaled = NULL;
	____value_fn2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___value_fn2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_set_token_required)(___handle0, ___value1, ____value_fn2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1, ____value_fn2_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_token_required_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_token_required_event_args_release_m86A9288AED53CDAA1AEA893BCC368DD174F18BA8 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_token_required_event_args_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_token_required_event_args_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_token_required_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_token_required_event_args_addref_m4E05639E6BD5A6D29162D2308D1A02835B7D3941 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_token_required_event_args_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_token_required_event_args_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_token_required_event_args_set_authentication_token(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_token_required_event_args_set_authentication_token_mDDC8FC85C8FA4C0AADEE6AEF4B70750722BB9E22 (intptr_t ___handle0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_token_required_event_args_set_authentication_token_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value1' to native representation
	Il2CppChar* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = ___value1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_token_required_event_args_set_authentication_token_wide)(___handle0, ____value1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____value1_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_token_required_event_args_get_deferral(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_token_required_event_args_get_deferral_mFD4D0BF54F572A6091933D141247D6AAC8F47D80 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_token_required_event_args_get_deferral", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_token_required_event_args_get_deferral)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_deferral_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_release_m80DB30D14470094BFB696BD64839D607E0B2A373 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_deferral_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_deferral_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_deferral_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_addref_m5C7378886E4B244C30798A36E33A021772B2ECE5 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_deferral_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_deferral_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_deferral_complete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_deferral_complete_m5DBA1859C36664A244D1EAC42559F9CFB34A1C7B (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_deferral_complete", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_deferral_complete)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_anchor_located(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_anchor_located_mF6C2A4178C147CB65E47E51E2644E093CA2EADAA (intptr_t ___handle0, uint64_t ___value1, AnchorLocatedDelegateNative_tC9E188748BBFEDC7A430C0E8B420E195123A9E76 * ___value_fn2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_set_anchor_located", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value_fn2' to native representation
	Il2CppMethodPointer ____value_fn2_marshaled = NULL;
	____value_fn2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___value_fn2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_set_anchor_located)(___handle0, ___value1, ____value_fn2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1, ____value_fn2_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_locate_anchors_completed(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_locate_anchors_completed_m47A449E6BE690BACC175A914E5DD424C9AC189BB (intptr_t ___handle0, uint64_t ___value1, LocateAnchorsCompletedDelegateNative_t40A008455ADD140F0F4766A1A3BF1572B04CB50E * ___value_fn2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_set_locate_anchors_completed", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value_fn2' to native representation
	Il2CppMethodPointer ____value_fn2_marshaled = NULL;
	____value_fn2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___value_fn2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_set_locate_anchors_completed)(___handle0, ___value1, ____value_fn2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1, ____value_fn2_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_session_updated(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_session_updated_m20B71EFC6781C3C91B228E9253BBBA1949562193 (intptr_t ___handle0, uint64_t ___value1, SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * ___value_fn2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_set_session_updated", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value_fn2' to native representation
	Il2CppMethodPointer ____value_fn2_marshaled = NULL;
	____value_fn2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___value_fn2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_set_session_updated)(___handle0, ___value1, ____value_fn2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1, ____value_fn2_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_updated_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_updated_event_args_release_m039699EC5BB415D95D668C432EBDD48D2C28E849 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_updated_event_args_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_updated_event_args_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_updated_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_updated_event_args_addref_mE2A23C528D506CC6BFF999FC06569F5A231CA202 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_updated_event_args_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_updated_event_args_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_updated_event_args_get_status(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_updated_event_args_get_status_m27F4065283F1BC5962A4225A4899C76BAD7FBCE5 (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_updated_event_args_get_status", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_updated_event_args_get_status)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_status_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_status_release_m25D664F58280521504183619CB66FB6AE91058F4 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_status_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_status_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_status_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_status_addref_mA2A5DC88FAC358C9D7FE60F51D7B31244BE5D619 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_status_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_status_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_status_get_recommended_for_create_progress(System.IntPtr,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_status_get_recommended_for_create_progress_m010CEBE78DAA16636F3F2B982B99928142ACAE1D (intptr_t ___handle0, float* ___result1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_status_get_recommended_for_create_progress", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_status_get_recommended_for_create_progress)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_error(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_error_m498EE00F91BB5FE9706C510BE09F09C5015E8E2D (intptr_t ___handle0, uint64_t ___value1, SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * ___value_fn2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_set_error", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value_fn2' to native representation
	Il2CppMethodPointer ____value_fn2_marshaled = NULL;
	____value_fn2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___value_fn2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_set_error)(___handle0, ___value1, ____value_fn2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1, ____value_fn2_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_error_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_error_event_args_release_mE7E5478048CEB32AA2BB398868DBC8E6D4B0CEFB (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_error_event_args_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_error_event_args_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_session_error_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_session_error_event_args_addref_mDCA6E2BCC841DEC06B6A5F99A2AB513505CCDD2E (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_session_error_event_args_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_session_error_event_args_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_set_on_log_debug(System.IntPtr,System.UInt64,Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_set_on_log_debug_mF97EE94486E1DE01DB3C6E9654D912B8FA5B4D2C (intptr_t ___handle0, uint64_t ___value1, OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * ___value_fn2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_set_on_log_debug", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value_fn2' to native representation
	Il2CppMethodPointer ____value_fn2_marshaled = NULL;
	____value_fn2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___value_fn2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_set_on_log_debug)(___handle0, ___value1, ____value_fn2_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___value1, ____value_fn2_marshaled);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_on_log_debug_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_on_log_debug_event_args_release_m1E8E7A5D40A033142A957D3D460C15DF0ED46AEF (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_on_log_debug_event_args_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_on_log_debug_event_args_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_on_log_debug_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_on_log_debug_event_args_addref_mDA7B022250AA87F35C567035AEB1856AEEF37852 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_on_log_debug_event_args_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_on_log_debug_event_args_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_sensor_fingerprint_event_args_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_sensor_fingerprint_event_args_release_m7CDE3F001C350603A417896448115A36EE8ABB6A (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_sensor_fingerprint_event_args_release", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_sensor_fingerprint_event_args_release)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_sensor_fingerprint_event_args_addref(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_sensor_fingerprint_event_args_addref_mAFEB2522453E2F91360539D68E35A2BE4E8C58FC (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_sensor_fingerprint_event_args_addref", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_sensor_fingerprint_event_args_addref)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_dispose_m5BF767873D166ACABA577502E7F6126AEA7BDBD5 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_dispose)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_create_anchor_async(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_create_anchor_async_m82DDA458D573CC380DC09894A281C9E00E1D2294 (intptr_t ___handle0, intptr_t ___anchor1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_create_anchor_async", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_create_anchor_async)(___handle0, ___anchor1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___anchor1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_get_active_watchers_count(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_get_active_watchers_count_m61F83A8CB53A5CCE226E7BE4C5665FFF8754709D (intptr_t ___handle0, int32_t* ___result_count1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_get_active_watchers_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_get_active_watchers_count)(___handle0, ___result_count1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result_count1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_get_active_watchers_items(System.IntPtr,System.IntPtr[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_get_active_watchers_items_mECFF73216E4D8B49554C00E362DC5E565D949DA8 (intptr_t ___handle0, IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___result_array1, int32_t* ___result_count2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_get_active_watchers_items", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result_array1' to native representation
	intptr_t* ____result_array1_marshaled = NULL;
	if (___result_array1 != NULL)
	{
		____result_array1_marshaled = reinterpret_cast<intptr_t*>((___result_array1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_get_active_watchers_items)(___handle0, ____result_array1_marshaled, ___result_count2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____result_array1_marshaled, ___result_count2);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_delete_anchor_async(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_delete_anchor_async_m887BFEF2657B3EBC3593DC3263BF21AA01079A94 (intptr_t ___handle0, intptr_t ___anchor1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_delete_anchor_async", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_delete_anchor_async)(___handle0, ___anchor1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___anchor1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_get_session_status_async(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_get_session_status_async_m234A58335F35EA4A16F40B070D49368E5CFB758E (intptr_t ___handle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_get_session_status_async", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_get_session_status_async)(___handle0, ___result1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ___result1);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_start(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_start_m640F0FB4D09CB906F924CA61BE019403FC6D714A (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_start", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_start)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_stop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_stop_mF2C3A186368F12DE3F0DBC11039861EF21EDE42F (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_stop", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_stop)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_cloud_spatial_anchor_session_reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_cloud_spatial_anchor_session_reset_mE9415AF3E0D384B5764290F7BC5B4A81772D0817 (intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_cloud_spatial_anchor_session_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_cloud_spatial_anchor_session_reset)(___handle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0);
	#endif

	return returnValue;
}
// Microsoft.Azure.SpatialAnchors.status Microsoft.Azure.SpatialAnchors.NativeLibrary::ssc_get_error_details(System.IntPtr,System.String&,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeLibrary_ssc_get_error_details_m6218D41A86CF93FA55C65C363F6E08FB61686983 (intptr_t ___handle0, String_t** ___result_message1, String_t** ___result_requestCorrelationVector2, String_t** ___result_responseCorrelationVector3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppChar**, Il2CppChar**, Il2CppChar**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar**) + sizeof(Il2CppChar**) + sizeof(Il2CppChar**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AzureSpatialAnchors"), "ssc_get_error_details_wide", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result_message1' to native representation
	Il2CppChar* ____result_message1_empty = NULL;
	Il2CppChar** ____result_message1_marshaled = &____result_message1_empty;

	// Marshaling of parameter '___result_requestCorrelationVector2' to native representation
	Il2CppChar* ____result_requestCorrelationVector2_empty = NULL;
	Il2CppChar** ____result_requestCorrelationVector2_marshaled = &____result_requestCorrelationVector2_empty;

	// Marshaling of parameter '___result_responseCorrelationVector3' to native representation
	Il2CppChar* ____result_responseCorrelationVector3_empty = NULL;
	Il2CppChar** ____result_responseCorrelationVector3_marshaled = &____result_responseCorrelationVector3_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_AzureSpatialAnchors_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ssc_get_error_details_wide)(___handle0, ____result_message1_marshaled, ____result_requestCorrelationVector2_marshaled, ____result_responseCorrelationVector3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____result_message1_marshaled, ____result_requestCorrelationVector2_marshaled, ____result_responseCorrelationVector3_marshaled);
	#endif

	// Marshaling of parameter '___result_message1' back from native representation
	String_t* _____result_message1_marshaled_unmarshaled_dereferenced = NULL;
	_____result_message1_marshaled_unmarshaled_dereferenced = il2cpp_codegen_marshal_wstring_result(*____result_message1_marshaled);
	*___result_message1 = _____result_message1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___result_message1, (void*)____result_message1_marshaled);

	// Marshaling cleanup of parameter '___result_message1' native representation
	il2cpp_codegen_marshal_free(*____result_message1_marshaled);
	*____result_message1_marshaled = NULL;

	// Marshaling of parameter '___result_requestCorrelationVector2' back from native representation
	String_t* _____result_requestCorrelationVector2_marshaled_unmarshaled_dereferenced = NULL;
	_____result_requestCorrelationVector2_marshaled_unmarshaled_dereferenced = il2cpp_codegen_marshal_wstring_result(*____result_requestCorrelationVector2_marshaled);
	*___result_requestCorrelationVector2 = _____result_requestCorrelationVector2_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___result_requestCorrelationVector2, (void*)____result_requestCorrelationVector2_marshaled);

	// Marshaling cleanup of parameter '___result_requestCorrelationVector2' native representation
	il2cpp_codegen_marshal_free(*____result_requestCorrelationVector2_marshaled);
	*____result_requestCorrelationVector2_marshaled = NULL;

	// Marshaling of parameter '___result_responseCorrelationVector3' back from native representation
	String_t* _____result_responseCorrelationVector3_marshaled_unmarshaled_dereferenced = NULL;
	_____result_responseCorrelationVector3_marshaled_unmarshaled_dereferenced = il2cpp_codegen_marshal_wstring_result(*____result_responseCorrelationVector3_marshaled);
	*___result_responseCorrelationVector3 = _____result_responseCorrelationVector3_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___result_responseCorrelationVector3, (void*)____result_responseCorrelationVector3_marshaled);

	// Marshaling cleanup of parameter '___result_responseCorrelationVector3' native representation
	il2cpp_codegen_marshal_free(*____result_responseCorrelationVector3_marshaled);
	*____result_responseCorrelationVector3_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers::CheckStatus(System.IntPtr,Microsoft.Azure.SpatialAnchors.status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2289F1737C939FD5C0F268A12CDEF12056F4D1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CE2C17741ED25198CD318B850D1FC1948BA6904);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA8DFD923DB95CBD9ED4E17497DFF203E1F96C32);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// if (value == status.OK)
		int32_t L_0 = ___value1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// Microsoft.Azure.SpatialAnchors.status code = Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_get_error_details(handle, out message, out requestCorrelationVector, out responseCorrelationVector);
		intptr_t L_1 = ___handle0;
		int32_t L_2;
		L_2 = NativeLibrary_ssc_get_error_details_m6218D41A86CF93FA55C65C363F6E08FB61686983((intptr_t)L_1, (String_t**)(&V_0), (String_t**)(&V_1), (String_t**)(&V_2), /*hidden argument*/NULL);
		V_3 = L_2;
		// if (code == status.Failed)
		int32_t L_3 = V_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		// throw new InvalidOperationException("Unexpected error in exception handling.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral255FBA2ECA71FFA96DC210DD7D19B7E371913A64)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0020:
	{
		// else if (code != status.OK)
		int32_t L_5 = V_3;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// fullMessage = "Exception thrown and an unexpected error in exception handling.";
		V_4 = _stringLiteral2289F1737C939FD5C0F268A12CDEF12056F4D1B2;
		// }
		goto IL_005d;
	}

IL_002c:
	{
		// fullMessage = message + ". Request CV: " + requestCorrelationVector + ". Response CV: " + responseCorrelationVector + ".";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFA8DFD923DB95CBD9ED4E17497DFF203E1F96C32);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFA8DFD923DB95CBD9ED4E17497DFF203E1F96C32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11 = V_1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral2CE2C17741ED25198CD318B850D1FC1948BA6904);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2CE2C17741ED25198CD318B850D1FC1948BA6904);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		String_t* L_14 = V_2;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_13;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
	}

IL_005d:
	{
		int32_t L_17 = ___value1;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)22))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_18 = ___value1;
		switch (L_18)
		{
			case 0:
			{
				goto IL_00f7;
			}
			case 1:
			{
				goto IL_00f8;
			}
			case 2:
			{
				goto IL_0100;
			}
		}
	}
	{
		int32_t L_19 = ___value1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)12))))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_20 = ___value1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)22))))
		{
			goto IL_0110;
		}
	}
	{
		return;
	}

IL_0085:
	{
		int32_t L_21 = ___value1;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)34))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_22 = ___value1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)38))))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_23 = ___value1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)77))))
		{
			case 0:
			{
				goto IL_012d;
			}
			case 1:
			{
				goto IL_0135;
			}
			case 2:
			{
				goto IL_013f;
			}
			case 3:
			{
				goto IL_0149;
			}
			case 4:
			{
				goto IL_0153;
			}
			case 5:
			{
				goto IL_015d;
			}
			case 6:
			{
				goto IL_0167;
			}
			case 7:
			{
				goto IL_0171;
			}
			case 8:
			{
				goto IL_017b;
			}
			case 9:
			{
				goto IL_0185;
			}
			case 10:
			{
				goto IL_018f;
			}
			case 11:
			{
				goto IL_019a;
			}
			case 12:
			{
				goto IL_01a5;
			}
			case 13:
			{
				goto IL_01b0;
			}
			case 14:
			{
				goto IL_01bb;
			}
			case 15:
			{
				goto IL_01c6;
			}
			case 16:
			{
				goto IL_01d1;
			}
			case 17:
			{
				goto IL_01dc;
			}
			case 18:
			{
				goto IL_01e7;
			}
			case 19:
			{
				goto IL_01f2;
			}
			case 20:
			{
				goto IL_01fd;
			}
			case 21:
			{
				goto IL_0208;
			}
		}
	}
	{
		return;
	}

IL_00f7:
	{
		// return;
		return;
	}

IL_00f8:
	{
		// throw new InvalidOperationException(fullMessage);
		String_t* L_24 = V_4;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_25 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_25, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0100:
	{
		// throw new ObjectDisposedException(fullMessage);
		String_t* L_26 = V_4;
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_27 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_27, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0108:
	{
		// throw new OutOfMemoryException(fullMessage);
		String_t* L_28 = V_4;
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_29 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var)));
		OutOfMemoryException__ctor_m7A10A40E5051AF0288392AAEF504C394A6C5FAD2(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0110:
	{
		// throw new ArgumentException(fullMessage);
		String_t* L_30 = V_4;
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_31 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_31, L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0118:
	{
		// throw new ArgumentOutOfRangeException("", fullMessage);
		String_t* L_32 = V_4;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_33 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0125:
	{
		// throw new NotImplementedException(fullMessage);
		String_t* L_34 = V_4;
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_35 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_012d:
	{
		// throw new KeyNotFoundException(fullMessage);
		String_t* L_36 = V_4;
		KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * L_37 = (KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_m0EC42CEED5BA7A842158FFADCF05BBACF33B700D(L_37, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0135:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.MetadataTooLarge, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_38 = V_0;
		String_t* L_39 = V_1;
		String_t* L_40 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_41 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_41, 0, L_38, L_39, L_40, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_013f:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.ApplicationNotAuthenticated, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_42 = V_0;
		String_t* L_43 = V_1;
		String_t* L_44 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_45 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_45, 1, L_42, L_43, L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0149:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.ApplicationNotAuthorized, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_46 = V_0;
		String_t* L_47 = V_1;
		String_t* L_48 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_49 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_49, 2, L_46, L_47, L_48, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0153:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.ConcurrencyViolation, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_50 = V_0;
		String_t* L_51 = V_1;
		String_t* L_52 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_53 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_53, 3, L_50, L_51, L_52, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_015d:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.NotEnoughSpatialData, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_54 = V_0;
		String_t* L_55 = V_1;
		String_t* L_56 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_57 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_57, 4, L_54, L_55, L_56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0167:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.NoSpatialLocationHint, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_58 = V_0;
		String_t* L_59 = V_1;
		String_t* L_60 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_61 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_61, 5, L_58, L_59, L_60, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0171:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.CannotConnectToServer, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_62 = V_0;
		String_t* L_63 = V_1;
		String_t* L_64 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_65 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_65, 6, L_62, L_63, L_64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_017b:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.ServerError, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_66 = V_0;
		String_t* L_67 = V_1;
		String_t* L_68 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_69 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_69, 7, L_66, L_67, L_68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0185:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.AlreadyAssociatedWithADifferentStore, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_70 = V_0;
		String_t* L_71 = V_1;
		String_t* L_72 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_73 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_73, 8, L_70, L_71, L_72, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_018f:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.AlreadyExists, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_74 = V_0;
		String_t* L_75 = V_1;
		String_t* L_76 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_77 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_77, ((int32_t)9), L_74, L_75, L_76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_019a:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.NoLocateCriteriaSpecified, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_78 = V_0;
		String_t* L_79 = V_1;
		String_t* L_80 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_81 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_81, ((int32_t)10), L_78, L_79, L_80, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01a5:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.NoAccessTokenSpecified, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_82 = V_0;
		String_t* L_83 = V_1;
		String_t* L_84 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_85 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_85, ((int32_t)11), L_82, L_83, L_84, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01b0:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.UnableToObtainAccessToken, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_86 = V_0;
		String_t* L_87 = V_1;
		String_t* L_88 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_89 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_89, ((int32_t)12), L_86, L_87, L_88, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_89, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01bb:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.TooManyRequests, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_90 = V_0;
		String_t* L_91 = V_1;
		String_t* L_92 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_93 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_93, ((int32_t)13), L_90, L_91, L_92, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01c6:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.LocateCriteriaMissingRequiredValues, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_94 = V_0;
		String_t* L_95 = V_1;
		String_t* L_96 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_97 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_97, ((int32_t)14), L_94, L_95, L_96, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_97, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01d1:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.LocateCriteriaInConflict, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_98 = V_0;
		String_t* L_99 = V_1;
		String_t* L_100 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_101 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_101, ((int32_t)15), L_98, L_99, L_100, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01dc:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.LocateCriteriaInvalid, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_102 = V_0;
		String_t* L_103 = V_1;
		String_t* L_104 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_105 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_105, ((int32_t)16), L_102, L_103, L_104, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_105, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01e7:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.LocateCriteriaNotSupported, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_106 = V_0;
		String_t* L_107 = V_1;
		String_t* L_108 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_109 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_109, ((int32_t)17), L_106, L_107, L_108, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_109, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01f2:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.Unknown, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_110 = V_0;
		String_t* L_111 = V_1;
		String_t* L_112 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_113 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_113, ((int32_t)19), L_110, L_111, L_112, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_01fd:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.HttpTimeout, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_114 = V_0;
		String_t* L_115 = V_1;
		String_t* L_116 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_117 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_117, ((int32_t)20), L_114, L_115, L_116, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}

IL_0208:
	{
		// throw new CloudSpatialException(CloudSpatialErrorCode.InvalidAnchorTransformRigidity, message, requestCorrelationVector, responseCorrelationVector);
		String_t* L_118 = V_0;
		String_t* L_119 = V_1;
		String_t* L_120 = V_2;
		CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 * L_121 = (CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CloudSpatialException_t0D51F010B5D03F5317C347AC2735D2039C2215B4_il2cpp_TypeInfo_var)));
		CloudSpatialException__ctor_m7606E16E4A92E43EBBC207D2C68B8C6C1D5B8F8D(L_121, ((int32_t)21), L_118, L_119, L_120, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_121, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugDelegate__ctor_mCB96B023B95AA467AAC0A8B50101B03C1D31F6E6 (OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugDelegate_Invoke_mC7884BE747188FC9358E41ED44E2E1514D0859CA (OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * __this, RuntimeObject * ___sender0, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate::BeginInvoke(System.Object,Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnLogDebugDelegate_BeginInvoke_mC900150F9BAF4E548D2BBCB5A45407DF8EBD04BE (OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * __this, RuntimeObject * ___sender0, OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugDelegate_EndInvoke_mA1EC1CC27FF84B25BECAA23F8E221A7B6F7CF58A (OnLogDebugDelegate_t41B5853FC61DC3A7F697D2C2EB4ACC3BCD53F3BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 (OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint64_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___cookie0, ___args1);

}
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugDelegateNative__ctor_mA52D62F3C52926DEB9D37507C044FE1428915FC4 (OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative::Invoke(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugDelegateNative_Invoke_m0A6369839080F4186AAF85DA5857E6432BC90583 (OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cookie0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
					else
						GenericVirtActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cookie0, ___args1);
					else
						VirtActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cookie0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnLogDebugDelegateNative_BeginInvoke_mCE0380325F8C6FF7DEFABFDC2BDF5C866F105FAB (OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * __this, uint64_t ___cookie0, intptr_t ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___cookie0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugDelegateNative_EndInvoke_m20CBFB87A57EA028666EDB809331CA1E8E324E81 (OnLogDebugDelegateNative_t348C93A689D4E97A6AAADD99C638761B4CC60116 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugEventArgs__ctor_m5E9C80CEB6D82F6380568FD5E70FB47D2C0C0755 (OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal OnLogDebugEventArgs(IntPtr ahandle, bool transfer)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_1((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_on_log_debug_event_args_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_on_log_debug_event_args_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_on_log_debug_event_args_addref_mDA7B022250AA87F35C567035AEB1856AEEF37852((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLogDebugEventArgs_Finalize_m092BBB8A0CF18B3ED2BAC5D8E0FE4A5F2C2B99AD (OnLogDebugEventArgs_t9FFD8A004D1D3216B46D51CA360730474AA4C3EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_on_log_debug_event_args_release(this.handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_on_log_debug_event_args_release_m1E8E7A5D40A033142A957D3D460C15DF0ED46AEF((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_1((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorFingerprintEventArgs__ctor_m2AA3FD6469E09C81292528D7B6A6A768F7BD29FB (SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SensorFingerprintEventArgs(IntPtr ahandle, bool transfer)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_1((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_fingerprint_event_args_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_fingerprint_event_args_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_sensor_fingerprint_event_args_addref_mAFEB2522453E2F91360539D68E35A2BE4E8C58FC((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorFingerprintEventArgs_Finalize_mBE55FF007729AE41976ED1D1CCA19BA2B72B516E (SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_fingerprint_event_args_release(this.handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_sensor_fingerprint_event_args_release_m7CDE3F001C350603A417896448115A36EE8ABB6A((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_1((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.SessionConfiguration::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionConfiguration__ctor_m23C0BED787081216B1502566B1F1052D47B4E4EF (SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	{
		// internal SessionConfiguration(IntPtr ahandle, bool transfer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_0((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_session_configuration_addref_m2184B84335B7AF9DD6B542316BB083EA7AA01DE0((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionConfiguration::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionConfiguration_Finalize_m21DC577930800FA156590F38A102D1ECFE5AB0F3 (SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_release(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_session_configuration_release_m90814278C4FA09A25F8C830461EAC2DD426E414D((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_0((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionConfiguration::set_AccountDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionConfiguration_set_AccountDomain_mB6B171F73937260EDA1A32C7373F208FC5EA56C8 (SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_set_account_domain(this.handle, value));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		String_t* L_2 = ___value0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_session_configuration_set_account_domain_mC4EAD680F9BA7397468E7000EF35DFBB13015E67((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionConfiguration::set_AccountId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionConfiguration_set_AccountId_m28EBF97E6EE8D51F00D146A8C5DD8CD474F48B68 (SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_set_account_id(this.handle, value));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		String_t* L_2 = ___value0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_session_configuration_set_account_id_mC3041094B2413492710FD52222B19DDBC23E0C9F((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionConfiguration::set_AccountKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionConfiguration_set_AccountKey_mC4BBA5B9F5D421690836B4E2E21EF77DA8F6BFB8 (SessionConfiguration_tC4806BD0D5A49DE7C8C0B8FCE3B1B95D8994BEF2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_set_account_key(this.handle, value));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		String_t* L_2 = ___value0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_session_configuration_set_account_key_m8B850EA75C1D1F2D6ADDBD58794B918A2CB3BA28((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorDelegate__ctor_m7901578A724F4E9F4E60C146727357472D2A6AC9 (SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorDelegate_Invoke_m109DE1741BC17627558DD61BB1F7424A739CA041 (SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * __this, RuntimeObject * ___sender0, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.SessionErrorDelegate::BeginInvoke(System.Object,Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SessionErrorDelegate_BeginInvoke_m40615074447867D0488AB39619C21BA4282DA600 (SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * __this, RuntimeObject * ___sender0, SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorDelegate_EndInvoke_m13734DC83809B29676DEF0F52DE5A02D01640455 (SessionErrorDelegate_tE0A36A47233546A0AC10AA9E7E968EFA1E4D701E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B (SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint64_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___cookie0, ___args1);

}
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorDelegateNative__ctor_m27FB558B34FC472D3420AFD6D0174888B5BD80B9 (SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative::Invoke(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorDelegateNative_Invoke_m4C75EEEB66CAE69A3D8B70E92E0447202EDA6622 (SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cookie0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
					else
						GenericVirtActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cookie0, ___args1);
					else
						VirtActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cookie0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SessionErrorDelegateNative_BeginInvoke_m355CDAF28B21BA47C201A6F9468C22130094FF3B (SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * __this, uint64_t ___cookie0, intptr_t ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___cookie0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorDelegateNative_EndInvoke_mD73E5C43B8461CFCC17F3324A7382D63A95A6B5A (SessionErrorDelegateNative_t47E85E2AE4CF26255DB45ADFD6B92629056E1C7B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorEventArgs__ctor_m5F84EF10D18CD4F263AF8608E5CEEAC235847E44 (SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SessionErrorEventArgs(IntPtr ahandle, bool transfer)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_1((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_error_event_args_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_error_event_args_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_session_error_event_args_addref_mDCA6E2BCC841DEC06B6A5F99A2AB513505CCDD2E((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionErrorEventArgs_Finalize_mF58C243359A29327CCBF77F9AA3DC2AD83F4B073 (SessionErrorEventArgs_tBC6BD7D553FA7F076DDB179DBBC576D276D8482F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_error_event_args_release(this.handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_session_error_event_args_release_mE7E5478048CEB32AA2BB398868DBC8E6D4B0CEFB((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_1((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.Azure.SpatialAnchors.SessionStatus::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStatus__ctor_m4856914EB82E254F0F0EA2B05D304583A06E317B (SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	{
		// internal SessionStatus(IntPtr ahandle, bool transfer)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_0((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_session_status_addref_mA2A5DC88FAC358C9D7FE60F51D7B31244BE5D619((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionStatus::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStatus_Finalize_mF7D2A770B24A126027DD4D6C0CB019557687B935 (SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_release(this.handle));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_session_status_release_m25D664F58280521504183619CB66FB6AE91058F4((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_0((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Single Microsoft.Azure.SpatialAnchors.SessionStatus::get_RecommendedForCreateProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SessionStatus_get_RecommendedForCreateProgress_mA52A25B4EF14AB5DAF292373C4338808A75EE5AB (SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_get_recommended_for_create_progress(this.handle, out result));
		intptr_t L_0 = __this->get_handle_0();
		intptr_t L_1 = __this->get_handle_0();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_session_status_get_recommended_for_create_progress_m010CEBE78DAA16636F3F2B982B99928142ACAE1D((intptr_t)L_1, (float*)(&V_0), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// return result;
		float L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedDelegate__ctor_m0CD8239956416C11EE08AAD827312D18864E9A5B (SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedDelegate_Invoke_mD09A39FED81D43A0519542EDC97219E917822833 (SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * __this, RuntimeObject * ___sender0, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate::BeginInvoke(System.Object,Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SessionUpdatedDelegate_BeginInvoke_m363498CA32A0FADC03B36D76EE4EABA6B67AF97F (SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * __this, RuntimeObject * ___sender0, SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedDelegate_EndInvoke_m66F8BE75820EE6D6B156E62402D91B8960C35001 (SessionUpdatedDelegate_tD67BE8F2854C1D0B6FEF4EF4D5B63BA82F61BDE0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C (SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint64_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___cookie0, ___args1);

}
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedDelegateNative__ctor_mAA9609436B9A6331F3769870B3CBEB70717A3214 (SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative::Invoke(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedDelegateNative_Invoke_mB48458EC4BA6D521AADBA1A79A828B9E0F7639EF (SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cookie0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
					else
						GenericVirtActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cookie0, ___args1);
					else
						VirtActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cookie0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SessionUpdatedDelegateNative_BeginInvoke_m91EC6ED762BE3EE31C5BF8C87D12CA3C9408B5E1 (SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * __this, uint64_t ___cookie0, intptr_t ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___cookie0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedDelegateNative_EndInvoke_m9BADCEDFF992E4B30FD78B75BAF13A938D841A64 (SessionUpdatedDelegateNative_tADEA247BC7CC4376F3A0D6CF90CA61AF27124B4C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedEventArgs__ctor_m0A958EFBC1AD297AEC54308BA9E56BA62E2A9946 (SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SessionUpdatedEventArgs(IntPtr ahandle, bool transfer)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_1((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_updated_event_args_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_updated_event_args_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_session_updated_event_args_addref_mE2A23C528D506CC6BFF999FC06569F5A231CA202((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdatedEventArgs_Finalize_m4EDB19CDB695DC5D34529EC99C4958FE7DE338CA (SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_updated_event_args_release(this.handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_session_updated_event_args_release_m039699EC5BB415D95D668C432EBDD48D2C28E849((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_1((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
// Microsoft.Azure.SpatialAnchors.SessionStatus Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * SessionUpdatedEventArgs_get_Status_m68C56BF98FD68D4466C49BF2610C44FD70D92A5C (SessionUpdatedEventArgs_tCE57C6E5BCE313D16B632E5CBD2B041FA4011B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_updated_event_args_get_status(this.handle, out result_handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_session_updated_event_args_get_status_m27F4065283F1BC5962A4225A4899C76BAD7FBCE5((intptr_t)L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.SessionStatus(result_handle, transfer:true) : null;
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		return (SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF *)NULL;
	}

IL_0027:
	{
		intptr_t L_5 = V_0;
		SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * L_6 = (SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF *)il2cpp_codegen_object_new(SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_il2cpp_TypeInfo_var);
		SessionStatus__ctor_m4856914EB82E254F0F0EA2B05D304583A06E317B(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
		// return result_object;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredDelegate__ctor_m75A9FAAB7B74F227D3BE78A4EB6F575B825D565E (TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredDelegate_Invoke_mE70B72E5703A61C49DE5F08704A82D86200E26EA (TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * __this, RuntimeObject * ___sender0, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate::BeginInvoke(System.Object,Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenRequiredDelegate_BeginInvoke_m6A034FD4304B1B40BA885914BE049CCE0D797E61 (TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * __this, RuntimeObject * ___sender0, TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredDelegate_EndInvoke_mC01B5533805B49F54FAE55F4B738AA9A19557FDE (TokenRequiredDelegate_t70A4360AC991AA247E387C0D21977CE65A95D266 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB (TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint64_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___cookie0, ___args1);

}
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredDelegateNative__ctor_m66B72CA43B3AB3D1F36C30DFB00D58C375C4B3D7 (TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative::Invoke(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredDelegateNative_Invoke_m5D32F580731F9A5C79916DF3284FFC24BEEDD86D (TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cookie0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
					else
						GenericVirtActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cookie0, ___args1);
					else
						VirtActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cookie0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TokenRequiredDelegateNative_BeginInvoke_mB624B0F57B3C50B8E50C36ED7CCE0215193E46ED (TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * __this, uint64_t ___cookie0, intptr_t ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___cookie0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredDelegateNative_EndInvoke_m65DD240BC78ED1883DBEA31168853622A06B749B (TokenRequiredDelegateNative_tDAF9E4ACF4803BA2248991E843ED9359ED40EEEB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredEventArgs__ctor_mFF207B362C02DFBC435AD5FDD0F569670CE7E32C (TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * __this, intptr_t ___ahandle0, bool ___transfer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal TokenRequiredEventArgs(IntPtr ahandle, bool transfer)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		// this.handle = ahandle;
		intptr_t L_0 = ___ahandle0;
		__this->set_handle_1((intptr_t)L_0);
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_addref(ahandle);
		bool L_1 = ___transfer1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_addref(ahandle);
		intptr_t L_2 = ___ahandle0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_token_required_event_args_addref_m4E05639E6BD5A6D29162D2308D1A02835B7D3941((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredEventArgs_Finalize_m708F46B5172536085B62A01C683F8E39E5E4E072 (TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_release(this.handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_token_required_event_args_release_m86A9288AED53CDAA1AEA893BCC368DD174F18BA8((intptr_t)L_1, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// this.handle = IntPtr.Zero;
		__this->set_handle_1((intptr_t)(0));
		IL2CPP_LEAVE(0x2A, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(35)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A, IL_002a)
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs::set_AuthenticationToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenRequiredEventArgs_set_AuthenticationToken_m3014D84F713A33D1F0DAA16E1C7610501886942B (TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_set_authentication_token(this.handle, value));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		String_t* L_2 = ___value0;
		int32_t L_3;
		L_3 = NativeLibrary_ssc_token_required_event_args_set_authentication_token_mDDC8FC85C8FA4C0AADEE6AEF4B70750722BB9E22((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs::GetDeferral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE * TokenRequiredEventArgs_GetDeferral_mD1379602722EA452E77C8493BACD6EF606FC8FE4 (TokenRequiredEventArgs_t997C7BFBB58FC2C5B3AFBEB7AB283E0059F88B60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_get_deferral(this.handle, out result_handle));
		intptr_t L_0 = __this->get_handle_1();
		intptr_t L_1 = __this->get_handle_1();
		int32_t L_2;
		L_2 = NativeLibrary_ssc_token_required_event_args_get_deferral_mFD4D0BF54F572A6091933D141247D6AAC8F47D80((intptr_t)L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		// result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral(result_handle, transfer:true) : null;
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		return (CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE *)NULL;
	}

IL_0027:
	{
		intptr_t L_5 = V_0;
		CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE * L_6 = (CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE *)il2cpp_codegen_object_new(CloudSpatialAnchorSessionDeferral_t7629B303DC7F9C6160BC7C24F3DAB627BC9190CE_il2cpp_TypeInfo_var);
		CloudSpatialAnchorSessionDeferral__ctor_mCFEE4DEE621C9ABD900772C31CA50BA51A684C5D(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
		// return result_object;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedSensorFingerprintRequiredDelegate__ctor_mC1F859FF1F111CB38B674B4A1325276218C2091A (UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate::Invoke(System.Object,Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedSensorFingerprintRequiredDelegate_Invoke_mAAE63D71A2500853220F5CCAC915D4CA6A137C49 (UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * __this, RuntimeObject * ___sender0, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * >::Invoke(targetMethod, ___sender0, ___args1);
					else
						GenericVirtActionInvoker1< SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * >::Invoke(targetMethod, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
					else
						VirtActionInvoker1< SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate::BeginInvoke(System.Object,Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdatedSensorFingerprintRequiredDelegate_BeginInvoke_m715227F583A2D37E6DD0D8759718D8D330735525 (UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * __this, RuntimeObject * ___sender0, SensorFingerprintEventArgs_tC2D10DC671B9190FD90C8B3E4B9358EEAFDC5461 * ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedSensorFingerprintRequiredDelegate_EndInvoke_mE52D42185E05D4782348D08955F1B28C32AA808F (UpdatedSensorFingerprintRequiredDelegate_t9FFD9542FE3966A12CB9A13394A156A1EA357C19 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 (UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint64_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___cookie0, ___args1);

}
// System.Void Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedSensorFingerprintRequiredDelegateNative__ctor_m08E022D1F6D5699AEE8FB305E86C120DD315B74B (UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative::Invoke(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedSensorFingerprintRequiredDelegateNative_Invoke_mBC62E882429117C32ADB751205CBBF13CC6CBA4A (UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * __this, uint64_t ___cookie0, intptr_t ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cookie0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
					else
						GenericVirtActionInvoker2< uint64_t, intptr_t >::Invoke(targetMethod, targetThis, ___cookie0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cookie0, ___args1);
					else
						VirtActionInvoker2< uint64_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cookie0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cookie0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative::BeginInvoke(System.UInt64,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdatedSensorFingerprintRequiredDelegateNative_BeginInvoke_mD372943A84C60AA2A786B2471DBD23CE54220688 (UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * __this, uint64_t ___cookie0, intptr_t ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___cookie0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedSensorFingerprintRequiredDelegateNative_EndInvoke_m4F148DE274C5B9D7F48D5D36F67E90B7C14DF504 (UpdatedSensorFingerprintRequiredDelegateNative_t0F6719A83BFCE68FB645C34804647F18FC54C224 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6E2D147E5C41BD953B3E270432540C641287653E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 * L_0 = (U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 *)il2cpp_codegen_object_new(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9E5DEE10A5309264E45343D3EDE35AAA866267BD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9E5DEE10A5309264E45343D3EDE35AAA866267BD (U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c::<GetActiveWatchers>b__89_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9 * U3CU3Ec_U3CGetActiveWatchersU3Eb__89_0_m7749DDD8EF11F649B04DB4A29F653523AF330BD1 (U3CU3Ec_t3D0CFF0E9589316ADB7E5A02A11E8561855B6ED9 * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = result_array.Take(result_count).Select(handle => new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher(handle, transfer:true)).ToList().AsReadOnly();
		intptr_t L_0 = ___handle0;
		CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9 * L_1 = (CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9 *)il2cpp_codegen_object_new(CloudSpatialAnchorWatcher_t1084A2771602AA403BF855F4917F9D5F452C61D9_il2cpp_TypeInfo_var);
		CloudSpatialAnchorWatcher__ctor_mF036166F758F5315D865BF3A9738AD07DFB15845(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass85_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass85_0__ctor_m65D2341484EC1BF072EB790EC0CF04FD288A0C1A (U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass85_0::<CreateAnchorAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass85_0_U3CCreateAnchorAsyncU3Eb__0_m02491106FF8B5C25C2DACEA67ACA39054C7A8D67 (U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	intptr_t G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_create_anchor_async(this.handle, anchor != null ? anchor.handle : IntPtr.Zero));
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		intptr_t L_1 = L_0->get_handle_0();
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		intptr_t L_3 = L_2->get_handle_0();
		CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_4 = __this->get_anchor_1();
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = (0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0030;
	}

IL_0025:
	{
		CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_5 = __this->get_anchor_1();
		NullCheck(L_5);
		intptr_t L_6 = L_5->get_handle_0();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0030:
	{
		int32_t L_7;
		L_7 = NativeLibrary_ssc_cloud_spatial_anchor_session_create_anchor_async_m82DDA458D573CC380DC09894A281C9E00E1D2294((intptr_t)G_B3_1, (intptr_t)G_B3_0, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)G_B3_2, L_7, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass92_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass92_0__ctor_m3453BE032A106C07D81BBEF30C5051352A8C2B2C (U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<>c__DisplayClass92_0::<DeleteAnchorAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass92_0_U3CDeleteAnchorAsyncU3Eb__0_mE348BCD0A05AA7FEBC17B26CFAC0E0588B4CAB96 (U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	intptr_t G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_delete_anchor_async(this.handle, anchor != null ? anchor.handle : IntPtr.Zero));
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		intptr_t L_1 = L_0->get_handle_0();
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		intptr_t L_3 = L_2->get_handle_0();
		CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_4 = __this->get_anchor_1();
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = (0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0030;
	}

IL_0025:
	{
		CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_5 = __this->get_anchor_1();
		NullCheck(L_5);
		intptr_t L_6 = L_5->get_handle_0();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0030:
	{
		int32_t L_7;
		L_7 = NativeLibrary_ssc_cloud_spatial_anchor_session_delete_anchor_async_m887BFEF2657B3EBC3593DC3263BF21AA01079A94((intptr_t)G_B3_1, (intptr_t)G_B3_0, /*hidden argument*/NULL);
		NativeLibraryHelpers_CheckStatus_mCED8EAE60E5B2190E1BB7206B952B0E49149F030((intptr_t)G_B3_2, L_7, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAnchorAsyncU3Ed__85_MoveNext_mBE2ECD0DC023222E17A5F87F970003217E99147A (U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m4A5FE81EC2DEEF61B19C369A32AF413A25D3E6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass85_0_U3CCreateAnchorAsyncU3Eb__0_m02491106FF8B5C25C2DACEA67ACA39054C7A8D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0066;
			}
		}

IL_000a:
		{
			U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094 * L_2 = (U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass85_0__ctor_m65D2341484EC1BF072EB790EC0CF04FD288A0C1A(L_2, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094 * L_3 = L_2;
			CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_4 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			L_3->set_U3CU3E4__this_0(L_4);
			U3CU3Ec__DisplayClass85_0_t4BB1CA1EB957D1FDF9185966CB4FAA2C05AED094 * L_5 = L_3;
			CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_6 = __this->get_anchor_3();
			NullCheck(L_5);
			L_5->set_anchor_1(L_6);
			// await Task.Run(() =>
			// {
			//     Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_create_anchor_async(this.handle, anchor != null ? anchor.handle : IntPtr.Zero));
			// });
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass85_0_U3CCreateAnchorAsyncU3Eb__0_m02491106FF8B5C25C2DACEA67ACA39054C7A8D67_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
			L_8 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9;
			L_9 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0082;
			}
		}

IL_0046:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = V_1;
			__this->set_U3CU3Eu__1_4(L_12);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m4A5FE81EC2DEEF61B19C369A32AF413A25D3E6F5((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_13, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736_m4A5FE81EC2DEEF61B19C369A32AF413A25D3E6F5_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_0066:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = __this->get_U3CU3Eu__1_4();
			V_1 = L_14;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_15 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0082:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	} // end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateAnchorAsyncU3Ed__85_MoveNext_mBE2ECD0DC023222E17A5F87F970003217E99147A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * _thisAdjusted = reinterpret_cast<U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 *>(__this + _offset);
	U3CCreateAnchorAsyncU3Ed__85_MoveNext_mBE2ECD0DC023222E17A5F87F970003217E99147A(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<CreateAnchorAsync>d__85::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateAnchorAsyncU3Ed__85_SetStateMachine_m6A8258FB51AA8A23077FFD9644F7AD57D2F69E1F (U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateAnchorAsyncU3Ed__85_SetStateMachine_m6A8258FB51AA8A23077FFD9644F7AD57D2F69E1F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 * _thisAdjusted = reinterpret_cast<U3CCreateAnchorAsyncU3Ed__85_t670BBA66AFEA4B6211A82388F6F46A739EF7B736 *>(__this + _offset);
	U3CCreateAnchorAsyncU3Ed__85_SetStateMachine_m6A8258FB51AA8A23077FFD9644F7AD57D2F69E1F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAnchorAsyncU3Ed__92_MoveNext_mC061679BDC73187CED416303B1DD1DD073AC6E37 (U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_mB4B1AC2DAEF72DEFF81B82CD7910755599DA174B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass92_0_U3CDeleteAnchorAsyncU3Eb__0_mE348BCD0A05AA7FEBC17B26CFAC0E0588B4CAB96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0066;
			}
		}

IL_000a:
		{
			U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206 * L_2 = (U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass92_0__ctor_m3453BE032A106C07D81BBEF30C5051352A8C2B2C(L_2, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206 * L_3 = L_2;
			CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_4 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			L_3->set_U3CU3E4__this_0(L_4);
			U3CU3Ec__DisplayClass92_0_tB148A995D6B5868E627020B7F0F2E8B238195206 * L_5 = L_3;
			CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * L_6 = __this->get_anchor_3();
			NullCheck(L_5);
			L_5->set_anchor_1(L_6);
			// await Task.Run(() =>
			// {
			//     Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_delete_anchor_async(this.handle, anchor != null ? anchor.handle : IntPtr.Zero));
			// });
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass92_0_U3CDeleteAnchorAsyncU3Eb__0_mE348BCD0A05AA7FEBC17B26CFAC0E0588B4CAB96_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
			L_8 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9;
			L_9 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0082;
			}
		}

IL_0046:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = V_1;
			__this->set_U3CU3Eu__1_4(L_12);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_mB4B1AC2DAEF72DEFF81B82CD7910755599DA174B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_13, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763_mB4B1AC2DAEF72DEFF81B82CD7910755599DA174B_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_0066:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = __this->get_U3CU3Eu__1_4();
			V_1 = L_14;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_15 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_0082:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	} // end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteAnchorAsyncU3Ed__92_MoveNext_mC061679BDC73187CED416303B1DD1DD073AC6E37_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * _thisAdjusted = reinterpret_cast<U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 *>(__this + _offset);
	U3CDeleteAnchorAsyncU3Ed__92_MoveNext_mC061679BDC73187CED416303B1DD1DD073AC6E37(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<DeleteAnchorAsync>d__92::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteAnchorAsyncU3Ed__92_SetStateMachine_mBCDF98A605639907A6006B0C95FE0ABA86E99CB0 (U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDeleteAnchorAsyncU3Ed__92_SetStateMachine_mBCDF98A605639907A6006B0C95FE0ABA86E99CB0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 * _thisAdjusted = reinterpret_cast<U3CDeleteAnchorAsyncU3Ed__92_tF34FE3DD921D8868E816A29CDB1458FAF321C763 *>(__this + _offset);
	U3CDeleteAnchorAsyncU3Ed__92_SetStateMachine_mBCDF98A605639907A6006B0C95FE0ABA86E99CB0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionStatusAsyncU3Ed__93_MoveNext_mFE0DE46720E8F2E2FAE82AC4E9B1DE1C35BAB098 (U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_m7C684BC4E4A025992D735D6C54A9D3BB3988F1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m193317B84A50FEED9C15BA9D6241A51272F28530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudSpatialAnchorSession_U3CGetSessionStatusAsyncU3Eb__93_0_mE5E9876BD5CBF82BAB72C989B9E045A3A5B0389D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m70CD8B46F1B146410ED8773C1FF4C882327E9BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m9004D584DCBCC105C798D2E5FC79DCD752CE8F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m319F1AF0C68450C7E35A72FA0855A242442EC268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7C1DB4BC3271066432B742144E9C2A0EFFF16B6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisSessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_m95667516390D6C8D9B739BFC8D0AD732875868C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * V_1 = NULL;
	SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * V_2 = NULL;
	TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051;
			}
		}

IL_0011:
		{
			// return await Task.Run(() =>
			// {
			//     IntPtr result_handle;
			//     Microsoft.Azure.SpatialAnchors.SessionStatus result_object;
			//     Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_session_status_async(this.handle, out result_handle));
			//     result_object = new Microsoft.Azure.SpatialAnchors.SessionStatus(result_handle, transfer:true);
			//     return result_object;
			// });
			CloudSpatialAnchorSession_tA71B2460BEFD6D2F80236B2506272152F826ABB0 * L_3 = V_1;
			Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC * L_4 = (Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC *)il2cpp_codegen_object_new(Func_1_t7F5F5CE8FBF6B91A46321BEF919F3621E2930CCC_il2cpp_TypeInfo_var);
			Func_1__ctor_m70CD8B46F1B146410ED8773C1FF4C882327E9BCB(L_4, L_3, (intptr_t)((intptr_t)CloudSpatialAnchorSession_U3CGetSessionStatusAsyncU3Eb__93_0_mE5E9876BD5CBF82BAB72C989B9E045A3A5B0389D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m70CD8B46F1B146410ED8773C1FF4C882327E9BCB_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA * L_5;
			L_5 = Task_Run_TisSessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_m95667516390D6C8D9B739BFC8D0AD732875868C1(L_4, /*hidden argument*/Task_Run_TisSessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF_m95667516390D6C8D9B739BFC8D0AD732875868C1_RuntimeMethod_var);
			NullCheck(L_5);
			TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  L_6;
			L_6 = Task_1_GetAwaiter_m7C1DB4BC3271066432B742144E9C2A0EFFF16B6E(L_5, /*hidden argument*/Task_1_GetAwaiter_m7C1DB4BC3271066432B742144E9C2A0EFFF16B6E_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_m319F1AF0C68450C7E35A72FA0855A242442EC268((TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m319F1AF0C68450C7E35A72FA0855A242442EC268_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006d;
			}
		}

IL_0031:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  L_9 = V_3;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_m7C684BC4E4A025992D735D6C54A9D3BB3988F1A1((AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *)L_10, (TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE *)(&V_3), (U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE_TisU3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB_m7C684BC4E4A025992D735D6C54A9D3BB3988F1A1_RuntimeMethod_var);
			goto IL_00a4;
		}

IL_0051:
		{
			TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE  L_11 = __this->get_U3CU3Eu__1_3();
			V_3 = L_11;
			TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006d:
		{
			SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * L_14;
			L_14 = TaskAwaiter_1_GetResult_m9004D584DCBCC105C798D2E5FC79DCD752CE8F33((TaskAwaiter_1_tFB9A2C6BC00D22C6D7DAC94B7A6A11481ED0DEDE *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m9004D584DCBCC105C798D2E5FC79DCD752CE8F33_RuntimeMethod_var);
			V_2 = L_14;
			goto IL_0090;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_16 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mF8D42ED09B03E8A714020A09EB03891407A125AB((AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *)L_15, L_16, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF8D42ED09B03E8A714020A09EB03891407A125AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a4;
	} // end catch (depth: 1)

IL_0090:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * L_18 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m193317B84A50FEED9C15BA9D6241A51272F28530((AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *)L_17, L_18, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m193317B84A50FEED9C15BA9D6241A51272F28530_RuntimeMethod_var);
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionStatusAsyncU3Ed__93_MoveNext_mFE0DE46720E8F2E2FAE82AC4E9B1DE1C35BAB098_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * _thisAdjusted = reinterpret_cast<U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB *>(__this + _offset);
	U3CGetSessionStatusAsyncU3Ed__93_MoveNext_mFE0DE46720E8F2E2FAE82AC4E9B1DE1C35BAB098(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession/<GetSessionStatusAsync>d__93::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSessionStatusAsyncU3Ed__93_SetStateMachine_m24D5E6F079F9E58C5374F978B30F9529430FE2BE (U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m278873A9D9E0508E740C59A19A6BD44BA60FC61F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m278873A9D9E0508E740C59A19A6BD44BA60FC61F((AsyncTaskMethodBuilder_1_t05C0531D7C8C5D8FCE689854EC681A06349E267D *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m278873A9D9E0508E740C59A19A6BD44BA60FC61F_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSessionStatusAsyncU3Ed__93_SetStateMachine_m24D5E6F079F9E58C5374F978B30F9529430FE2BE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB * _thisAdjusted = reinterpret_cast<U3CGetSessionStatusAsyncU3Ed__93_t0BBC5EACE233522E13A03F678CB79A582A8A46AB *>(__this + _offset);
	U3CGetSessionStatusAsyncU3Ed__93_SetStateMachine_m24D5E6F079F9E58C5374F978B30F9529430FE2BE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
