#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Byte[]>
struct Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1;
// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90;
// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941;
// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_t1FE41E5A9AD1036B100A0B1C10765E08A99E5D81;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453;
// System.Action`2<WebSocketSharp.LogData,System.String>
struct Action_2_t1B631FB624E5E5C57DCC77E4970A47D8BC620FD9;
// System.Action`4<System.Object,System.Object,System.Object,System.Object>
struct Action_4_tDB82015AB9EE6C7A4D051C5068F94F41BD15DE0D;
// System.Action`4<System.String,System.String,System.String,System.String>
struct Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t8235C75AFA281CB8F4C1770A4414C7B3B05FFB36;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_tC33379D6C1D34C3505367ACBCA044A8215F4818D;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_tB008302FB922AA76D1ADD8304EACE6CDF5C344F8;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_tC1E6007DDD30E46CD9EDAB1F4D341FE8DBB13089;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_tCA5A17940F79607E2EEACED1AB20E54085EF9868;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// WebSocketSharp.Logger
struct Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// WebSocketSharp.PayloadData
struct PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WebSocketSharp.WebSocket
struct WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t33B08F6FCD5F31523719A6DD3C18A6ECBC8D18F2;
// WebSocketSharp.WebSocketException
struct WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37;
// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062;
// WebSocketSharp.Net.AuthenticationResponse/<>c
struct U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939;
// WebSocketSharp.Ext/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t65BF4E709B67B3A4194FE009521F044B276F3521;
// WebSocketSharp.Ext/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5;
// WebSocketSharp.Ext/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140;
// WebSocketSharp.Ext/<>c__DisplayClass58_1
struct U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43;
// WebSocketSharp.Ext/<SplitHeaderValue>d__60
struct U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894;
// WebSocketSharp.HttpBase/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t559B3D847459DBCB7927AC97854203BE0F2434D4;
// WebSocketSharp.PayloadData/<GetEnumerator>d__25
struct U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// WebSocketSharp.WebSocket/<>c
struct U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050;
// WebSocketSharp.WebSocket/<>c__DisplayClass174_0
struct U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3;
// WebSocketSharp.WebSocket/<>c__DisplayClass176_0
struct U3CU3Ec__DisplayClass176_0_t18332CFB5D194AADD2180125EF742E4AA54770AE;
// WebSocketSharp.WebSocket/<>c__DisplayClass177_0
struct U3CU3Ec__DisplayClass177_0_tE87D692432B89B0680F4CC8BBAAC85A3FA9C8267;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_1
struct U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_tD474E1CD75D56DAF84A260C3EAC068CF4BCB7F5F;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_t524F10983D8B545537E673755B2D6296459FDF20;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_t1057EB2B08FE65FF828568017E4A41F9BA3A1396;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_t433F53A4E1AF13F236264CA7D57C25A2841386F7;
// WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0
struct U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812;
// WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84
struct U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05EE84C28CC3F94DE861A55800284B34115C4B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral089CEAF9555BAF2295EDAC24268380608D558B60;
IL2CPP_EXTERN_C String_t* _stringLiteral44B2B5EE14208A9AC8F2D65D8D3FF9177FB04899;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2ECDC0A2A9BA225C3FC6116423FBB91A59FB9B;
IL2CPP_EXTERN_C String_t* _stringLiteral872863942A17DEDCD0300265682277E23AC55930;
IL2CPP_EXTERN_C String_t* _stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5;
IL2CPP_EXTERN_C String_t* _stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE33CD23AFA1DE339E2E22FD222E57B9BB3B75D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m64536D08F5178F786F82EC283FFEAEFAF0D7CBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__84_System_Collections_IEnumerator_Reset_m25F46351DB582AC899E00D5E5D95198CC9F8547E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSplitHeaderValueU3Ed__60_System_Collections_IEnumerator_Reset_mB4CDEA29103BF6C753658361B7B09AE7217BAD2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CreadHeadersU3Eb__0_mE8A17649C0801D62BC7D7DE0220788C1C5DBA559_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__1_mB8BE27893978CEB871992FFC225B5FBE2B99AFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__2_mDD468AB43D68AB92AD763277D316325C36BB6CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass58_1_U3CReadBytesAsyncU3Eb__1_m72FD3C096ABF25DFD4CAD72B7676666B614EC89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass65_1_U3CdumpU3Eb__1_mE4C1EAE3820206DA502B638776F2D9D8C164A59E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass69_0_U3CreadExtendedPayloadLengthAsyncU3Eb__0_m41B3DEFF4AE1756D5F86B0D555AB4DBC9CC7580E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass73_0_U3CreadMaskingKeyAsyncU3Eb__0_m265A9E8A89F6690153686F4639EBFF86F1C7EDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass75_0_U3CreadPayloadDataAsyncU3Eb__0_mC54D0616E3289301099C151E9BC011A500032619_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__1_mEC261755B582BAC0AA40C2BADC725D1946ED1AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__2_m04D9031A2F5E63BECE18197FEFA7FE4BBBC74F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__3_m510DA8E8CFEB50AC60306ED0F49690E4B4EC59C1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____items_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// WebSocketSharp.Ext
struct Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D  : public RuntimeObject
{
public:

public:
};

struct Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_StaticFields
{
public:
	// System.Byte[] WebSocketSharp.Ext::_last
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____last_0;
	// System.Int32 WebSocketSharp.Ext::_retry
	int32_t ____retry_1;

public:
	inline static int32_t get_offset_of__last_0() { return static_cast<int32_t>(offsetof(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_StaticFields, ____last_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__last_0() const { return ____last_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__last_0() { return &____last_0; }
	inline void set__last_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____last_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____last_0), (void*)value);
	}

	inline static int32_t get_offset_of__retry_1() { return static_cast<int32_t>(offsetof(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_StaticFields, ____retry_1)); }
	inline int32_t get__retry_1() const { return ____retry_1; }
	inline int32_t* get_address_of__retry_1() { return &____retry_1; }
	inline void set__retry_1(int32_t value)
	{
		____retry_1 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// WebSocketSharp.PayloadData
struct PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.PayloadData::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_0;
	// System.Int64 WebSocketSharp.PayloadData::_extDataLength
	int64_t ____extDataLength_1;
	// System.Int64 WebSocketSharp.PayloadData::_length
	int64_t ____length_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70, ____data_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_0() const { return ____data_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_0), (void*)value);
	}

	inline static int32_t get_offset_of__extDataLength_1() { return static_cast<int32_t>(offsetof(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70, ____extDataLength_1)); }
	inline int64_t get__extDataLength_1() const { return ____extDataLength_1; }
	inline int64_t* get_address_of__extDataLength_1() { return &____extDataLength_1; }
	inline void set__extDataLength_1(int64_t value)
	{
		____extDataLength_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70, ____length_2)); }
	inline int64_t get__length_2() const { return ____length_2; }
	inline int64_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int64_t value)
	{
		____length_2 = value;
	}
};

struct PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70_StaticFields
{
public:
	// WebSocketSharp.PayloadData WebSocketSharp.PayloadData::Empty
	PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * ___Empty_3;
	// System.UInt64 WebSocketSharp.PayloadData::MaxLength
	uint64_t ___MaxLength_4;

public:
	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70_StaticFields, ___Empty_3)); }
	inline PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * get_Empty_3() const { return ___Empty_3; }
	inline PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 ** get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * value)
	{
		___Empty_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_3), (void*)value);
	}

	inline static int32_t get_offset_of_MaxLength_4() { return static_cast<int32_t>(offsetof(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70_StaticFields, ___MaxLength_4)); }
	inline uint64_t get_MaxLength_4() const { return ___MaxLength_4; }
	inline uint64_t* get_address_of_MaxLength_4() { return &___MaxLength_4; }
	inline void set_MaxLength_4(uint64_t value)
	{
		___MaxLength_4 = value;
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// WebSocketSharp.Net.AuthenticationResponse/<>c
struct U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939_StaticFields
{
public:
	// WebSocketSharp.Net.AuthenticationResponse/<>c WebSocketSharp.Net.AuthenticationResponse/<>c::<>9
	U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.Net.AuthenticationResponse/<>c::<>9__24_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__24_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939_StaticFields, ___U3CU3E9__24_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t65BF4E709B67B3A4194FE009521F044B276F3521  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass19_0::end
	int32_t ___end_0;
	// System.String[] WebSocketSharp.Ext/<>c__DisplayClass19_0::values
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values_1;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass19_0::len
	int32_t ___len_2;
	// System.Func`2<System.Int32,System.Boolean> WebSocketSharp.Ext/<>c__DisplayClass19_0::seek
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___seek_3;

public:
	inline static int32_t get_offset_of_end_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t65BF4E709B67B3A4194FE009521F044B276F3521, ___end_0)); }
	inline int32_t get_end_0() const { return ___end_0; }
	inline int32_t* get_address_of_end_0() { return &___end_0; }
	inline void set_end_0(int32_t value)
	{
		___end_0 = value;
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t65BF4E709B67B3A4194FE009521F044B276F3521, ___values_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_values_1() const { return ___values_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t65BF4E709B67B3A4194FE009521F044B276F3521, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_seek_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t65BF4E709B67B3A4194FE009521F044B276F3521, ___seek_3)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_seek_3() const { return ___seek_3; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_seek_3() { return &___seek_3; }
	inline void set_seek_3(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___seek_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seek_3), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5  : public RuntimeObject
{
public:
	// System.IO.Stream WebSocketSharp.Ext/<>c__DisplayClass57_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass57_0::retry
	int32_t ___retry_1;
	// System.Byte[] WebSocketSharp.Ext/<>c__DisplayClass57_0::buff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buff_2;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass57_0::offset
	int32_t ___offset_3;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass57_0::length
	int32_t ___length_4;
	// System.AsyncCallback WebSocketSharp.Ext/<>c__DisplayClass57_0::callback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback_5;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<>c__DisplayClass57_0::completed
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed_6;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<>c__DisplayClass57_0::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_7;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_retry_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5, ___retry_1)); }
	inline int32_t get_retry_1() const { return ___retry_1; }
	inline int32_t* get_address_of_retry_1() { return &___retry_1; }
	inline void set_retry_1(int32_t value)
	{
		___retry_1 = value;
	}

	inline static int32_t get_offset_of_buff_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5, ___buff_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buff_2() const { return ___buff_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buff_2() { return &___buff_2; }
	inline void set_buff_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buff_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_2), (void*)value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5, ___callback_5)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_callback_5() const { return ___callback_5; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_5), (void*)value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5, ___completed_6)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_completed_6() const { return ___completed_6; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___completed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_6), (void*)value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5, ___error_7)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_7() const { return ___error_7; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_7), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass58_0::bufferLength
	int32_t ___bufferLength_0;
	// System.IO.Stream WebSocketSharp.Ext/<>c__DisplayClass58_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_1;
	// System.Byte[] WebSocketSharp.Ext/<>c__DisplayClass58_0::buff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buff_2;
	// System.Int32 WebSocketSharp.Ext/<>c__DisplayClass58_0::retry
	int32_t ___retry_3;
	// System.Action`1<System.Int64> WebSocketSharp.Ext/<>c__DisplayClass58_0::read
	Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * ___read_4;
	// System.Action`1<System.Byte[]> WebSocketSharp.Ext/<>c__DisplayClass58_0::completed
	Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * ___completed_5;
	// System.IO.MemoryStream WebSocketSharp.Ext/<>c__DisplayClass58_0::dest
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___dest_6;
	// System.Action`1<System.Exception> WebSocketSharp.Ext/<>c__DisplayClass58_0::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_7;

public:
	inline static int32_t get_offset_of_bufferLength_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140, ___bufferLength_0)); }
	inline int32_t get_bufferLength_0() const { return ___bufferLength_0; }
	inline int32_t* get_address_of_bufferLength_0() { return &___bufferLength_0; }
	inline void set_bufferLength_0(int32_t value)
	{
		___bufferLength_0 = value;
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140, ___stream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_1() const { return ___stream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_buff_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140, ___buff_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buff_2() const { return ___buff_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buff_2() { return &___buff_2; }
	inline void set_buff_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buff_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_2), (void*)value);
	}

	inline static int32_t get_offset_of_retry_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140, ___retry_3)); }
	inline int32_t get_retry_3() const { return ___retry_3; }
	inline int32_t* get_address_of_retry_3() { return &___retry_3; }
	inline void set_retry_3(int32_t value)
	{
		___retry_3 = value;
	}

	inline static int32_t get_offset_of_read_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140, ___read_4)); }
	inline Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * get_read_4() const { return ___read_4; }
	inline Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 ** get_address_of_read_4() { return &___read_4; }
	inline void set_read_4(Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * value)
	{
		___read_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_4), (void*)value);
	}

	inline static int32_t get_offset_of_completed_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140, ___completed_5)); }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * get_completed_5() const { return ___completed_5; }
	inline Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 ** get_address_of_completed_5() { return &___completed_5; }
	inline void set_completed_5(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * value)
	{
		___completed_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_5), (void*)value);
	}

	inline static int32_t get_offset_of_dest_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140, ___dest_6)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_dest_6() const { return ___dest_6; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_dest_6() { return &___dest_6; }
	inline void set_dest_6(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___dest_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dest_6), (void*)value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140, ___error_7)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_7() const { return ___error_7; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_7), (void*)value);
	}
};


// WebSocketSharp.Ext/<>c__DisplayClass58_1
struct U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43  : public RuntimeObject
{
public:
	// System.Int64 WebSocketSharp.Ext/<>c__DisplayClass58_1::len
	int64_t ___len_0;
	// WebSocketSharp.Ext/<>c__DisplayClass58_0 WebSocketSharp.Ext/<>c__DisplayClass58_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43, ___len_0)); }
	inline int64_t get_len_0() const { return ___len_0; }
	inline int64_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int64_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// WebSocketSharp.Ext/<SplitHeaderValue>d__60
struct U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__60::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__60::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__60::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__60::value
	String_t* ___value_3;
	// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__60::<>3__value
	String_t* ___U3CU3E3__value_4;
	// System.Char[] WebSocketSharp.Ext/<SplitHeaderValue>d__60::separators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separators_5;
	// System.Char[] WebSocketSharp.Ext/<SplitHeaderValue>d__60::<>3__separators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CU3E3__separators_6;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__60::<len>5__1
	int32_t ___U3ClenU3E5__1_7;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__60::<end>5__2
	int32_t ___U3CendU3E5__2_8;
	// System.Text.StringBuilder WebSocketSharp.Ext/<SplitHeaderValue>d__60::<buff>5__3
	StringBuilder_t * ___U3CbuffU3E5__3_9;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__60::<escaped>5__4
	bool ___U3CescapedU3E5__4_10;
	// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__60::<quoted>5__5
	bool ___U3CquotedU3E5__5_11;
	// System.Int32 WebSocketSharp.Ext/<SplitHeaderValue>d__60::<i>5__6
	int32_t ___U3CiU3E5__6_12;
	// System.Char WebSocketSharp.Ext/<SplitHeaderValue>d__60::<c>5__7
	Il2CppChar ___U3CcU3E5__7_13;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__value_4() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CU3E3__value_4)); }
	inline String_t* get_U3CU3E3__value_4() const { return ___U3CU3E3__value_4; }
	inline String_t** get_address_of_U3CU3E3__value_4() { return &___U3CU3E3__value_4; }
	inline void set_U3CU3E3__value_4(String_t* value)
	{
		___U3CU3E3__value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__value_4), (void*)value);
	}

	inline static int32_t get_offset_of_separators_5() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___separators_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_separators_5() const { return ___separators_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_separators_5() { return &___separators_5; }
	inline void set_separators_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___separators_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___separators_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__separators_6() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CU3E3__separators_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CU3E3__separators_6() const { return ___U3CU3E3__separators_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CU3E3__separators_6() { return &___U3CU3E3__separators_6; }
	inline void set_U3CU3E3__separators_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CU3E3__separators_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__separators_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClenU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3ClenU3E5__1_7)); }
	inline int32_t get_U3ClenU3E5__1_7() const { return ___U3ClenU3E5__1_7; }
	inline int32_t* get_address_of_U3ClenU3E5__1_7() { return &___U3ClenU3E5__1_7; }
	inline void set_U3ClenU3E5__1_7(int32_t value)
	{
		___U3ClenU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CendU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CendU3E5__2_8)); }
	inline int32_t get_U3CendU3E5__2_8() const { return ___U3CendU3E5__2_8; }
	inline int32_t* get_address_of_U3CendU3E5__2_8() { return &___U3CendU3E5__2_8; }
	inline void set_U3CendU3E5__2_8(int32_t value)
	{
		___U3CendU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CbuffU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CbuffU3E5__3_9)); }
	inline StringBuilder_t * get_U3CbuffU3E5__3_9() const { return ___U3CbuffU3E5__3_9; }
	inline StringBuilder_t ** get_address_of_U3CbuffU3E5__3_9() { return &___U3CbuffU3E5__3_9; }
	inline void set_U3CbuffU3E5__3_9(StringBuilder_t * value)
	{
		___U3CbuffU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbuffU3E5__3_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CescapedU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CescapedU3E5__4_10)); }
	inline bool get_U3CescapedU3E5__4_10() const { return ___U3CescapedU3E5__4_10; }
	inline bool* get_address_of_U3CescapedU3E5__4_10() { return &___U3CescapedU3E5__4_10; }
	inline void set_U3CescapedU3E5__4_10(bool value)
	{
		___U3CescapedU3E5__4_10 = value;
	}

	inline static int32_t get_offset_of_U3CquotedU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CquotedU3E5__5_11)); }
	inline bool get_U3CquotedU3E5__5_11() const { return ___U3CquotedU3E5__5_11; }
	inline bool* get_address_of_U3CquotedU3E5__5_11() { return &___U3CquotedU3E5__5_11; }
	inline void set_U3CquotedU3E5__5_11(bool value)
	{
		___U3CquotedU3E5__5_11 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_12() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CiU3E5__6_12)); }
	inline int32_t get_U3CiU3E5__6_12() const { return ___U3CiU3E5__6_12; }
	inline int32_t* get_address_of_U3CiU3E5__6_12() { return &___U3CiU3E5__6_12; }
	inline void set_U3CiU3E5__6_12(int32_t value)
	{
		___U3CiU3E5__6_12 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E5__7_13() { return static_cast<int32_t>(offsetof(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894, ___U3CcU3E5__7_13)); }
	inline Il2CppChar get_U3CcU3E5__7_13() const { return ___U3CcU3E5__7_13; }
	inline Il2CppChar* get_address_of_U3CcU3E5__7_13() { return &___U3CcU3E5__7_13; }
	inline void set_U3CcU3E5__7_13(Il2CppChar value)
	{
		___U3CcU3E5__7_13 = value;
	}
};


// WebSocketSharp.HttpBase/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t559B3D847459DBCB7927AC97854203BE0F2434D4  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> WebSocketSharp.HttpBase/<>c__DisplayClass13_0::buff
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___buff_0;
	// System.Int32 WebSocketSharp.HttpBase/<>c__DisplayClass13_0::cnt
	int32_t ___cnt_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t559B3D847459DBCB7927AC97854203BE0F2434D4, ___buff_0)); }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * get_buff_0() const { return ___buff_0; }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_0), (void*)value);
	}

	inline static int32_t get_offset_of_cnt_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t559B3D847459DBCB7927AC97854203BE0F2434D4, ___cnt_1)); }
	inline int32_t get_cnt_1() const { return ___cnt_1; }
	inline int32_t* get_address_of_cnt_1() { return &___cnt_1; }
	inline void set_cnt_1(int32_t value)
	{
		___cnt_1 = value;
	}
};


// WebSocketSharp.PayloadData/<GetEnumerator>d__25
struct U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>2__current
	uint8_t ___U3CU3E2__current_1;
	// WebSocketSharp.PayloadData WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>4__this
	PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * ___U3CU3E4__this_2;
	// System.Byte[] WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>s__1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CU3Es__1_3;
	// System.Int32 WebSocketSharp.PayloadData/<GetEnumerator>d__25::<>s__2
	int32_t ___U3CU3Es__2_4;
	// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__25::<b>5__3
	uint8_t ___U3CbU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14, ___U3CU3E2__current_1)); }
	inline uint8_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline uint8_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(uint8_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14, ___U3CU3E4__this_2)); }
	inline PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14, ___U3CU3Es__1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CU3Es__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14, ___U3CU3Es__2_4)); }
	inline int32_t get_U3CU3Es__2_4() const { return ___U3CU3Es__2_4; }
	inline int32_t* get_address_of_U3CU3Es__2_4() { return &___U3CU3Es__2_4; }
	inline void set_U3CU3Es__2_4(int32_t value)
	{
		___U3CU3Es__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14, ___U3CbU3E5__3_5)); }
	inline uint8_t get_U3CbU3E5__3_5() const { return ___U3CbU3E5__3_5; }
	inline uint8_t* get_address_of_U3CbU3E5__3_5() { return &___U3CbU3E5__3_5; }
	inline void set_U3CbU3E5__3_5(uint8_t value)
	{
		___U3CbU3E5__3_5 = value;
	}
};


// WebSocketSharp.WebSocket/<>c
struct U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050_StaticFields
{
public:
	// WebSocketSharp.WebSocket/<>c WebSocketSharp.WebSocket/<>c::<>9
	U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> WebSocketSharp.WebSocket/<>c::<>9__120_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__120_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__120_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050_StaticFields, ___U3CU3E9__120_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__120_0_1() const { return ___U3CU3E9__120_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__120_0_1() { return &___U3CU3E9__120_0_1; }
	inline void set_U3CU3E9__120_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__120_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__120_0_1), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass174_0
struct U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3  : public RuntimeObject
{
public:
	// WebSocketSharp.WebSocket WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<>4__this
	WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * ___U3CU3E4__this_0;
	// System.Action WebSocketSharp.WebSocket/<>c__DisplayClass174_0::receive
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___receive_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<>9__1
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___U3CU3E9__1_2;
	// System.Action`1<System.Exception> WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<>9__2
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___U3CU3E9__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3, ___U3CU3E4__this_0)); }
	inline WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_receive_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3, ___receive_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_receive_1() const { return ___receive_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_receive_1() { return &___receive_1; }
	inline void set_receive_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___receive_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receive_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3, ___U3CU3E9__1_2)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_U3CU3E9__1_2() const { return ___U3CU3E9__1_2; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_U3CU3E9__1_2() { return &___U3CU3E9__1_2; }
	inline void set_U3CU3E9__1_2(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___U3CU3E9__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3, ___U3CU3E9__2_3)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_U3CU3E9__2_3() const { return ___U3CU3E9__2_3; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_U3CU3E9__2_3() { return &___U3CU3E9__2_3; }
	inline void set_U3CU3E9__2_3(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___U3CU3E9__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass176_0
struct U3CU3Ec__DisplayClass176_0_t18332CFB5D194AADD2180125EF742E4AA54770AE  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocket/<>c__DisplayClass176_0::method
	String_t* ___method_0;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass176_0_t18332CFB5D194AADD2180125EF742E4AA54770AE, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}
};


// WebSocketSharp.WebSocket/<>c__DisplayClass177_0
struct U3CU3Ec__DisplayClass177_0_tE87D692432B89B0680F4CC8BBAAC85A3FA9C8267  : public RuntimeObject
{
public:
	// System.String WebSocketSharp.WebSocket/<>c__DisplayClass177_0::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass177_0_tE87D692432B89B0680F4CC8BBAAC85A3FA9C8267, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7  : public RuntimeObject
{
public:
	// System.Text.StringBuilder WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_0::buff
	StringBuilder_t * ___buff_0;
	// System.String WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_0::lineFmt
	String_t* ___lineFmt_1;

public:
	inline static int32_t get_offset_of_buff_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7, ___buff_0)); }
	inline StringBuilder_t * get_buff_0() const { return ___buff_0; }
	inline StringBuilder_t ** get_address_of_buff_0() { return &___buff_0; }
	inline void set_buff_0(StringBuilder_t * value)
	{
		___buff_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_0), (void*)value);
	}

	inline static int32_t get_offset_of_lineFmt_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7, ___lineFmt_1)); }
	inline String_t* get_lineFmt_1() const { return ___lineFmt_1; }
	inline String_t** get_address_of_lineFmt_1() { return &___lineFmt_1; }
	inline void set_lineFmt_1(String_t* value)
	{
		___lineFmt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineFmt_1), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_1
struct U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA  : public RuntimeObject
{
public:
	// System.Int64 WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_1::lineCnt
	int64_t ___lineCnt_0;
	// WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_0 WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_lineCnt_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA, ___lineCnt_0)); }
	inline int64_t get_lineCnt_0() const { return ___lineCnt_0; }
	inline int64_t* get_address_of_lineCnt_0() { return &___lineCnt_0; }
	inline void set_lineCnt_0(int64_t value)
	{
		___lineCnt_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_tD474E1CD75D56DAF84A260C3EAC068CF4BCB7F5F  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<>c__DisplayClass69_0::len
	int32_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClass69_0::frame
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass69_0::completed
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_tD474E1CD75D56DAF84A260C3EAC068CF4BCB7F5F, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_tD474E1CD75D56DAF84A260C3EAC068CF4BCB7F5F, ___frame_1)); }
	inline WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_tD474E1CD75D56DAF84A260C3EAC068CF4BCB7F5F, ___completed_2)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_t524F10983D8B545537E673755B2D6296459FDF20  : public RuntimeObject
{
public:
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::completed
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed_0;

public:
	inline static int32_t get_offset_of_completed_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t524F10983D8B545537E673755B2D6296459FDF20, ___completed_0)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_completed_0() const { return ___completed_0; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_completed_0() { return &___completed_0; }
	inline void set_completed_0(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___completed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_0), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_t1057EB2B08FE65FF828568017E4A41F9BA3A1396  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::len
	int32_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::frame
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::completed
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t1057EB2B08FE65FF828568017E4A41F9BA3A1396, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t1057EB2B08FE65FF828568017E4A41F9BA3A1396, ___frame_1)); }
	inline WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t1057EB2B08FE65FF828568017E4A41F9BA3A1396, ___completed_2)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_t433F53A4E1AF13F236264CA7D57C25A2841386F7  : public RuntimeObject
{
public:
	// System.Int64 WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::len
	int64_t ___len_0;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::frame
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::completed
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed_2;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t433F53A4E1AF13F236264CA7D57C25A2841386F7, ___len_0)); }
	inline int64_t get_len_0() const { return ___len_0; }
	inline int64_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int64_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t433F53A4E1AF13F236264CA7D57C25A2841386F7, ___frame_1)); }
	inline WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * get_frame_1() const { return ___frame_1; }
	inline WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 ** get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * value)
	{
		___frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_1), (void*)value);
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t433F53A4E1AF13F236264CA7D57C25A2841386F7, ___completed_2)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0
struct U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812  : public RuntimeObject
{
public:
	// System.IO.Stream WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;
	// System.Boolean WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::unmask
	bool ___unmask_1;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::completed
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed_2;
	// System.Action`1<System.Exception> WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::error
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error_3;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::<>9__3
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___U3CU3E9__3_4;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::<>9__2
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___U3CU3E9__2_5;
	// System.Action`1<WebSocketSharp.WebSocketFrame> WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::<>9__1
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___U3CU3E9__1_6;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_unmask_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812, ___unmask_1)); }
	inline bool get_unmask_1() const { return ___unmask_1; }
	inline bool* get_address_of_unmask_1() { return &___unmask_1; }
	inline void set_unmask_1(bool value)
	{
		___unmask_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812, ___completed_2)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_completed_2() const { return ___completed_2; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completed_2), (void*)value);
	}

	inline static int32_t get_offset_of_error_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812, ___error_3)); }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * get_error_3() const { return ___error_3; }
	inline Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 ** get_address_of_error_3() { return &___error_3; }
	inline void set_error_3(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * value)
	{
		___error_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812, ___U3CU3E9__3_4)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_U3CU3E9__3_4() const { return ___U3CU3E9__3_4; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_U3CU3E9__3_4() { return &___U3CU3E9__3_4; }
	inline void set_U3CU3E9__3_4(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___U3CU3E9__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812, ___U3CU3E9__2_5)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_U3CU3E9__2_5() const { return ___U3CU3E9__2_5; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_U3CU3E9__2_5() { return &___U3CU3E9__2_5; }
	inline void set_U3CU3E9__2_5(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___U3CU3E9__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812, ___U3CU3E9__1_6)); }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * get_U3CU3E9__1_6() const { return ___U3CU3E9__1_6; }
	inline Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 ** get_address_of_U3CU3E9__1_6() { return &___U3CU3E9__1_6; }
	inline void set_U3CU3E9__1_6(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * value)
	{
		___U3CU3E9__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_6), (void*)value);
	}
};


// WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84
struct U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014  : public RuntimeObject
{
public:
	// System.Int32 WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::<>2__current
	uint8_t ___U3CU3E2__current_1;
	// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::<>4__this
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___U3CU3E4__this_2;
	// System.Byte[] WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::<>s__1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CU3Es__1_3;
	// System.Int32 WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::<>s__2
	int32_t ___U3CU3Es__2_4;
	// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::<b>5__3
	uint8_t ___U3CbU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014, ___U3CU3E2__current_1)); }
	inline uint8_t get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline uint8_t* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(uint8_t value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014, ___U3CU3E4__this_2)); }
	inline WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014, ___U3CU3Es__1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CU3Es__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014, ___U3CU3Es__2_4)); }
	inline int32_t get_U3CU3Es__2_4() const { return ___U3CU3Es__2_4; }
	inline int32_t* get_address_of_U3CU3Es__2_4() { return &___U3CU3Es__2_4; }
	inline void set_U3CU3Es__2_4(int32_t value)
	{
		___U3CU3Es__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CbU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014, ___U3CbU3E5__3_5)); }
	inline uint8_t get_U3CbU3E5__3_5() const { return ___U3CbU3E5__3_5; }
	inline uint8_t* get_address_of_U3CbU3E5__3_5() { return &___U3CbU3E5__3_5; }
	inline void set_U3CbU3E5__3_5(uint8_t value)
	{
		___U3CbU3E5__3_5 = value;
	}
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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


// WebSocketSharp.CloseStatusCode
struct CloseStatusCode_t1436445E1A7C790C548171256C969EC445A1F234 
{
public:
	// System.UInt16 WebSocketSharp.CloseStatusCode::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CloseStatusCode_t1436445E1A7C790C548171256C969EC445A1F234, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.CompressionMethod
struct CompressionMethod_t56F4FCDC18B90493D6C6C43287A2A909ABA0BCD7 
{
public:
	// System.Byte WebSocketSharp.CompressionMethod::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethod_t56F4FCDC18B90493D6C6C43287A2A909ABA0BCD7, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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

// WebSocketSharp.Fin
struct Fin_t7A4ED1D3FC6312AF49B14A4329DE952899F00347 
{
public:
	// System.Byte WebSocketSharp.Fin::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Fin_t7A4ED1D3FC6312AF49B14A4329DE952899F00347, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.LogLevel
struct LogLevel_t34FAAE73834BA039F44D5B8420B25539361BDDCC 
{
public:
	// System.Int32 WebSocketSharp.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t34FAAE73834BA039F44D5B8420B25539361BDDCC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Mask
struct Mask_t364B4C7CF23EFA0A0848A7949E08DEE2E333AE21 
{
public:
	// System.Byte WebSocketSharp.Mask::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mask_t364B4C7CF23EFA0A0848A7949E08DEE2E333AE21, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// WebSocketSharp.Opcode
struct Opcode_tCC87206E8EA7B8110DE5F2E7863A13CC3F142EE3 
{
public:
	// System.Byte WebSocketSharp.Opcode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Opcode_tCC87206E8EA7B8110DE5F2E7863A13CC3F142EE3, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// WebSocketSharp.Rsv
struct Rsv_t71D9BDF4371BE0BD5E9544677C249550C56374C4 
{
public:
	// System.Byte WebSocketSharp.Rsv::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Rsv_t71D9BDF4371BE0BD5E9544677C249550C56374C4, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// WebSocketSharp.WebSocketState
struct WebSocketState_t821998394D8F5313C1EF80B5646C50FD64C229B4 
{
public:
	// System.UInt16 WebSocketSharp.WebSocketState::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_t821998394D8F5313C1EF80B5646C50FD64C229B4, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// WebSocketSharp.Logger
struct Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8  : public RuntimeObject
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_file
	String_t* ____file_0;
	// WebSocketSharp.LogLevel modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.Logger::_level
	int32_t ____level_1;
	// System.Action`2<WebSocketSharp.LogData,System.String> WebSocketSharp.Logger::_output
	Action_2_t1B631FB624E5E5C57DCC77E4970A47D8BC620FD9 * ____output_2;
	// System.Object WebSocketSharp.Logger::_sync
	RuntimeObject * ____sync_3;

public:
	inline static int32_t get_offset_of__file_0() { return static_cast<int32_t>(offsetof(Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8, ____file_0)); }
	inline String_t* get__file_0() const { return ____file_0; }
	inline String_t** get_address_of__file_0() { return &____file_0; }
	inline void set__file_0(String_t* value)
	{
		____file_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____file_0), (void*)value);
	}

	inline static int32_t get_offset_of__level_1() { return static_cast<int32_t>(offsetof(Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8, ____level_1)); }
	inline int32_t get__level_1() const { return ____level_1; }
	inline int32_t* get_address_of__level_1() { return &____level_1; }
	inline void set__level_1(int32_t value)
	{
		____level_1 = value;
	}

	inline static int32_t get_offset_of__output_2() { return static_cast<int32_t>(offsetof(Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8, ____output_2)); }
	inline Action_2_t1B631FB624E5E5C57DCC77E4970A47D8BC620FD9 * get__output_2() const { return ____output_2; }
	inline Action_2_t1B631FB624E5E5C57DCC77E4970A47D8BC620FD9 ** get_address_of__output_2() { return &____output_2; }
	inline void set__output_2(Action_2_t1B631FB624E5E5C57DCC77E4970A47D8BC620FD9 * value)
	{
		____output_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____output_2), (void*)value);
	}

	inline static int32_t get_offset_of__sync_3() { return static_cast<int32_t>(offsetof(Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8, ____sync_3)); }
	inline RuntimeObject * get__sync_3() const { return ____sync_3; }
	inline RuntimeObject ** get_address_of__sync_3() { return &____sync_3; }
	inline void set__sync_3(RuntimeObject * value)
	{
		____sync_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sync_3), (void*)value);
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


// WebSocketSharp.WebSocket
struct WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D  : public RuntimeObject
{
public:
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_tB008302FB922AA76D1ADD8304EACE6CDF5C344F8 * ____authChallenge_0;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_1;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_2;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____closeContext_3;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_4;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t33B08F6FCD5F31523719A6DD3C18A6ECBC8D18F2 * ____context_5;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_tCA5A17940F79607E2EEACED1AB20E54085EF9868 * ____cookies_6;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C * ____credentials_7;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_8;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_9;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_10;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_11;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject * ____forMessageEventQueue_12;
	// System.Object WebSocketSharp.WebSocket::_forPing
	RuntimeObject * ____forPing_13;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject * ____forSend_14;
	// System.Object WebSocketSharp.WebSocket::_forState
	RuntimeObject * ____forState_15;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ____fragmentsBuffer_16;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_17;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_18;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_t8235C75AFA281CB8F4C1770A4414C7B3B05FFB36 * ____handshakeRequestChecker_20;
	// System.Boolean WebSocketSharp.WebSocket::_ignoreExtensions
	bool ____ignoreExtensions_21;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_23;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8 * ____logger_24;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_t1FE41E5A9AD1036B100A0B1C10765E08A99E5D81 * ____message_26;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_tC33379D6C1D34C3505367ACBCA044A8215F4818D * ____messageEventQueue_27;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_28;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_29;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_pongReceived
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ____pongReceived_30;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_31;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_32;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____protocols_33;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_34;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C * ____proxyCredentials_35;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____proxyUri_36;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_37;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_receivingExited
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ____receivingExited_38;
	// System.Int32 WebSocketSharp.WebSocket::_retryCountForConnect
	int32_t ____retryCountForConnect_39;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_40;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_tC1E6007DDD30E46CD9EDAB1F4D341FE8DBB13089 * ____sslConfig_41;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_42;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ____tcpClient_43;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ____uri_44;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____waitTime_46;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 * ___OnClose_50;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 * ___OnError_51;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A * ___OnMessage_52;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___OnOpen_53;

public:
	inline static int32_t get_offset_of__authChallenge_0() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____authChallenge_0)); }
	inline AuthenticationChallenge_tB008302FB922AA76D1ADD8304EACE6CDF5C344F8 * get__authChallenge_0() const { return ____authChallenge_0; }
	inline AuthenticationChallenge_tB008302FB922AA76D1ADD8304EACE6CDF5C344F8 ** get_address_of__authChallenge_0() { return &____authChallenge_0; }
	inline void set__authChallenge_0(AuthenticationChallenge_tB008302FB922AA76D1ADD8304EACE6CDF5C344F8 * value)
	{
		____authChallenge_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____authChallenge_0), (void*)value);
	}

	inline static int32_t get_offset_of__base64Key_1() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____base64Key_1)); }
	inline String_t* get__base64Key_1() const { return ____base64Key_1; }
	inline String_t** get_address_of__base64Key_1() { return &____base64Key_1; }
	inline void set__base64Key_1(String_t* value)
	{
		____base64Key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base64Key_1), (void*)value);
	}

	inline static int32_t get_offset_of__client_2() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____client_2)); }
	inline bool get__client_2() const { return ____client_2; }
	inline bool* get_address_of__client_2() { return &____client_2; }
	inline void set__client_2(bool value)
	{
		____client_2 = value;
	}

	inline static int32_t get_offset_of__closeContext_3() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____closeContext_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__closeContext_3() const { return ____closeContext_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__closeContext_3() { return &____closeContext_3; }
	inline void set__closeContext_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____closeContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closeContext_3), (void*)value);
	}

	inline static int32_t get_offset_of__compression_4() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____compression_4)); }
	inline uint8_t get__compression_4() const { return ____compression_4; }
	inline uint8_t* get_address_of__compression_4() { return &____compression_4; }
	inline void set__compression_4(uint8_t value)
	{
		____compression_4 = value;
	}

	inline static int32_t get_offset_of__context_5() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____context_5)); }
	inline WebSocketContext_t33B08F6FCD5F31523719A6DD3C18A6ECBC8D18F2 * get__context_5() const { return ____context_5; }
	inline WebSocketContext_t33B08F6FCD5F31523719A6DD3C18A6ECBC8D18F2 ** get_address_of__context_5() { return &____context_5; }
	inline void set__context_5(WebSocketContext_t33B08F6FCD5F31523719A6DD3C18A6ECBC8D18F2 * value)
	{
		____context_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_5), (void*)value);
	}

	inline static int32_t get_offset_of__cookies_6() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____cookies_6)); }
	inline CookieCollection_tCA5A17940F79607E2EEACED1AB20E54085EF9868 * get__cookies_6() const { return ____cookies_6; }
	inline CookieCollection_tCA5A17940F79607E2EEACED1AB20E54085EF9868 ** get_address_of__cookies_6() { return &____cookies_6; }
	inline void set__cookies_6(CookieCollection_tCA5A17940F79607E2EEACED1AB20E54085EF9868 * value)
	{
		____cookies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cookies_6), (void*)value);
	}

	inline static int32_t get_offset_of__credentials_7() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____credentials_7)); }
	inline NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C * get__credentials_7() const { return ____credentials_7; }
	inline NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C ** get_address_of__credentials_7() { return &____credentials_7; }
	inline void set__credentials_7(NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C * value)
	{
		____credentials_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____credentials_7), (void*)value);
	}

	inline static int32_t get_offset_of__emitOnPing_8() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____emitOnPing_8)); }
	inline bool get__emitOnPing_8() const { return ____emitOnPing_8; }
	inline bool* get_address_of__emitOnPing_8() { return &____emitOnPing_8; }
	inline void set__emitOnPing_8(bool value)
	{
		____emitOnPing_8 = value;
	}

	inline static int32_t get_offset_of__enableRedirection_9() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____enableRedirection_9)); }
	inline bool get__enableRedirection_9() const { return ____enableRedirection_9; }
	inline bool* get_address_of__enableRedirection_9() { return &____enableRedirection_9; }
	inline void set__enableRedirection_9(bool value)
	{
		____enableRedirection_9 = value;
	}

	inline static int32_t get_offset_of__extensions_10() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____extensions_10)); }
	inline String_t* get__extensions_10() const { return ____extensions_10; }
	inline String_t** get_address_of__extensions_10() { return &____extensions_10; }
	inline void set__extensions_10(String_t* value)
	{
		____extensions_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extensions_10), (void*)value);
	}

	inline static int32_t get_offset_of__extensionsRequested_11() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____extensionsRequested_11)); }
	inline bool get__extensionsRequested_11() const { return ____extensionsRequested_11; }
	inline bool* get_address_of__extensionsRequested_11() { return &____extensionsRequested_11; }
	inline void set__extensionsRequested_11(bool value)
	{
		____extensionsRequested_11 = value;
	}

	inline static int32_t get_offset_of__forMessageEventQueue_12() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____forMessageEventQueue_12)); }
	inline RuntimeObject * get__forMessageEventQueue_12() const { return ____forMessageEventQueue_12; }
	inline RuntimeObject ** get_address_of__forMessageEventQueue_12() { return &____forMessageEventQueue_12; }
	inline void set__forMessageEventQueue_12(RuntimeObject * value)
	{
		____forMessageEventQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forMessageEventQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of__forPing_13() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____forPing_13)); }
	inline RuntimeObject * get__forPing_13() const { return ____forPing_13; }
	inline RuntimeObject ** get_address_of__forPing_13() { return &____forPing_13; }
	inline void set__forPing_13(RuntimeObject * value)
	{
		____forPing_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forPing_13), (void*)value);
	}

	inline static int32_t get_offset_of__forSend_14() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____forSend_14)); }
	inline RuntimeObject * get__forSend_14() const { return ____forSend_14; }
	inline RuntimeObject ** get_address_of__forSend_14() { return &____forSend_14; }
	inline void set__forSend_14(RuntimeObject * value)
	{
		____forSend_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forSend_14), (void*)value);
	}

	inline static int32_t get_offset_of__forState_15() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____forState_15)); }
	inline RuntimeObject * get__forState_15() const { return ____forState_15; }
	inline RuntimeObject ** get_address_of__forState_15() { return &____forState_15; }
	inline void set__forState_15(RuntimeObject * value)
	{
		____forState_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____forState_15), (void*)value);
	}

	inline static int32_t get_offset_of__fragmentsBuffer_16() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____fragmentsBuffer_16)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get__fragmentsBuffer_16() const { return ____fragmentsBuffer_16; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of__fragmentsBuffer_16() { return &____fragmentsBuffer_16; }
	inline void set__fragmentsBuffer_16(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		____fragmentsBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fragmentsBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of__fragmentsCompressed_17() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____fragmentsCompressed_17)); }
	inline bool get__fragmentsCompressed_17() const { return ____fragmentsCompressed_17; }
	inline bool* get_address_of__fragmentsCompressed_17() { return &____fragmentsCompressed_17; }
	inline void set__fragmentsCompressed_17(bool value)
	{
		____fragmentsCompressed_17 = value;
	}

	inline static int32_t get_offset_of__fragmentsOpcode_18() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____fragmentsOpcode_18)); }
	inline uint8_t get__fragmentsOpcode_18() const { return ____fragmentsOpcode_18; }
	inline uint8_t* get_address_of__fragmentsOpcode_18() { return &____fragmentsOpcode_18; }
	inline void set__fragmentsOpcode_18(uint8_t value)
	{
		____fragmentsOpcode_18 = value;
	}

	inline static int32_t get_offset_of__handshakeRequestChecker_20() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____handshakeRequestChecker_20)); }
	inline Func_2_t8235C75AFA281CB8F4C1770A4414C7B3B05FFB36 * get__handshakeRequestChecker_20() const { return ____handshakeRequestChecker_20; }
	inline Func_2_t8235C75AFA281CB8F4C1770A4414C7B3B05FFB36 ** get_address_of__handshakeRequestChecker_20() { return &____handshakeRequestChecker_20; }
	inline void set__handshakeRequestChecker_20(Func_2_t8235C75AFA281CB8F4C1770A4414C7B3B05FFB36 * value)
	{
		____handshakeRequestChecker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handshakeRequestChecker_20), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreExtensions_21() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____ignoreExtensions_21)); }
	inline bool get__ignoreExtensions_21() const { return ____ignoreExtensions_21; }
	inline bool* get_address_of__ignoreExtensions_21() { return &____ignoreExtensions_21; }
	inline void set__ignoreExtensions_21(bool value)
	{
		____ignoreExtensions_21 = value;
	}

	inline static int32_t get_offset_of__inContinuation_22() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____inContinuation_22)); }
	inline bool get__inContinuation_22() const { return ____inContinuation_22; }
	inline bool* get_address_of__inContinuation_22() { return &____inContinuation_22; }
	inline void set__inContinuation_22(bool value)
	{
		____inContinuation_22 = value;
	}

	inline static int32_t get_offset_of__inMessage_23() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____inMessage_23)); }
	inline bool get__inMessage_23() const { return ____inMessage_23; }
	inline bool* get_address_of__inMessage_23() { return &____inMessage_23; }
	inline void set__inMessage_23(bool value)
	{
		____inMessage_23 = value;
	}

	inline static int32_t get_offset_of__logger_24() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____logger_24)); }
	inline Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8 * get__logger_24() const { return ____logger_24; }
	inline Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8 ** get_address_of__logger_24() { return &____logger_24; }
	inline void set__logger_24(Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8 * value)
	{
		____logger_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_24), (void*)value);
	}

	inline static int32_t get_offset_of__message_26() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____message_26)); }
	inline Action_1_t1FE41E5A9AD1036B100A0B1C10765E08A99E5D81 * get__message_26() const { return ____message_26; }
	inline Action_1_t1FE41E5A9AD1036B100A0B1C10765E08A99E5D81 ** get_address_of__message_26() { return &____message_26; }
	inline void set__message_26(Action_1_t1FE41E5A9AD1036B100A0B1C10765E08A99E5D81 * value)
	{
		____message_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_26), (void*)value);
	}

	inline static int32_t get_offset_of__messageEventQueue_27() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____messageEventQueue_27)); }
	inline Queue_1_tC33379D6C1D34C3505367ACBCA044A8215F4818D * get__messageEventQueue_27() const { return ____messageEventQueue_27; }
	inline Queue_1_tC33379D6C1D34C3505367ACBCA044A8215F4818D ** get_address_of__messageEventQueue_27() { return &____messageEventQueue_27; }
	inline void set__messageEventQueue_27(Queue_1_tC33379D6C1D34C3505367ACBCA044A8215F4818D * value)
	{
		____messageEventQueue_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____messageEventQueue_27), (void*)value);
	}

	inline static int32_t get_offset_of__nonceCount_28() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____nonceCount_28)); }
	inline uint32_t get__nonceCount_28() const { return ____nonceCount_28; }
	inline uint32_t* get_address_of__nonceCount_28() { return &____nonceCount_28; }
	inline void set__nonceCount_28(uint32_t value)
	{
		____nonceCount_28 = value;
	}

	inline static int32_t get_offset_of__origin_29() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____origin_29)); }
	inline String_t* get__origin_29() const { return ____origin_29; }
	inline String_t** get_address_of__origin_29() { return &____origin_29; }
	inline void set__origin_29(String_t* value)
	{
		____origin_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____origin_29), (void*)value);
	}

	inline static int32_t get_offset_of__pongReceived_30() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____pongReceived_30)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get__pongReceived_30() const { return ____pongReceived_30; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of__pongReceived_30() { return &____pongReceived_30; }
	inline void set__pongReceived_30(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		____pongReceived_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pongReceived_30), (void*)value);
	}

	inline static int32_t get_offset_of__preAuth_31() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____preAuth_31)); }
	inline bool get__preAuth_31() const { return ____preAuth_31; }
	inline bool* get_address_of__preAuth_31() { return &____preAuth_31; }
	inline void set__preAuth_31(bool value)
	{
		____preAuth_31 = value;
	}

	inline static int32_t get_offset_of__protocol_32() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____protocol_32)); }
	inline String_t* get__protocol_32() const { return ____protocol_32; }
	inline String_t** get_address_of__protocol_32() { return &____protocol_32; }
	inline void set__protocol_32(String_t* value)
	{
		____protocol_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocol_32), (void*)value);
	}

	inline static int32_t get_offset_of__protocols_33() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____protocols_33)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__protocols_33() const { return ____protocols_33; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__protocols_33() { return &____protocols_33; }
	inline void set__protocols_33(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____protocols_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____protocols_33), (void*)value);
	}

	inline static int32_t get_offset_of__protocolsRequested_34() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____protocolsRequested_34)); }
	inline bool get__protocolsRequested_34() const { return ____protocolsRequested_34; }
	inline bool* get_address_of__protocolsRequested_34() { return &____protocolsRequested_34; }
	inline void set__protocolsRequested_34(bool value)
	{
		____protocolsRequested_34 = value;
	}

	inline static int32_t get_offset_of__proxyCredentials_35() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____proxyCredentials_35)); }
	inline NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C * get__proxyCredentials_35() const { return ____proxyCredentials_35; }
	inline NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C ** get_address_of__proxyCredentials_35() { return &____proxyCredentials_35; }
	inline void set__proxyCredentials_35(NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C * value)
	{
		____proxyCredentials_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxyCredentials_35), (void*)value);
	}

	inline static int32_t get_offset_of__proxyUri_36() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____proxyUri_36)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__proxyUri_36() const { return ____proxyUri_36; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__proxyUri_36() { return &____proxyUri_36; }
	inline void set__proxyUri_36(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____proxyUri_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____proxyUri_36), (void*)value);
	}

	inline static int32_t get_offset_of__readyState_37() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____readyState_37)); }
	inline uint16_t get__readyState_37() const { return ____readyState_37; }
	inline uint16_t* get_address_of__readyState_37() { return &____readyState_37; }
	inline void set__readyState_37(uint16_t value)
	{
		____readyState_37 = value;
	}

	inline static int32_t get_offset_of__receivingExited_38() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____receivingExited_38)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get__receivingExited_38() const { return ____receivingExited_38; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of__receivingExited_38() { return &____receivingExited_38; }
	inline void set__receivingExited_38(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		____receivingExited_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receivingExited_38), (void*)value);
	}

	inline static int32_t get_offset_of__retryCountForConnect_39() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____retryCountForConnect_39)); }
	inline int32_t get__retryCountForConnect_39() const { return ____retryCountForConnect_39; }
	inline int32_t* get_address_of__retryCountForConnect_39() { return &____retryCountForConnect_39; }
	inline void set__retryCountForConnect_39(int32_t value)
	{
		____retryCountForConnect_39 = value;
	}

	inline static int32_t get_offset_of__secure_40() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____secure_40)); }
	inline bool get__secure_40() const { return ____secure_40; }
	inline bool* get_address_of__secure_40() { return &____secure_40; }
	inline void set__secure_40(bool value)
	{
		____secure_40 = value;
	}

	inline static int32_t get_offset_of__sslConfig_41() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____sslConfig_41)); }
	inline ClientSslConfiguration_tC1E6007DDD30E46CD9EDAB1F4D341FE8DBB13089 * get__sslConfig_41() const { return ____sslConfig_41; }
	inline ClientSslConfiguration_tC1E6007DDD30E46CD9EDAB1F4D341FE8DBB13089 ** get_address_of__sslConfig_41() { return &____sslConfig_41; }
	inline void set__sslConfig_41(ClientSslConfiguration_tC1E6007DDD30E46CD9EDAB1F4D341FE8DBB13089 * value)
	{
		____sslConfig_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sslConfig_41), (void*)value);
	}

	inline static int32_t get_offset_of__stream_42() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____stream_42)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_42() const { return ____stream_42; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_42() { return &____stream_42; }
	inline void set__stream_42(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_42), (void*)value);
	}

	inline static int32_t get_offset_of__tcpClient_43() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____tcpClient_43)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get__tcpClient_43() const { return ____tcpClient_43; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of__tcpClient_43() { return &____tcpClient_43; }
	inline void set__tcpClient_43(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		____tcpClient_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tcpClient_43), (void*)value);
	}

	inline static int32_t get_offset_of__uri_44() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____uri_44)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get__uri_44() const { return ____uri_44; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of__uri_44() { return &____uri_44; }
	inline void set__uri_44(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		____uri_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uri_44), (void*)value);
	}

	inline static int32_t get_offset_of__waitTime_46() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ____waitTime_46)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__waitTime_46() const { return ____waitTime_46; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__waitTime_46() { return &____waitTime_46; }
	inline void set__waitTime_46(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____waitTime_46 = value;
	}

	inline static int32_t get_offset_of_OnClose_50() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ___OnClose_50)); }
	inline EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 * get_OnClose_50() const { return ___OnClose_50; }
	inline EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 ** get_address_of_OnClose_50() { return &___OnClose_50; }
	inline void set_OnClose_50(EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 * value)
	{
		___OnClose_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClose_50), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_51() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ___OnError_51)); }
	inline EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 * get_OnError_51() const { return ___OnError_51; }
	inline EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 ** get_address_of_OnError_51() { return &___OnError_51; }
	inline void set_OnError_51(EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 * value)
	{
		___OnError_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_51), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessage_52() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ___OnMessage_52)); }
	inline EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A * get_OnMessage_52() const { return ___OnMessage_52; }
	inline EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A ** get_address_of_OnMessage_52() { return &___OnMessage_52; }
	inline void set_OnMessage_52(EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A * value)
	{
		___OnMessage_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_52), (void*)value);
	}

	inline static int32_t get_offset_of_OnOpen_53() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D, ___OnOpen_53)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_OnOpen_53() const { return ___OnOpen_53; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_OnOpen_53() { return &___OnOpen_53; }
	inline void set_OnOpen_53(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___OnOpen_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpen_53), (void*)value);
	}
};

struct WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_StaticFields
{
public:
	// System.Int32 WebSocketSharp.WebSocket::_maxRetryCountForConnect
	int32_t ____maxRetryCountForConnect_25;
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___EmptyBytes_47;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_48;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___RandomNumber_49;

public:
	inline static int32_t get_offset_of__maxRetryCountForConnect_25() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_StaticFields, ____maxRetryCountForConnect_25)); }
	inline int32_t get__maxRetryCountForConnect_25() const { return ____maxRetryCountForConnect_25; }
	inline int32_t* get_address_of__maxRetryCountForConnect_25() { return &____maxRetryCountForConnect_25; }
	inline void set__maxRetryCountForConnect_25(int32_t value)
	{
		____maxRetryCountForConnect_25 = value;
	}

	inline static int32_t get_offset_of_EmptyBytes_47() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_StaticFields, ___EmptyBytes_47)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_EmptyBytes_47() const { return ___EmptyBytes_47; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_EmptyBytes_47() { return &___EmptyBytes_47; }
	inline void set_EmptyBytes_47(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___EmptyBytes_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyBytes_47), (void*)value);
	}

	inline static int32_t get_offset_of_FragmentLength_48() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_StaticFields, ___FragmentLength_48)); }
	inline int32_t get_FragmentLength_48() const { return ___FragmentLength_48; }
	inline int32_t* get_address_of_FragmentLength_48() { return &___FragmentLength_48; }
	inline void set_FragmentLength_48(int32_t value)
	{
		___FragmentLength_48 = value;
	}

	inline static int32_t get_offset_of_RandomNumber_49() { return static_cast<int32_t>(offsetof(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_StaticFields, ___RandomNumber_49)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_RandomNumber_49() const { return ___RandomNumber_49; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_RandomNumber_49() { return &___RandomNumber_49; }
	inline void set_RandomNumber_49(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___RandomNumber_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomNumber_49), (void*)value);
	}
};


// WebSocketSharp.WebSocketException
struct WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37  : public Exception_t
{
public:
	// WebSocketSharp.CloseStatusCode WebSocketSharp.WebSocketException::_code
	uint16_t ____code_17;

public:
	inline static int32_t get_offset_of__code_17() { return static_cast<int32_t>(offsetof(WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37, ____code_17)); }
	inline uint16_t get__code_17() const { return ____code_17; }
	inline uint16_t* get_address_of__code_17() { return &____code_17; }
	inline void set__code_17(uint16_t value)
	{
		____code_17 = value;
	}
};


// WebSocketSharp.WebSocketFrame
struct WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062  : public RuntimeObject
{
public:
	// System.Byte[] WebSocketSharp.WebSocketFrame::_extPayloadLength
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____extPayloadLength_0;
	// WebSocketSharp.Fin WebSocketSharp.WebSocketFrame::_fin
	uint8_t ____fin_1;
	// WebSocketSharp.Mask WebSocketSharp.WebSocketFrame::_mask
	uint8_t ____mask_2;
	// System.Byte[] WebSocketSharp.WebSocketFrame::_maskingKey
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____maskingKey_3;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocketFrame::_opcode
	uint8_t ____opcode_4;
	// WebSocketSharp.PayloadData WebSocketSharp.WebSocketFrame::_payloadData
	PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * ____payloadData_5;
	// System.Byte WebSocketSharp.WebSocketFrame::_payloadLength
	uint8_t ____payloadLength_6;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv1
	uint8_t ____rsv1_7;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv2
	uint8_t ____rsv2_8;
	// WebSocketSharp.Rsv WebSocketSharp.WebSocketFrame::_rsv3
	uint8_t ____rsv3_9;

public:
	inline static int32_t get_offset_of__extPayloadLength_0() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____extPayloadLength_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__extPayloadLength_0() const { return ____extPayloadLength_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__extPayloadLength_0() { return &____extPayloadLength_0; }
	inline void set__extPayloadLength_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____extPayloadLength_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extPayloadLength_0), (void*)value);
	}

	inline static int32_t get_offset_of__fin_1() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____fin_1)); }
	inline uint8_t get__fin_1() const { return ____fin_1; }
	inline uint8_t* get_address_of__fin_1() { return &____fin_1; }
	inline void set__fin_1(uint8_t value)
	{
		____fin_1 = value;
	}

	inline static int32_t get_offset_of__mask_2() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____mask_2)); }
	inline uint8_t get__mask_2() const { return ____mask_2; }
	inline uint8_t* get_address_of__mask_2() { return &____mask_2; }
	inline void set__mask_2(uint8_t value)
	{
		____mask_2 = value;
	}

	inline static int32_t get_offset_of__maskingKey_3() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____maskingKey_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__maskingKey_3() const { return ____maskingKey_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__maskingKey_3() { return &____maskingKey_3; }
	inline void set__maskingKey_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____maskingKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maskingKey_3), (void*)value);
	}

	inline static int32_t get_offset_of__opcode_4() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____opcode_4)); }
	inline uint8_t get__opcode_4() const { return ____opcode_4; }
	inline uint8_t* get_address_of__opcode_4() { return &____opcode_4; }
	inline void set__opcode_4(uint8_t value)
	{
		____opcode_4 = value;
	}

	inline static int32_t get_offset_of__payloadData_5() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____payloadData_5)); }
	inline PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * get__payloadData_5() const { return ____payloadData_5; }
	inline PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 ** get_address_of__payloadData_5() { return &____payloadData_5; }
	inline void set__payloadData_5(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * value)
	{
		____payloadData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____payloadData_5), (void*)value);
	}

	inline static int32_t get_offset_of__payloadLength_6() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____payloadLength_6)); }
	inline uint8_t get__payloadLength_6() const { return ____payloadLength_6; }
	inline uint8_t* get_address_of__payloadLength_6() { return &____payloadLength_6; }
	inline void set__payloadLength_6(uint8_t value)
	{
		____payloadLength_6 = value;
	}

	inline static int32_t get_offset_of__rsv1_7() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____rsv1_7)); }
	inline uint8_t get__rsv1_7() const { return ____rsv1_7; }
	inline uint8_t* get_address_of__rsv1_7() { return &____rsv1_7; }
	inline void set__rsv1_7(uint8_t value)
	{
		____rsv1_7 = value;
	}

	inline static int32_t get_offset_of__rsv2_8() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____rsv2_8)); }
	inline uint8_t get__rsv2_8() const { return ____rsv2_8; }
	inline uint8_t* get_address_of__rsv2_8() { return &____rsv2_8; }
	inline void set__rsv2_8(uint8_t value)
	{
		____rsv2_8 = value;
	}

	inline static int32_t get_offset_of__rsv3_9() { return static_cast<int32_t>(offsetof(WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062, ____rsv3_9)); }
	inline uint8_t get__rsv3_9() const { return ____rsv3_9; }
	inline uint8_t* get_address_of__rsv3_9() { return &____rsv3_9; }
	inline void set__rsv3_9(uint8_t value)
	{
		____rsv3_9 = value;
	}
};


// System.Action`1<System.Byte[]>
struct Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Exception>
struct Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<WebSocketSharp.WebSocketFrame>
struct Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`4<System.String,System.String,System.String,System.String>
struct Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
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


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.EndOfStreamException
struct EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !1 System.Func`2<System.Int32,System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_gshared (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * __this, int32_t ___arg0, const RuntimeMethod* method);
// T[] WebSocketSharp.Ext::SubArray<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE33CD23AFA1DE339E2E22FD222E57B9BB3B75D45_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_gshared (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, int64_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_gshared (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_m13BE596D4BB6EE74E7BABCD899B54676A90C51E5_gshared (Action_4_tDB82015AB9EE6C7A4D051C5068F94F41BD15DE0D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void WebSocketSharp.Net.AuthenticationResponse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7784319AE7ECA57A905EE48D1E891DC0B2370B9F (U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !1 System.Func`2<System.Int32,System.Boolean>::Invoke(!0)
inline bool Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7 (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * __this, int32_t ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_gshared)(__this, ___arg0, method);
}
// T[] WebSocketSharp.Ext::SubArray<System.Byte>(T[],System.Int32,System.Int32)
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE33CD23AFA1DE339E2E22FD222E57B9BB3B75D45 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE33CD23AFA1DE339E2E22FD222E57B9BB3B75D45_gshared)(___array0, ___startIndex1, ___length2, method);
}
// System.Void System.Action`1<System.Byte[]>::Invoke(!0)
inline void Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30 (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Exception>::Invoke(!0)
inline void Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, Exception_t * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, Exception_t *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass58_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_1__ctor_m6F5BFC08CF2A53A878AD583B106BF1CF9AD298A4 (U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::Invoke(!0)
inline void Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39 (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, int64_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *, int64_t, const RuntimeMethod*))Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_gshared)(__this, ___obj0, method);
}
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0)
inline int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, Il2CppChar, const RuntimeMethod*))Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_gshared)(___array0, ___value1, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__60::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__60__ctor_mFB9B94AB442FEEEB8917F6E969387AEE9019AF5D (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Ext/<SplitHeaderValue>d__60::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__60_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mCFFED4D84D2D52A9ADD0D64B8132EA4F1E98920E (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, const RuntimeMethod* method);
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800 (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, uint8_t, const RuntimeMethod*))List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared)(__this, ___item0, method);
}
// System.Void WebSocketSharp.WebSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCEC73689B90F49DE31AD9BA4CF9BDF3D7A50DCFC (U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsNullOrEmpty_mF38DD88AA46F2EDE7E1A18475749BB5829CA7463 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.Ext::IsToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ext_IsToken_m836919B16C331D4AE8EECEA14E2BF473F7A65D0F (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<WebSocketSharp.WebSocketFrame>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3 (Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6 (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocketFrame::ReadFrameAsync(System.IO.Stream,System.Boolean,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_ReadFrameAsync_mA3EF3B63D7335CDF0496B93C83BAFCC114C715FA (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, bool ___unmask1, Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocket::processReceivedFrame(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_processReceivedFrame_m943A9B4F5E63D09CB12891B1B542564BB5512DE3 (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean WebSocketSharp.WebSocket::get_HasMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_HasMessage_mB4F52B528A0D63FEC2ED6A66E1389241C2C83E5B (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_message_m2C62DF86FD22792AE89BA7BCB0967A1D1D1610B2 (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, const RuntimeMethod* method);
// System.Void WebSocketSharp.Logger::Fatal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Fatal_m6CB0848931AAFD950A61D612CA486B48F5E54BD5 (Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::fatal(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_fatal_m75F97637CFE61F9A4174D298DC4EDED88DE1DA5C (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, String_t* ___message0, Exception_t * ___exception1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_1__ctor_m8A828367B1886EBC02BFBDEDB310C0A23351C91E (U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA * __this, const RuntimeMethod* method);
// System.Void System.Action`4<System.String,System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_4__ctor_m13BE596D4BB6EE74E7BABCD899B54676A90C51E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m1D589487CD9CFF11C1045C1CA791247DE7BF8214 (WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<WebSocketSharp.WebSocketFrame>::Invoke(!0)
inline void Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D (Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * __this, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 *, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// WebSocketSharp.WebSocketFrame WebSocketSharp.WebSocketFrame::processHeader(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * WebSocketFrame_processHeader_m8EAAE9966002D6ECCE6B1092761666567673D785 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___header0, const RuntimeMethod* method);
// System.Void WebSocketSharp.PayloadData::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PayloadData__ctor_m8AF11637C1609C8F142E68E442F38DD6D6DC0E04 (PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int64_t ___length1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readExtendedPayloadLengthAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readExtendedPayloadLengthAsync_mD73FAE83554F35B5FF6795913163A5DF953AB697 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame1, Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readMaskingKeyAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readMaskingKeyAsync_mCE8562AACD4322E9FDC681836AB383C1E4AAD091 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame1, Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::readPayloadDataAsync(System.IO.Stream,WebSocketSharp.WebSocketFrame,System.Action`1<WebSocketSharp.WebSocketFrame>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_readPayloadDataAsync_m4E62A27963A07741DF0C45BA7B95FF0AA284BE17 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame1, Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * ___completed2, Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * ___error3, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocketFrame::Unmask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFrame_Unmask_m88E33CF785F56DBEBF2937FBEB2E2BFBF35B057E (WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * __this, const RuntimeMethod* method);
// System.Byte[] WebSocketSharp.WebSocketFrame::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocketFrame_ToArray_m1634616B1B5AD8A6A767C99AF3A3ACCBFC6DA0F7 (WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * __this, const RuntimeMethod* method);
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
// System.Void WebSocketSharp.Net.AuthenticationResponse/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5033972A0901B878AB21B4B9FB552B850AFE9C0B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 * L_0 = (U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 *)il2cpp_codegen_object_new(U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7784319AE7ECA57A905EE48D1E891DC0B2370B9F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WebSocketSharp.Net.AuthenticationResponse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7784319AE7ECA57A905EE48D1E891DC0B2370B9F (U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.Net.AuthenticationResponse/<>c::<initAsDigest>b__24_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CinitAsDigestU3Eb__24_0_mE6DED73B268112B7980F11C36990FF8339E4CC73 (U3CU3Ec_t36F53B0F4A95EB9D0577789EC8F5DD12C8819939 * __this, String_t* ___qop0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___qop0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m6F077207D4D2241204DA6AA9B1B617318DCE719A (U3CU3Ec__DisplayClass19_0_t65BF4E709B67B3A4194FE009521F044B276F3521 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.Ext/<>c__DisplayClass19_0::<ContainsTwice>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CContainsTwiceU3Eb__0_mA23E61C46A42182A80E3A508AF609A8EE2A1D3D6 (U3CU3Ec__DisplayClass19_0_t65BF4E709B67B3A4194FE009521F044B276F3521 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = ___idx0;
		int32_t L_1 = __this->get_end_0();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0062;
	}

IL_0012:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = __this->get_values_1();
		int32_t L_4 = ___idx0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		int32_t L_7 = ___idx0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_003f;
	}

IL_0021:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = __this->get_values_1();
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_003a;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0062;
	}

IL_003a:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = __this->get_len_2();
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0021;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_19 = __this->get_seek_3();
		int32_t L_20 = ___idx0;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		___idx0 = L_21;
		NullCheck(L_19);
		bool L_22;
		L_22 = Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7(L_19, L_21, /*hidden argument*/Func_2_Invoke_mE42F035B56D1C1B51E922AE8EA4261AA141DE6C7_RuntimeMethod_var);
		V_2 = L_22;
		goto IL_0062;
	}

IL_0062:
	{
		bool L_23 = V_2;
		return L_23;
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_m7F9E7846CE7543D8D701E76111148D4AB40DB194 (U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass57_0::<ReadBytesAsync>b__0(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CReadBytesAsyncU3Eb__0_m9D1C76C25A040C5E3FE751DBE68CA5D612D0826A (U3CU3Ec__DisplayClass57_0_t8E1EDEDC4E93A7C6D15F16A1C0DCE5DAD0A008C5 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE33CD23AFA1DE339E2E22FD222E57B9BB3B75D45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
			RuntimeObject* L_1 = ___ar0;
			NullCheck(L_0);
			int32_t L_2;
			L_2 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(17 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_0, L_1);
			V_0 = L_2;
			int32_t L_3 = V_0;
			V_1 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0099;
			}
		}

IL_001a:
		{
			int32_t L_5 = __this->get_retry_1();
			IL2CPP_RUNTIME_CLASS_INIT(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var);
			int32_t L_6 = ((Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_StaticFields*)il2cpp_codegen_static_fields_for(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var))->get__retry_1();
			V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0067;
			}
		}

IL_002c:
		{
			int32_t L_8 = __this->get_retry_1();
			V_3 = L_8;
			int32_t L_9 = V_3;
			__this->set_retry_1(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = __this->get_stream_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buff_2();
			int32_t L_12 = __this->get_offset_3();
			int32_t L_13 = __this->get_length_4();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_14 = __this->get_callback_5();
			NullCheck(L_10);
			RuntimeObject* L_15;
			L_15 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_10, L_11, L_12, L_13, L_14, NULL);
			goto IL_013a;
		}

IL_0067:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_16 = __this->get_completed_6();
			V_4 = (bool)((!(((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_17 = V_4;
			if (!L_17)
			{
				goto IL_0094;
			}
		}

IL_0076:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_18 = __this->get_completed_6();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get_buff_2();
			int32_t L_20 = __this->get_offset_3();
			IL2CPP_RUNTIME_CLASS_INIT(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
			L_21 = Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE33CD23AFA1DE339E2E22FD222E57B9BB3B75D45(L_19, 0, L_20, /*hidden argument*/Ext_SubArray_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mE33CD23AFA1DE339E2E22FD222E57B9BB3B75D45_RuntimeMethod_var);
			NullCheck(L_18);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_18, L_21, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_0094:
		{
			goto IL_013a;
		}

IL_0099:
		{
			int32_t L_22 = V_0;
			int32_t L_23 = __this->get_length_4();
			V_5 = (bool)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
			bool L_24 = V_5;
			if (!L_24)
			{
				goto IL_00cc;
			}
		}

IL_00a8:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_25 = __this->get_completed_6();
			V_6 = (bool)((!(((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_25) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_26 = V_6;
			if (!L_26)
			{
				goto IL_00ca;
			}
		}

IL_00b8:
		{
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_27 = __this->get_completed_6();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = __this->get_buff_2();
			NullCheck(L_27);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_27, L_28, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_00ca:
		{
			goto IL_013a;
		}

IL_00cc:
		{
			__this->set_retry_1(0);
			int32_t L_29 = __this->get_offset_3();
			int32_t L_30 = V_0;
			__this->set_offset_3(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)));
			int32_t L_31 = __this->get_length_4();
			int32_t L_32 = V_0;
			__this->set_length_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_32)));
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_33 = __this->get_stream_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get_buff_2();
			int32_t L_35 = __this->get_offset_3();
			int32_t L_36 = __this->get_length_4();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_37 = __this->get_callback_5();
			NullCheck(L_33);
			RuntimeObject* L_38;
			L_38 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_33, L_34, L_35, L_36, L_37, NULL);
			goto IL_013a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0117;
		}
		throw e;
	}

CATCH_0117:
	{ // begin catch(System.Exception)
		{
			V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_39 = __this->get_error_7();
			V_8 = (bool)((!(((RuntimeObject*)(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)L_39) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_40 = V_8;
			if (!L_40)
			{
				goto IL_0137;
			}
		}

IL_0129:
		{
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_41 = __this->get_error_7();
			Exception_t * L_42 = V_7;
			NullCheck(L_41);
			Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C(L_41, L_42, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var)));
		}

IL_0137:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013a;
		}
	} // end catch (depth: 1)

IL_013a:
	{
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m93FE2A9872B4244E2CC2FA200EA970E2D468AEFD (U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass58_0::<ReadBytesAsync>b__0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CReadBytesAsyncU3Eb__0_m57146D5BEAFF88956CBB67A9EBFA43C086483EEC (U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * __this, int64_t ___len0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass58_1_U3CReadBytesAsyncU3Eb__1_m72FD3C096ABF25DFD4CAD72B7676666B614EC89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * L_0 = (U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass58_1__ctor_m6F5BFC08CF2A53A878AD583B106BF1CF9AD298A4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * L_2 = V_0;
		int64_t L_3 = ___len0;
		NullCheck(L_2);
		L_2->set_len_0(L_3);
		U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_len_0();
		int32_t L_6 = __this->get_bufferLength_0();
		V_1 = (bool)((((int64_t)L_5) < ((int64_t)((int64_t)((int64_t)L_6))))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * L_8 = V_0;
		NullCheck(L_8);
		int64_t L_9 = L_8->get_len_0();
		__this->set_bufferLength_0(((int32_t)((int32_t)L_9)));
	}

IL_0035:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = __this->get_stream_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_buff_2();
		int32_t L_12 = __this->get_bufferLength_0();
		U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * L_13 = V_0;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_14 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass58_1_U3CReadBytesAsyncU3Eb__1_m72FD3C096ABF25DFD4CAD72B7676666B614EC89C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_15;
		L_15 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_10, L_11, 0, L_12, L_14, NULL);
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
// System.Void WebSocketSharp.Ext/<>c__DisplayClass58_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_1__ctor_m6F5BFC08CF2A53A878AD583B106BF1CF9AD298A4 (U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<>c__DisplayClass58_1::<ReadBytesAsync>b__1(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_1_U3CReadBytesAsyncU3Eb__1_m72FD3C096ABF25DFD4CAD72B7676666B614EC89C (U3CU3Ec__DisplayClass58_1_tD2C18906D694DFA9A44AE56589EC38AE0A103D43 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_0);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = L_0->get_stream_1();
			RuntimeObject* L_2 = ___ar0;
			NullCheck(L_1);
			int32_t L_3;
			L_3 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(17 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_1, L_2);
			V_0 = L_3;
			int32_t L_4 = V_0;
			V_1 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_00ce;
			}
		}

IL_0022:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_6 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_6);
			int32_t L_7 = L_6->get_retry_3();
			IL2CPP_RUNTIME_CLASS_INIT(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var);
			int32_t L_8 = ((Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_StaticFields*)il2cpp_codegen_static_fields_for(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var))->get__retry_1();
			V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_0070;
			}
		}

IL_0039:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_10 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_10);
			int32_t L_11 = L_10->get_retry_3();
			V_3 = L_11;
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_12 = __this->get_CSU24U3CU3E8__locals1_1();
			int32_t L_13 = V_3;
			NullCheck(L_12);
			L_12->set_retry_3(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_14 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_14);
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_15 = L_14->get_read_4();
			int64_t L_16 = __this->get_len_0();
			NullCheck(L_15);
			Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39(L_15, L_16, /*hidden argument*/Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
			goto IL_01bf;
		}

IL_0070:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_17 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_17);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_18 = L_17->get_completed_5();
			V_4 = (bool)((!(((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_19 = V_4;
			if (!L_19)
			{
				goto IL_00b8;
			}
		}

IL_0084:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_20 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_20);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_21 = L_20->get_dest_6();
			NullCheck(L_21);
			VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_21);
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_22 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_22);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_23 = L_22->get_completed_5();
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_24 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_24);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_25 = L_24->get_dest_6();
			NullCheck(L_25);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
			L_26 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_25);
			NullCheck(L_23);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_23, L_26, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_00b8:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_27 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_27);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_28 = L_27->get_dest_6();
			NullCheck(L_28);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_28, /*hidden argument*/NULL);
			goto IL_01bf;
		}

IL_00ce:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_29 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_29);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_30 = L_29->get_dest_6();
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_31 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_31);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = L_31->get_buff_2();
			int32_t L_33 = V_0;
			NullCheck(L_30);
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_30, L_32, 0, L_33);
			int32_t L_34 = V_0;
			int64_t L_35 = __this->get_len_0();
			V_5 = (bool)((((int64_t)((int64_t)((int64_t)L_34))) == ((int64_t)L_35))? 1 : 0);
			bool L_36 = V_5;
			if (!L_36)
			{
				goto IL_0158;
			}
		}

IL_00fc:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_37 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_37);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_38 = L_37->get_completed_5();
			V_6 = (bool)((!(((RuntimeObject*)(Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 *)L_38) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_39 = V_6;
			if (!L_39)
			{
				goto IL_0145;
			}
		}

IL_0111:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_40 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_40);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_41 = L_40->get_dest_6();
			NullCheck(L_41);
			VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_41);
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_42 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_42);
			Action_1_tE3E9F97010DBB53D9125ECA4C870DD7A1DFB10C1 * L_43 = L_42->get_completed_5();
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_44 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_44);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_45 = L_44->get_dest_6();
			NullCheck(L_45);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46;
			L_46 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(30 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_45);
			NullCheck(L_43);
			Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30(L_43, L_46, /*hidden argument*/Action_1_Invoke_mF3030EDB57624D184A8B38A3DCD100B482CA3F30_RuntimeMethod_var);
		}

IL_0145:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_47 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_47);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_48 = L_47->get_dest_6();
			NullCheck(L_48);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_48, /*hidden argument*/NULL);
			goto IL_01bf;
		}

IL_0158:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_49 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_49);
			L_49->set_retry_3(0);
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_50 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_50);
			Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_51 = L_50->get_read_4();
			int64_t L_52 = __this->get_len_0();
			int32_t L_53 = V_0;
			NullCheck(L_51);
			Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39(L_51, ((int64_t)il2cpp_codegen_subtract((int64_t)L_52, (int64_t)((int64_t)((int64_t)L_53)))), /*hidden argument*/Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
			goto IL_01bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0181;
		}
		throw e;
	}

CATCH_0181:
	{ // begin catch(System.Exception)
		{
			V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_54 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_54);
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_55 = L_54->get_dest_6();
			NullCheck(L_55);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_55, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_56 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_56);
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_57 = L_56->get_error_7();
			V_8 = (bool)((!(((RuntimeObject*)(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)L_57) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_58 = V_8;
			if (!L_58)
			{
				goto IL_01bc;
			}
		}

IL_01a9:
		{
			U3CU3Ec__DisplayClass58_0_t0F21AB5817A5039170AF084979F662D090EB9140 * L_59 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_59);
			Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_60 = L_59->get_error_7();
			Exception_t * L_61 = V_7;
			NullCheck(L_60);
			Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C(L_60, L_61, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_mFFDA4B6E4544D37A14A46ED010868613ED1F454C_RuntimeMethod_var)));
		}

IL_01bc:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01bf;
		}
	} // end catch (depth: 1)

IL_01bf:
	{
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
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__60::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__60__ctor_mFB9B94AB442FEEEB8917F6E969387AEE9019AF5D (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_2);
		return;
	}
}
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__60::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__60_System_IDisposable_Dispose_mDDF81E49287707ADBDAC81BF28B556914878CF78 (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebSocketSharp.Ext/<SplitHeaderValue>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSplitHeaderValueU3Ed__60_MoveNext_mD0C585EF109CCF69F42465F0A5663D6485AEE6C6 (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_0180;
	}

IL_0022:
	{
		goto IL_01dd;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		String_t* L_2 = __this->get_value_3();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		__this->set_U3ClenU3E5__1_7(L_3);
		int32_t L_4 = __this->get_U3ClenU3E5__1_7();
		__this->set_U3CendU3E5__2_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_5, ((int32_t)32), /*hidden argument*/NULL);
		__this->set_U3CbuffU3E5__3_9(L_5);
		__this->set_U3CescapedU3E5__4_10((bool)0);
		__this->set_U3CquotedU3E5__5_11((bool)0);
		__this->set_U3CiU3E5__6_12(0);
		goto IL_01a9;
	}

IL_0077:
	{
		String_t* L_6 = __this->get_value_3();
		int32_t L_7 = __this->get_U3CiU3E5__6_12();
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, L_7, /*hidden argument*/NULL);
		__this->set_U3CcU3E5__7_13(L_8);
		StringBuilder_t * L_9 = __this->get_U3CbuffU3E5__3_9();
		Il2CppChar L_10 = __this->get_U3CcU3E5__7_13();
		NullCheck(L_9);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_9, L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = __this->get_U3CcU3E5__7_13();
		V_1 = (bool)((((int32_t)L_12) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00db;
		}
	}
	{
		bool L_14 = __this->get_U3CescapedU3E5__4_10();
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		__this->set_U3CescapedU3E5__4_10((bool)0);
		goto IL_0197;
	}

IL_00c7:
	{
		bool L_16 = __this->get_U3CquotedU3E5__5_11();
		__this->set_U3CquotedU3E5__5_11((bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0));
		goto IL_0197;
	}

IL_00db:
	{
		Il2CppChar L_17 = __this->get_U3CcU3E5__7_13();
		V_3 = (bool)((((int32_t)L_17) == ((int32_t)((int32_t)92)))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_19 = __this->get_U3CiU3E5__6_12();
		int32_t L_20 = __this->get_U3CendU3E5__2_8();
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_01c3;
	}

IL_0103:
	{
		String_t* L_22 = __this->get_value_3();
		int32_t L_23 = __this->get_U3CiU3E5__6_12();
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_22, ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)), /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_24) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0127;
		}
	}
	{
		__this->set_U3CescapedU3E5__4_10((bool)1);
	}

IL_0127:
	{
		goto IL_0197;
	}

IL_0129:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = __this->get_separators_5();
		Il2CppChar L_27 = __this->get_U3CcU3E5__7_13();
		int32_t L_28;
		L_28 = Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4(L_26, L_27, /*hidden argument*/Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mD5F29E323D31B110F267B79CAF2E456F4C77ECE4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_28) > ((int32_t)(-1)))? 1 : 0);
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0196;
		}
	}
	{
		bool L_30 = __this->get_U3CquotedU3E5__5_11();
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_0152;
		}
	}
	{
		goto IL_0197;
	}

IL_0152:
	{
		StringBuilder_t * L_32 = __this->get_U3CbuffU3E5__3_9();
		StringBuilder_t * L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_33, /*hidden argument*/NULL);
		NullCheck(L_33);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_33, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), /*hidden argument*/NULL);
		StringBuilder_t * L_35 = __this->get_U3CbuffU3E5__3_9();
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		__this->set_U3CU3E2__current_1(L_36);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0180:
	{
		__this->set_U3CU3E1__state_0((-1));
		StringBuilder_t * L_37 = __this->get_U3CbuffU3E5__3_9();
		NullCheck(L_37);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_37, 0, /*hidden argument*/NULL);
		goto IL_0197;
	}

IL_0196:
	{
	}

IL_0197:
	{
		int32_t L_38 = __this->get_U3CiU3E5__6_12();
		V_8 = L_38;
		int32_t L_39 = V_8;
		__this->set_U3CiU3E5__6_12(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
	}

IL_01a9:
	{
		int32_t L_40 = __this->get_U3CiU3E5__6_12();
		int32_t L_41 = __this->get_U3CendU3E5__2_8();
		V_9 = (bool)((((int32_t)((((int32_t)L_40) > ((int32_t)L_41))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_9;
		if (L_42)
		{
			goto IL_0077;
		}
	}

IL_01c3:
	{
		StringBuilder_t * L_43 = __this->get_U3CbuffU3E5__3_9();
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		__this->set_U3CU3E2__current_1(L_44);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01dd:
	{
		__this->set_U3CU3E1__state_0((-1));
		return (bool)0;
	}
}
// System.String WebSocketSharp.Ext/<SplitHeaderValue>d__60::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CSplitHeaderValueU3Ed__60_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m307DCB9510C73446E80E47EBAEAEC93A8189C62C (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebSocketSharp.Ext/<SplitHeaderValue>d__60::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitHeaderValueU3Ed__60_System_Collections_IEnumerator_Reset_mB4CDEA29103BF6C753658361B7B09AE7217BAD2D (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSplitHeaderValueU3Ed__60_System_Collections_IEnumerator_Reset_mB4CDEA29103BF6C753658361B7B09AE7217BAD2D_RuntimeMethod_var)));
	}
}
// System.Object WebSocketSharp.Ext/<SplitHeaderValue>d__60::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSplitHeaderValueU3Ed__60_System_Collections_IEnumerator_get_Current_m6E128A45CBCD4717B09E739E88C76D89ABC63EE9 (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> WebSocketSharp.Ext/<SplitHeaderValue>d__60::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__60_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mCFFED4D84D2D52A9ADD0D64B8132EA4F1E98920E (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_2;
		L_2 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0027;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * L_4 = (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 *)il2cpp_codegen_object_new(U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894_il2cpp_TypeInfo_var);
		U3CSplitHeaderValueU3Ed__60__ctor_mFB9B94AB442FEEEB8917F6E969387AEE9019AF5D(L_4, 0, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002e:
	{
		U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * L_5 = V_0;
		String_t* L_6 = __this->get_U3CU3E3__value_4();
		NullCheck(L_5);
		L_5->set_value_3(L_6);
		U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * L_7 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = __this->get_U3CU3E3__separators_6();
		NullCheck(L_7);
		L_7->set_separators_5(L_8);
		U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.IEnumerator WebSocketSharp.Ext/<SplitHeaderValue>d__60::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitHeaderValueU3Ed__60_System_Collections_IEnumerable_GetEnumerator_m267C9E33F48CE9AD86BE96E1457B20F51974407D (U3CSplitHeaderValueU3Ed__60_tD43EEDC1FCCD5F1A361F92E7AB30728513288894 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSplitHeaderValueU3Ed__60_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mCFFED4D84D2D52A9ADD0D64B8132EA4F1E98920E(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void WebSocketSharp.HttpBase/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mE7F690FD98DC0C022D121F3A735059E8FBB1D9FB (U3CU3Ec__DisplayClass13_0_t559B3D847459DBCB7927AC97854203BE0F2434D4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.HttpBase/<>c__DisplayClass13_0::<readHeaders>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CreadHeadersU3Eb__0_mE8A17649C0801D62BC7D7DE0220788C1C5DBA559 (U3CU3Ec__DisplayClass13_0_t559B3D847459DBCB7927AC97854203BE0F2434D4 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___i0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 * L_2 = (EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_tDA8337E29A941EFB3E26721033B1826C1ACB0059_il2cpp_TypeInfo_var)));
		EndOfStreamException__ctor_m62AD97E22305B690B74C4EA6E3EAC36D10CE3800(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral089CEAF9555BAF2295EDAC24268380608D558B60)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CreadHeadersU3Eb__0_mE8A17649C0801D62BC7D7DE0220788C1C5DBA559_RuntimeMethod_var)));
	}

IL_0014:
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_3 = __this->get_buff_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED(L_3, (uint8_t)((int32_t)((uint8_t)L_4)), /*hidden argument*/List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		int32_t L_5 = __this->get_cnt_1();
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->set_cnt_1(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
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
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__25__ctor_m59FEEFBDFD671024D7BF56F6274B2EDC8314A82B (U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m666702A9AC9A0BBACEC35C76BD41DBF25A594D74 (U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebSocketSharp.PayloadData/<GetEnumerator>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__25_MoveNext_mEF0041F3284774F58FF58FD7713E60EDDADFB13D (U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0063;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = L_3->get__data_0();
		__this->set_U3CU3Es__1_3(L_4);
		__this->set_U3CU3Es__2_4(0);
		goto IL_0078;
	}

IL_003b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_U3CU3Es__1_3();
		int32_t L_6 = __this->get_U3CU3Es__2_4();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_U3CbU3E5__3_5(L_8);
		uint8_t L_9 = __this->get_U3CbU3E5__3_5();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0063:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_10 = __this->get_U3CU3Es__2_4();
		__this->set_U3CU3Es__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_0078:
	{
		int32_t L_11 = __this->get_U3CU3Es__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_U3CU3Es__1_3();
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_U3CU3Es__1_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		return (bool)0;
	}
}
// System.Byte WebSocketSharp.PayloadData/<GetEnumerator>d__25::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CGetEnumeratorU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_m2206BE578742D8668F2A79F45D72C4523481FA62 (U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebSocketSharp.PayloadData/<GetEnumerator>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m64536D08F5178F786F82EC283FFEAEFAF0D7CBD7 (U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m64536D08F5178F786F82EC283FFEAEFAF0D7CBD7_RuntimeMethod_var)));
	}
}
// System.Object WebSocketSharp.PayloadData/<GetEnumerator>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__25_System_Collections_IEnumerator_get_Current_m86A9BB8534FCA79FEE6BBA684F821BCD613CCE54 (U3CGetEnumeratorU3Ed__25_t08528F88A1F65BC3788727BF8A017B5DF30A8B14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
// System.Void WebSocketSharp.WebSocket/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9CE697B305338F03E117DF33D78B95C0C8C5C34C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 * L_0 = (U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 *)il2cpp_codegen_object_new(U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCEC73689B90F49DE31AD9BA4CF9BDF3D7A50DCFC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCEC73689B90F49DE31AD9BA4CF9BDF3D7A50DCFC (U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocket/<>c::<checkProtocols>b__120_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CcheckProtocolsU3Eb__120_0_mE64F80071A440271BF5D647B9A1CA1A83C3BD094 (U3CU3Ec_t2E7858355BB8EEA8F084AF1D43247DD0461FF050 * __this, String_t* ___protocol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___protocol0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ext_IsNullOrEmpty_mF38DD88AA46F2EDE7E1A18475749BB5829CA7463(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ___protocol0;
		IL2CPP_RUNTIME_CLASS_INIT(Ext_tC1CA939136CF4B9E53BD56F22B50E9B63408A69D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Ext_IsToken_m836919B16C331D4AE8EECEA14E2BF473F7A65D0F(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		return (bool)G_B3_0;
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass174_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass174_0__ctor_m7A5A306FC1F34F641A072DAC624FADA9F4B273CC (U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<startReceiving>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__0_mC9A4B4B73BDB02337C370ED050CA9B22D390111A (U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__1_mB8BE27893978CEB871992FFC225B5FBE2B99AFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__2_mDD468AB43D68AB92AD763277D316325C36BB6CA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * V_0 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * V_1 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_2 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_2 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B4_0 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B4_3 = NULL;
	Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * G_B3_0 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B3_3 = NULL;
	{
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = L_0->get__stream_42();
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_2 = __this->get_U3CU3E9__1_2();
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = 0;
			G_B2_2 = L_1;
			goto IL_002b;
		}
	}
	{
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_4 = (Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 *)il2cpp_codegen_object_new(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var);
		Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__1_mB8BE27893978CEB871992FFC225B5FBE2B99AFA4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__1_2(L_5);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002b:
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_7 = __this->get_U3CU3E9__2_3();
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			G_B4_3 = G_B2_2;
			goto IL_004a;
		}
	}
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_9 = (Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 *)il2cpp_codegen_object_new(Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90_il2cpp_TypeInfo_var);
		Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6(L_9, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__2_mDD468AB43D68AB92AD763277D316325C36BB6CA9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m36C6688B253977218074ACFD83304E717384FDE6_RuntimeMethod_var);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_10 = L_9;
		V_1 = L_10;
		__this->set_U3CU3E9__2_3(L_10);
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_11 = V_1;
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_004a:
	{
		WebSocketFrame_ReadFrameAsync_mA3EF3B63D7335CDF0496B93C83BAFCC114C715FA(G_B4_3, (bool)G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<startReceiving>b__1(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__1_mB8BE27893978CEB871992FFC225B5FBE2B99AFA4 (U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3 * __this, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame0, const RuntimeMethod* method)
{
	bool V_0 = false;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = __this->get_U3CU3E4__this_0();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_1 = ___frame0;
		NullCheck(L_0);
		bool L_2;
		L_2 = WebSocket_processReceivedFrame_m943A9B4F5E63D09CB12891B1B542564BB5512DE3(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		uint16_t L_4 = L_3->get__readyState_37();
		il2cpp_codegen_memory_barrier();
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_7 = L_6->get__receivingExited_38();
		V_1 = L_7;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_8 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_10, /*hidden argument*/NULL);
	}

IL_0042:
	{
		goto IL_0094;
	}

IL_0044:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = __this->get_receive_1();
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_13 = __this->get_U3CU3E4__this_0();
		NullCheck(L_13);
		bool L_14 = L_13->get__inMessage_23();
		il2cpp_codegen_memory_barrier();
		if (L_14)
		{
			goto IL_0081;
		}
	}
	{
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_15 = __this->get_U3CU3E4__this_0();
		NullCheck(L_15);
		bool L_16;
		L_16 = WebSocket_get_HasMessage_mB4F52B528A0D63FEC2ED6A66E1389241C2C83E5B(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_17 = __this->get_U3CU3E4__this_0();
		NullCheck(L_17);
		uint16_t L_18 = L_17->get__readyState_37();
		il2cpp_codegen_memory_barrier();
		G_B11_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B11_0 = 1;
	}

IL_0082:
	{
		V_3 = (bool)G_B11_0;
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0094;
	}

IL_0088:
	{
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_20 = __this->get_U3CU3E4__this_0();
		NullCheck(L_20);
		WebSocket_message_m2C62DF86FD22792AE89BA7BCB0967A1D1D1610B2(L_20, /*hidden argument*/NULL);
	}

IL_0094:
	{
		return;
	}
}
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass174_0::<startReceiving>b__2(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass174_0_U3CstartReceivingU3Eb__2_mDD468AB43D68AB92AD763277D316325C36BB6CA9 (U3CU3Ec__DisplayClass174_0_tDC2F8B86357B0CBA0F05689508707DA81C1BADE3 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8 * L_1 = L_0->get__logger_24();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_2 = ___ex0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		Logger_Fatal_m6CB0848931AAFD950A61D612CA486B48F5E54BD5(L_1, L_3, /*hidden argument*/NULL);
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_4 = __this->get_U3CU3E4__this_0();
		Exception_t * L_5 = ___ex0;
		NullCheck(L_4);
		WebSocket_fatal_m75F97637CFE61F9A4174D298DC4EDED88DE1DA5C(L_4, _stringLiteralCABD34D7CF39245177859A0BC4C6FF68D6972CF6, L_5, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass176_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass176_0__ctor_m817EC2B37B746D9D2F0370A78DBF0CD55EEBDFEB (U3CU3Ec__DisplayClass176_0_t18332CFB5D194AADD2180125EF742E4AA54770AE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocket/<>c__DisplayClass176_0::<validateSecWebSocketExtensionsServerHeader>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass176_0_U3CvalidateSecWebSocketExtensionsServerHeaderU3Eb__0_mB42F2DB6D36C3E316209CBB1917A1C086C2102D6 (U3CU3Ec__DisplayClass176_0_t18332CFB5D194AADD2180125EF742E4AA54770AE * __this, String_t* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872863942A17DEDCD0300265682277E23AC55930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_0, /*hidden argument*/NULL);
		___t0 = L_1;
		String_t* L_2 = ___t0;
		String_t* L_3 = __this->get_method_0();
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_5 = ___t0;
		bool L_6;
		L_6 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_5, _stringLiteral872863942A17DEDCD0300265682277E23AC55930, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_7 = ___t0;
		bool L_8;
		L_8 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_7, _stringLiteralB7745A740C0A1346D860F22A7638EF5A029B56E5, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_9 = V_0;
		return L_9;
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
// System.Void WebSocketSharp.WebSocket/<>c__DisplayClass177_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass177_0__ctor_m98240A1777735DBD2FEAE0554243BB03656A7DE8 (U3CU3Ec__DisplayClass177_0_tE87D692432B89B0680F4CC8BBAAC85A3FA9C8267 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocket/<>c__DisplayClass177_0::<validateSecWebSocketProtocolServerHeader>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass177_0_U3CvalidateSecWebSocketProtocolServerHeaderU3Eb__0_m0A7553437DD45F03D6DC4A2F83FD748D6FCEFC92 (U3CU3Ec__DisplayClass177_0_tE87D692432B89B0680F4CC8BBAAC85A3FA9C8267 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___p0;
		String_t* L_1 = __this->get_value_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0__ctor_m978B6CBA6A56E0DDDE776F8213C4AB810D011296 (U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Action`4<System.String,System.String,System.String,System.String> WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_0::<dump>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * U3CU3Ec__DisplayClass65_0_U3CdumpU3Eb__0_mE62FACCEFC7137010FE962B2E4EEBD491CD781C5 (U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass65_1_U3CdumpU3Eb__1_mE4C1EAE3820206DA502B638776F2D9D8C164A59E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA * V_0 = NULL;
	Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA * L_0 = (U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass65_1__ctor_m8A828367B1886EBC02BFBDEDB310C0A23351C91E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_lineCnt_0(((int64_t)((int64_t)0)));
		U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA * L_3 = V_0;
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_4 = (Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E *)il2cpp_codegen_object_new(Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E_il2cpp_TypeInfo_var);
		Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass65_1_U3CdumpU3Eb__1_mE4C1EAE3820206DA502B638776F2D9D8C164A59E_RuntimeMethod_var), /*hidden argument*/Action_4__ctor_mE339CC347E4BB669DDFC6634B8A25A3DD9A4EA6C_RuntimeMethod_var);
		V_1 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		Action_4_t7D06D4130BE58966C788869816B9B3D7DCE50B3E * L_5 = V_1;
		return L_5;
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_1__ctor_m8A828367B1886EBC02BFBDEDB310C0A23351C91E (U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_1::<dump>b__1(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_1_U3CdumpU3Eb__1_mE4C1EAE3820206DA502B638776F2D9D8C164A59E (U3CU3Ec__DisplayClass65_1_t0BD0AA617857F69BCC6601C1BD4B843F297DCFAA * __this, String_t* ___arg10, String_t* ___arg21, String_t* ___arg32, String_t* ___arg43, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		StringBuilder_t * L_1 = L_0->get_buff_0();
		U3CU3Ec__DisplayClass65_0_tB31CEB184DACD33E0758CC27AB38BF356627D1C7 * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_lineFmt_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		int64_t L_6 = __this->get_lineCnt_0();
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)((int64_t)((int64_t)1))));
		int64_t L_7 = V_0;
		__this->set_lineCnt_0(L_7);
		int64_t L_8 = V_0;
		int64_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_10);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_5;
		String_t* L_12 = ___arg10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_11;
		String_t* L_14 = ___arg21;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_13;
		String_t* L_16 = ___arg32;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_15;
		String_t* L_18 = ___arg43;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		NullCheck(L_1);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_AppendFormat_m97C4AAABA51FCC2D426BD22FE05BEC045AB9D6F8(L_1, L_3, L_17, /*hidden argument*/NULL);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_mE16D95871630B07325AD773A41B408F7E309AAF0 (U3CU3Ec__DisplayClass69_0_tD474E1CD75D56DAF84A260C3EAC068CF4BCB7F5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass69_0::<readExtendedPayloadLengthAsync>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0_U3CreadExtendedPayloadLengthAsyncU3Eb__0_m41B3DEFF4AE1756D5F86B0D555AB4DBC9CC7580E (U3CU3Ec__DisplayClass69_0_tD474E1CD75D56DAF84A260C3EAC068CF4BCB7F5F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = __this->get_len_0();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C2ECDC0A2A9BA225C3FC6116423FBB91A59FB9B));
		String_t* L_3 = V_1;
		WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37 * L_4 = (WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m1D589487CD9CFF11C1045C1CA791247DE7BF8214(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass69_0_U3CreadExtendedPayloadLengthAsyncU3Eb__0_m41B3DEFF4AE1756D5F86B0D555AB4DBC9CC7580E_RuntimeMethod_var)));
	}

IL_0021:
	{
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_5 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		NullCheck(L_5);
		L_5->set__extPayloadLength_0(L_6);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_7 = __this->get_completed_2();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_8 = __this->get_frame_1();
		NullCheck(L_7);
		Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D(L_7, L_8, /*hidden argument*/Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0__ctor_mF4E474BE369A518104AC17496D128AFAB6C1D536 (U3CU3Ec__DisplayClass71_0_t524F10983D8B545537E673755B2D6296459FDF20 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0::<readHeaderAsync>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0_U3CreadHeaderAsyncU3Eb__0_mEC3BBD01EA3E0C76C233BE8FE22B30E350EBCF58 (U3CU3Ec__DisplayClass71_0_t524F10983D8B545537E673755B2D6296459FDF20 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_1;
		L_1 = WebSocketFrame_processHeader_m8EAAE9966002D6ECCE6B1092761666567673D785(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_2 = __this->get_completed_0();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_3 = V_0;
		NullCheck(L_2);
		Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D(L_2, L_3, /*hidden argument*/Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0__ctor_mA97E4911AE24552AED8E32CFF206F2D5DEF72254 (U3CU3Ec__DisplayClass73_0_t1057EB2B08FE65FF828568017E4A41F9BA3A1396 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0::<readMaskingKeyAsync>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0_U3CreadMaskingKeyAsyncU3Eb__0_m265A9E8A89F6690153686F4639EBFF86F1C7EDDF (U3CU3Ec__DisplayClass73_0_t1057EB2B08FE65FF828568017E4A41F9BA3A1396 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int32_t L_1 = __this->get_len_0();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44B2B5EE14208A9AC8F2D65D8D3FF9177FB04899));
		String_t* L_3 = V_1;
		WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37 * L_4 = (WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m1D589487CD9CFF11C1045C1CA791247DE7BF8214(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass73_0_U3CreadMaskingKeyAsyncU3Eb__0_m265A9E8A89F6690153686F4639EBFF86F1C7EDDF_RuntimeMethod_var)));
	}

IL_0021:
	{
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_5 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		NullCheck(L_5);
		L_5->set__maskingKey_3(L_6);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_7 = __this->get_completed_2();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_8 = __this->get_frame_1();
		NullCheck(L_7);
		Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D(L_7, L_8, /*hidden argument*/Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0__ctor_mAC50BF187405925E61579B35C9FE70B7881CB8A8 (U3CU3Ec__DisplayClass75_0_t433F53A4E1AF13F236264CA7D57C25A2841386F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0::<readPayloadDataAsync>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0_U3CreadPayloadDataAsyncU3Eb__0_mC54D0616E3289301099C151E9BC011A500032619 (U3CU3Ec__DisplayClass75_0_t433F53A4E1AF13F236264CA7D57C25A2841386F7 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		int64_t L_1 = __this->get_len_0();
		V_0 = (bool)((((int32_t)((((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))))) == ((int64_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05EE84C28CC3F94DE861A55800284B34115C4B7B));
		String_t* L_3 = V_1;
		WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37 * L_4 = (WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketException_t8618E98DA325B39C6F1DCFA62AB1BCEA29EA1A37_il2cpp_TypeInfo_var)));
		WebSocketException__ctor_m1D589487CD9CFF11C1045C1CA791247DE7BF8214(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass75_0_U3CreadPayloadDataAsyncU3Eb__0_mC54D0616E3289301099C151E9BC011A500032619_RuntimeMethod_var)));
	}

IL_0021:
	{
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_5 = __this->get_frame_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		int64_t L_7 = __this->get_len_0();
		PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * L_8 = (PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 *)il2cpp_codegen_object_new(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70_il2cpp_TypeInfo_var);
		PayloadData__ctor_m8AF11637C1609C8F142E68E442F38DD6D6DC0E04(L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set__payloadData_5(L_8);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_9 = __this->get_completed_2();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_10 = __this->get_frame_1();
		NullCheck(L_9);
		Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D(L_9, L_10, /*hidden argument*/Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0__ctor_m23002D751D9E383CA1104CC6987681D788DE03EE (U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::<ReadFrameAsync>b__0(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__0_mBA8C02FE7ECC6D0F2EF45F0946A1AF07D2640BC9 (U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812 * __this, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__1_mEC261755B582BAC0AA40C2BADC725D1946ED1AAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * V_0 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B2_0 = NULL;
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * G_B2_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_2 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B1_0 = NULL;
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * G_B1_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_2 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_1 = ___frame0;
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_2 = __this->get_U3CU3E9__1_6();
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0026;
		}
	}
	{
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_4 = (Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 *)il2cpp_codegen_object_new(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var);
		Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__1_mEC261755B582BAC0AA40C2BADC725D1946ED1AAE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__1_6(L_5);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_7 = __this->get_error_3();
		WebSocketFrame_readExtendedPayloadLengthAsync_mD73FAE83554F35B5FF6795913163A5DF953AB697(G_B2_2, G_B2_1, G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::<ReadFrameAsync>b__1(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__1_mEC261755B582BAC0AA40C2BADC725D1946ED1AAE (U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812 * __this, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__2_m04D9031A2F5E63BECE18197FEFA7FE4BBBC74F49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * V_0 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B2_0 = NULL;
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * G_B2_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_2 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B1_0 = NULL;
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * G_B1_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_2 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_1 = ___frame10;
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_2 = __this->get_U3CU3E9__2_5();
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0026;
		}
	}
	{
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_4 = (Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 *)il2cpp_codegen_object_new(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var);
		Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__2_m04D9031A2F5E63BECE18197FEFA7FE4BBBC74F49_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__2_5(L_5);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_7 = __this->get_error_3();
		WebSocketFrame_readMaskingKeyAsync_mCE8562AACD4322E9FDC681836AB383C1E4AAD091(G_B2_2, G_B2_1, G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::<ReadFrameAsync>b__2(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__2_m04D9031A2F5E63BECE18197FEFA7FE4BBBC74F49 (U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812 * __this, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame20, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__3_m510DA8E8CFEB50AC60306ED0F49690E4B4EC59C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * V_0 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B2_0 = NULL;
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * G_B2_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_2 = NULL;
	Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * G_B1_0 = NULL;
	WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * G_B1_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_2 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_stream_0();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_1 = ___frame20;
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_2 = __this->get_U3CU3E9__3_4();
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0026;
		}
	}
	{
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_4 = (Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 *)il2cpp_codegen_object_new(Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453_il2cpp_TypeInfo_var);
		Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__3_m510DA8E8CFEB50AC60306ED0F49690E4B4EC59C1_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m476B837F29C9FD662F5BC3430D00F884D02381C3_RuntimeMethod_var);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__3_4(L_5);
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		Action_1_t34F00247DCE829C59C4C5AAECAE03F05F060DD90 * L_7 = __this->get_error_3();
		WebSocketFrame_readPayloadDataAsync_m4E62A27963A07741DF0C45BA7B95FF0AA284BE17(G_B2_2, G_B2_1, G_B2_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0::<ReadFrameAsync>b__3(WebSocketSharp.WebSocketFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass82_0_U3CReadFrameAsyncU3Eb__3_m510DA8E8CFEB50AC60306ED0F49690E4B4EC59C1 (U3CU3Ec__DisplayClass82_0_t46BFBBD9219AF203BD6401A466667B0D3528D812 * __this, WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * ___frame30, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->get_unmask_1();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_2 = ___frame30;
		NullCheck(L_2);
		WebSocketFrame_Unmask_m88E33CF785F56DBEBF2937FBEB2E2BFBF35B057E(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		Action_1_t80A779CDD33D76C00C64F1E8301ED7EED3CD2453 * L_3 = __this->get_completed_2();
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_4 = ___frame30;
		NullCheck(L_3);
		Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D(L_3, L_4, /*hidden argument*/Action_1_Invoke_mBE371ACDDD46FC73BE7D48DEB18B6CFDDB73C56D_RuntimeMethod_var);
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
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__84__ctor_mE35683B2AC6909C61989F7E23400B83AB54E307E (U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__84_System_IDisposable_Dispose_mEC14577125C3D489C7A775A292CC0EB0A3CCCCA4 (U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__84_MoveNext_mFA3E1036F612813405D1A993085E88A6DB833830 (U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0063;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		WebSocketFrame_t3DAF9F2A7795E5D03C7D2F622C170B93F0CB3062 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
		L_4 = WebSocketFrame_ToArray_m1634616B1B5AD8A6A767C99AF3A3ACCBFC6DA0F7(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3Es__1_3(L_4);
		__this->set_U3CU3Es__2_4(0);
		goto IL_0078;
	}

IL_003b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get_U3CU3Es__1_3();
		int32_t L_6 = __this->get_U3CU3Es__2_4();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_U3CbU3E5__3_5(L_8);
		uint8_t L_9 = __this->get_U3CbU3E5__3_5();
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0063:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_10 = __this->get_U3CU3Es__2_4();
		__this->set_U3CU3Es__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_0078:
	{
		int32_t L_11 = __this->get_U3CU3Es__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_U3CU3Es__1_3();
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_U3CU3Es__1_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		return (bool)0;
	}
}
// System.Byte WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::System.Collections.Generic.IEnumerator<System.Byte>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CGetEnumeratorU3Ed__84_System_Collections_Generic_IEnumeratorU3CSystem_ByteU3E_get_Current_mF55204F574522B45A9B73E740620B0895A4F06B1 (U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__84_System_Collections_IEnumerator_Reset_m25F46351DB582AC899E00D5E5D95198CC9F8547E (U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__84_System_Collections_IEnumerator_Reset_m25F46351DB582AC899E00D5E5D95198CC9F8547E_RuntimeMethod_var)));
	}
}
// System.Object WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__84_System_Collections_IEnumerator_get_Current_m57ABAB2432331A255426FE68C7DB8050A32584B5 (U3CGetEnumeratorU3Ed__84_t356BA699D4E29C76A84F2EC6142652BB64F9A014 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = __this->get_U3CU3E2__current_1();
		uint8_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
