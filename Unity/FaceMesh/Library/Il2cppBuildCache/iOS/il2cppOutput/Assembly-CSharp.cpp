#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct ARTrackable_2_t0C3A99AF5B35E36F452AD67B5A0F2F26F2F561B2;
// System.Action`1<UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs>
struct Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7;
// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>
struct Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t5DF84322FFE12A24465E48164961CD724D109521;
// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_t1FE41E5A9AD1036B100A0B1C10765E08A99E5D81;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARFace>
struct Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_t8235C75AFA281CB8F4C1770A4414C7B3B05FFB36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>
struct List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystem>
struct List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>
struct List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_tC33379D6C1D34C3505367ACBCA044A8215F4818D;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.XR.ARFoundation.ARFace[]
struct ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.UI.Slider[]
struct SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.ARFoundation.ARFace
struct ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1;
// UnityEngine.XR.ARFoundation.ARFaceManager
struct ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647;
// UnityEngine.XR.ARKit.ARKitFaceSubsystem
struct ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_tB008302FB922AA76D1ADD8304EACE6CDF5C344F8;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_tC1E6007DDD30E46CD9EDAB1F4D341FE8DBB13089;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_tA6255FCF485BCD2A23F7225EBADC9E76E085C2B4;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_tCA5A17940F79607E2EEACED1AB20E54085EF9868;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// WebSocketSharp.Logger
struct Logger_t11872BFB6DA6F647710BAC76075E0313F4976ED8;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_t0C462C42F5D4694D341ECF99CA90EF819DD73D4C;
// WebSocketSharp.PayloadData
struct PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SliderSceneManager
struct SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnitySceneManager
struct UnitySceneManager_t16BB3F50ED32F89684BE837994BEA48C858A9E75;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// WebSocketSharp.WebSocket
struct WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t33B08F6FCD5F31523719A6DD3C18A6ECBC8D18F2;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor
struct XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// face_tracking
struct face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// SliderSceneManager/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider
struct Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7;

IL2CPP_EXTERN_C RuntimeClass* ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* blendshapeLocations_tB8941D3E7A4A17415B6A63C9C0CC38800FCEF19E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013828B2C7CDB53F82429017F623C1137F737C5B;
IL2CPP_EXTERN_C String_t* _stringLiteral08B9291AC0E57ED37C9C6DB7CEB2C2B1ECD401CF;
IL2CPP_EXTERN_C String_t* _stringLiteral09E4BB6739137675ECA9BD9626DC7A0E685CDCA2;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B496F869CCA773EA64EB27FB6A8EB2964447749;
IL2CPP_EXTERN_C String_t* _stringLiteral22160B11970B864AB848328ED0BAACF7FA091137;
IL2CPP_EXTERN_C String_t* _stringLiteral28C27E83B9DFB0DB91B2C168FF473C28E3EEAF23;
IL2CPP_EXTERN_C String_t* _stringLiteral2D160B02125FEC4F0D8F84AB8C3E661AF0B735E6;
IL2CPP_EXTERN_C String_t* _stringLiteral35DC0ACAEDA877E5E8DB50EDB148F4A3F927375E;
IL2CPP_EXTERN_C String_t* _stringLiteral388131F9B3667D7C15C2426D6680C5D9D5DC7101;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF863C1F0EC3761EB1C81AD9BA2A34211CC4C8F;
IL2CPP_EXTERN_C String_t* _stringLiteral3C509ECDC57DBCB291B0970903B8541F84818155;
IL2CPP_EXTERN_C String_t* _stringLiteral3E35AE3D3F1651430B25B9138BA9D1B093310EC0;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral500EFAC7BFE1507F2278E076B7A9DA24157CC041;
IL2CPP_EXTERN_C String_t* _stringLiteral6C7C03A7766C6A688D11A2FC1D845425E76B5495;
IL2CPP_EXTERN_C String_t* _stringLiteral719A382B9ED8AC783638978FB890914A308AFC44;
IL2CPP_EXTERN_C String_t* _stringLiteral78DCFB9FAD63D13FE9A9101BF7605F4A931EF20D;
IL2CPP_EXTERN_C String_t* _stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71;
IL2CPP_EXTERN_C String_t* _stringLiteralA882110227985390876B88670A26BFDD7E9BF516;
IL2CPP_EXTERN_C String_t* _stringLiteralB7DB039D09110342F4EE9A9C96559FD5DCE2F3F1;
IL2CPP_EXTERN_C String_t* _stringLiteralC0F5C27A5E0E73D16EFC920782F52CF1F98D2B7F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0876CFC89FA66DF12BB402D85D4883298AC4C3F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7327C017D1E8A2F19C40AE2E6911EDA789AEE8;
IL2CPP_EXTERN_C String_t* _stringLiteralE05F8E202A34FE5B0F9C2552FAC237EAE3494A18;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF2286301A288866AEAEF2185AF91BD6C502273;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackingState_m82B5153FD82572CB261CA3429F2F7844592914EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mE692B553BBB816D50C60C90825B9AFEEA8130210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m670FC38AFF50325569FE539B94E663C97A79FC55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m86FEA601D9A453957DA0E61642BAD12FF2CA0E5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2E29783CCFF83F9CFCCEECE96D95EEC2D7C3A46A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m2F64AADC00E5B107A3C2BF45036DA629638F0D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m3F4C677754E04CC5E95D9BD9CD11C80191DBD774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m6FE9E8462B264584E80C3AE666BA7E40F9EF9CAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m383935C666B52E9F3F6904C08B320CAF4B28213C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_mD989135403C8D2F333ECDC69D66CF3E3443273AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mA4129B825AED80A3AB88417D9844E00FB7A988EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mCF2A155AE611B8440C39E290C758CA5B30A7A955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SliderSceneManager_U3CConnectActionU3Eb__17_0_mFF6D42DE88C0928E93C15FED1F0683FDE2396BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SliderSceneManager_U3CConnectActionU3Eb__17_1_mC60508F09D413327A4A3A32CA96A2ACEEBC9D1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SliderSceneManager_U3CConnectActionU3Eb__17_2_mC2195DD86D4C7E74020DB151D62EF0486C3DD4A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SliderSceneManager_U3CConnectActionU3Eb__17_3_mF32B3B7D11BDA880ECFD44CABE932F7281C6E606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CStartU3Eb__0_m77EC40B518B613ACF5E11D8E0399B0538299917A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* face_tracking_OnFaceChanged_m6DC2A9903DA710357DC820722BD31E21643278B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* face_tracking_U3CConnectActionU3Eb__17_0_m76ED488721DD4BBB74E43DA043FCCFACF7623B73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* face_tracking_U3CConnectActionU3Eb__17_1_mDB17E743C03368CB5D43918E227B856CC06C7A8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* face_tracking_U3CConnectActionU3Eb__17_2_mD80B5F568B94EDA61FE85CA08331C3B400FFAAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* face_tracking_U3CConnectActionU3Eb__17_3_mACD8EBB2BFFC30F6799CDE8D5172303A26F52092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* blendshapeLocations_tB8941D3E7A4A17415B6A63C9C0CC38800FCEF19E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>
struct List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21, ____items_1)); }
	inline ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* get__items_1() const { return ____items_1; }
	inline ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21_StaticFields, ____emptyArray_5)); }
	inline ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// SliderSceneManager/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34  : public RuntimeObject
{
public:
	// System.Object SliderSceneManager/<>c__DisplayClass12_0::i
	RuntimeObject * ___i_0;
	// SliderSceneManager SliderSceneManager/<>c__DisplayClass12_0::<>4__this
	SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_i_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34, ___i_0)); }
	inline RuntimeObject * get_i_0() const { return ___i_0; }
	inline RuntimeObject ** get_address_of_i_0() { return &___i_0; }
	inline void set_i_0(RuntimeObject * value)
	{
		___i_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___i_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34, ___U3CU3E4__this_1)); }
	inline SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs
struct ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace> UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs::<added>k__BackingField
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace> UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs::<updated>k__BackingField
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace> UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs::<removed>k__BackingField
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs
struct ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12_marshaled_pinvoke
{
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs
struct ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12_marshaled_com
{
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CremovedU3Ek__BackingField_2;
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


// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_tA6255FCF485BCD2A23F7225EBADC9E76E085C2B4  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Boolean WebSocketSharp.CloseEventArgs::_clean
	bool ____clean_1;
	// WebSocketSharp.PayloadData WebSocketSharp.CloseEventArgs::_payloadData
	PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * ____payloadData_2;

public:
	inline static int32_t get_offset_of__clean_1() { return static_cast<int32_t>(offsetof(CloseEventArgs_tA6255FCF485BCD2A23F7225EBADC9E76E085C2B4, ____clean_1)); }
	inline bool get__clean_1() const { return ____clean_1; }
	inline bool* get_address_of__clean_1() { return &____clean_1; }
	inline void set__clean_1(bool value)
	{
		____clean_1 = value;
	}

	inline static int32_t get_offset_of__payloadData_2() { return static_cast<int32_t>(offsetof(CloseEventArgs_tA6255FCF485BCD2A23F7225EBADC9E76E085C2B4, ____payloadData_2)); }
	inline PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * get__payloadData_2() const { return ____payloadData_2; }
	inline PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 ** get_address_of__payloadData_2() { return &____payloadData_2; }
	inline void set__payloadData_2(PayloadData_t3C95E59A4FA831033802663497C35AF745FC9F70 * value)
	{
		____payloadData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____payloadData_2), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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

// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Exception WebSocketSharp.ErrorEventArgs::_exception
	Exception_t * ____exception_1;
	// System.String WebSocketSharp.ErrorEventArgs::_message
	String_t* ____message_2;

public:
	inline static int32_t get_offset_of__exception_1() { return static_cast<int32_t>(offsetof(ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693, ____exception_1)); }
	inline Exception_t * get__exception_1() const { return ____exception_1; }
	inline Exception_t ** get_address_of__exception_1() { return &____exception_1; }
	inline void set__exception_1(Exception_t * value)
	{
		____exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exception_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct TrackingSubsystem_4_tFC4495C6B04D616F71158509026269F004F79333  : public SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitBlendShapeLocation
struct ARKitBlendShapeLocation_t53A407013F6013772CFC72145DCA1C633997F560 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitBlendShapeLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARKitBlendShapeLocation_t53A407013F6013772CFC72145DCA1C633997F560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSessionState
struct ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_tC5054273C7CB11C5C40D36745DDD2AF056ED1F25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
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


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_t494215013DD008CD55735FEBB426C0F188B72646, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// SliderSceneManager/blendshapeLocations
struct blendshapeLocations_tB8941D3E7A4A17415B6A63C9C0CC38800FCEF19E 
{
public:
	// System.Int32 SliderSceneManager/blendshapeLocations::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(blendshapeLocations_tB8941D3E7A4A17415B6A63C9C0CC38800FCEF19E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>
struct NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient
struct ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F 
{
public:
	// UnityEngine.XR.ARKit.ARKitBlendShapeLocation UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient::m_BlendShapeLocation
	int32_t ___m_BlendShapeLocation_0;
	// System.Single UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient::m_Coefficient
	float ___m_Coefficient_1;

public:
	inline static int32_t get_offset_of_m_BlendShapeLocation_0() { return static_cast<int32_t>(offsetof(ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F, ___m_BlendShapeLocation_0)); }
	inline int32_t get_m_BlendShapeLocation_0() const { return ___m_BlendShapeLocation_0; }
	inline int32_t* get_address_of_m_BlendShapeLocation_0() { return &___m_BlendShapeLocation_0; }
	inline void set_m_BlendShapeLocation_0(int32_t value)
	{
		___m_BlendShapeLocation_0 = value;
	}

	inline static int32_t get_offset_of_m_Coefficient_1() { return static_cast<int32_t>(offsetof(ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F, ___m_Coefficient_1)); }
	inline float get_m_Coefficient_1() const { return ___m_Coefficient_1; }
	inline float* get_address_of_m_Coefficient_1() { return &___m_Coefficient_1; }
	inline void set_m_Coefficient_1(float value)
	{
		___m_Coefficient_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String WebSocketSharp.MessageEventArgs::_data
	String_t* ____data_1;
	// System.Boolean WebSocketSharp.MessageEventArgs::_dataSet
	bool ____dataSet_2;
	// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::_opcode
	uint8_t ____opcode_3;
	// System.Byte[] WebSocketSharp.MessageEventArgs::_rawData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____rawData_4;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786, ____data_1)); }
	inline String_t* get__data_1() const { return ____data_1; }
	inline String_t** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(String_t* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataSet_2() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786, ____dataSet_2)); }
	inline bool get__dataSet_2() const { return ____dataSet_2; }
	inline bool* get_address_of__dataSet_2() { return &____dataSet_2; }
	inline void set__dataSet_2(bool value)
	{
		____dataSet_2 = value;
	}

	inline static int32_t get_offset_of__opcode_3() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786, ____opcode_3)); }
	inline uint8_t get__opcode_3() const { return ____opcode_3; }
	inline uint8_t* get_address_of__opcode_3() { return &____opcode_3; }
	inline void set__opcode_3(uint8_t value)
	{
		____opcode_3 = value;
	}

	inline static int32_t get_offset_of__rawData_4() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786, ____rawData_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__rawData_4() const { return ____rawData_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__rawData_4() { return &____rawData_4; }
	inline void set__rawData_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____rawData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawData_4), (void*)value);
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
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


// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FixationPoint_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_LeftEyePose_4() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_LeftEyePose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LeftEyePose_4() const { return ___m_LeftEyePose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LeftEyePose_4() { return &___m_LeftEyePose_4; }
	inline void set_m_LeftEyePose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LeftEyePose_4 = value;
	}

	inline static int32_t get_offset_of_m_RightEyePose_5() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_RightEyePose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_RightEyePose_5() const { return ___m_RightEyePose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_RightEyePose_5() { return &___m_RightEyePose_5; }
	inline void set_m_RightEyePose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_RightEyePose_5 = value;
	}

	inline static int32_t get_offset_of_m_FixationPoint_6() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_FixationPoint_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FixationPoint_6() const { return ___m_FixationPoint_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FixationPoint_6() { return &___m_FixationPoint_6; }
	inline void set_m_FixationPoint_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FixationPoint_6 = value;
	}
};

struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___s_Default_7;

public:
	inline static int32_t get_offset_of_s_Default_7() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields, ___s_Default_7)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_s_Default_7() const { return ___s_Default_7; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_s_Default_7() { return &___s_Default_7; }
	inline void set_s_Default_7(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___s_Default_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD  : public TrackingSubsystem_4_tFC4495C6B04D616F71158509026269F004F79333
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>
struct Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>
struct Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD, ___m_Array_0)); }
	inline NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem
struct ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1  : public XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_UVs_3;

public:
	inline static int32_t get_offset_of_m_Vertices_0() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Vertices_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Vertices_0() const { return ___m_Vertices_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Vertices_0() { return &___m_Vertices_0; }
	inline void set_m_Vertices_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Vertices_0 = value;
	}

	inline static int32_t get_offset_of_m_Normals_1() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Normals_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Normals_1() const { return ___m_Normals_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Normals_1() { return &___m_Normals_1; }
	inline void set_m_Normals_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Normals_1 = value;
	}

	inline static int32_t get_offset_of_m_Indices_2() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Indices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Indices_2() const { return ___m_Indices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Indices_2() { return &___m_Indices_2; }
	inline void set_m_Indices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Indices_2 = value;
	}

	inline static int32_t get_offset_of_m_UVs_3() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_UVs_3)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_UVs_3() const { return ___m_UVs_3; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_UVs_3() { return &___m_UVs_3; }
	inline void set_m_UVs_3(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_UVs_3 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tDA25459A722F5B00FFE84463D9952660BC3F6673 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SliderSceneManager
struct SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider SliderSceneManager::p_slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___p_slider_4;
	// UnityEngine.GameObject SliderSceneManager::canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas_5;
	// UnityEngine.UI.Text SliderSceneManager::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_6;
	// UnityEngine.UI.Slider[] SliderSceneManager::sliders
	SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* ___sliders_7;
	// UnityEngine.UI.Text[] SliderSceneManager::texts
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___texts_8;
	// UnityEngine.UI.Text[] SliderSceneManager::debug_text
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___debug_text_9;
	// System.Int32 SliderSceneManager::height
	int32_t ___height_10;
	// UnityEngine.UI.InputField SliderSceneManager::input_address
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___input_address_11;
	// System.String SliderSceneManager::address
	String_t* ___address_12;
	// WebSocketSharp.WebSocket SliderSceneManager::ws
	WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * ___ws_13;
	// System.String SliderSceneManager::ws_state
	String_t* ___ws_state_14;

public:
	inline static int32_t get_offset_of_p_slider_4() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___p_slider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_p_slider_4() const { return ___p_slider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_p_slider_4() { return &___p_slider_4; }
	inline void set_p_slider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___p_slider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p_slider_4), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_5() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___canvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canvas_5() const { return ___canvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canvas_5() { return &___canvas_5; }
	inline void set_canvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_text_6() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___text_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_6() const { return ___text_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_6() { return &___text_6; }
	inline void set_text_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_6), (void*)value);
	}

	inline static int32_t get_offset_of_sliders_7() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___sliders_7)); }
	inline SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* get_sliders_7() const { return ___sliders_7; }
	inline SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A** get_address_of_sliders_7() { return &___sliders_7; }
	inline void set_sliders_7(SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* value)
	{
		___sliders_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sliders_7), (void*)value);
	}

	inline static int32_t get_offset_of_texts_8() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___texts_8)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_texts_8() const { return ___texts_8; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_texts_8() { return &___texts_8; }
	inline void set_texts_8(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___texts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texts_8), (void*)value);
	}

	inline static int32_t get_offset_of_debug_text_9() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___debug_text_9)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_debug_text_9() const { return ___debug_text_9; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_debug_text_9() { return &___debug_text_9; }
	inline void set_debug_text_9(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___debug_text_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debug_text_9), (void*)value);
	}

	inline static int32_t get_offset_of_height_10() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___height_10)); }
	inline int32_t get_height_10() const { return ___height_10; }
	inline int32_t* get_address_of_height_10() { return &___height_10; }
	inline void set_height_10(int32_t value)
	{
		___height_10 = value;
	}

	inline static int32_t get_offset_of_input_address_11() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___input_address_11)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_input_address_11() const { return ___input_address_11; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_input_address_11() { return &___input_address_11; }
	inline void set_input_address_11(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___input_address_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_address_11), (void*)value);
	}

	inline static int32_t get_offset_of_address_12() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___address_12)); }
	inline String_t* get_address_12() const { return ___address_12; }
	inline String_t** get_address_of_address_12() { return &___address_12; }
	inline void set_address_12(String_t* value)
	{
		___address_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_12), (void*)value);
	}

	inline static int32_t get_offset_of_ws_13() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___ws_13)); }
	inline WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * get_ws_13() const { return ___ws_13; }
	inline WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D ** get_address_of_ws_13() { return &___ws_13; }
	inline void set_ws_13(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * value)
	{
		___ws_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ws_13), (void*)value);
	}

	inline static int32_t get_offset_of_ws_state_14() { return static_cast<int32_t>(offsetof(SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723, ___ws_state_14)); }
	inline String_t* get_ws_state_14() const { return ___ws_state_14; }
	inline String_t** get_address_of_ws_state_14() { return &___ws_state_14; }
	inline void set_ws_state_14(String_t* value)
	{
		___ws_state_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ws_state_14), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnitySceneManager
struct UnitySceneManager_t16BB3F50ED32F89684BE837994BEA48C858A9E75  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// face_tracking
struct face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARFaceManager face_tracking::faceManager
	ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * ___faceManager_4;
	// UnityEngine.UI.Text face_tracking::ui_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ui_text_5;
	// UnityEngine.UI.Text face_tracking::ws_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ws_text_6;
	// UnityEngine.XR.ARKit.ARKitFaceSubsystem face_tracking::faceSubsystem
	ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 * ___faceSubsystem_7;
	// System.String face_tracking::text
	String_t* ___text_8;
	// System.String face_tracking::ws_state
	String_t* ___ws_state_9;
	// UnityEngine.UI.InputField face_tracking::input_address
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___input_address_10;
	// System.String face_tracking::address
	String_t* ___address_11;
	// WebSocketSharp.WebSocket face_tracking::ws
	WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * ___ws_12;

public:
	inline static int32_t get_offset_of_faceManager_4() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___faceManager_4)); }
	inline ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * get_faceManager_4() const { return ___faceManager_4; }
	inline ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 ** get_address_of_faceManager_4() { return &___faceManager_4; }
	inline void set_faceManager_4(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * value)
	{
		___faceManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faceManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_ui_text_5() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___ui_text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ui_text_5() const { return ___ui_text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ui_text_5() { return &___ui_text_5; }
	inline void set_ui_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ui_text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ui_text_5), (void*)value);
	}

	inline static int32_t get_offset_of_ws_text_6() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___ws_text_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ws_text_6() const { return ___ws_text_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ws_text_6() { return &___ws_text_6; }
	inline void set_ws_text_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ws_text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ws_text_6), (void*)value);
	}

	inline static int32_t get_offset_of_faceSubsystem_7() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___faceSubsystem_7)); }
	inline ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 * get_faceSubsystem_7() const { return ___faceSubsystem_7; }
	inline ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 ** get_address_of_faceSubsystem_7() { return &___faceSubsystem_7; }
	inline void set_faceSubsystem_7(ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 * value)
	{
		___faceSubsystem_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faceSubsystem_7), (void*)value);
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___text_8)); }
	inline String_t* get_text_8() const { return ___text_8; }
	inline String_t** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(String_t* value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_8), (void*)value);
	}

	inline static int32_t get_offset_of_ws_state_9() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___ws_state_9)); }
	inline String_t* get_ws_state_9() const { return ___ws_state_9; }
	inline String_t** get_address_of_ws_state_9() { return &___ws_state_9; }
	inline void set_ws_state_9(String_t* value)
	{
		___ws_state_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ws_state_9), (void*)value);
	}

	inline static int32_t get_offset_of_input_address_10() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___input_address_10)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_input_address_10() const { return ___input_address_10; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_input_address_10() { return &___input_address_10; }
	inline void set_input_address_10(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___input_address_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_address_10), (void*)value);
	}

	inline static int32_t get_offset_of_address_11() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___address_11)); }
	inline String_t* get_address_11() const { return ___address_11; }
	inline String_t** get_address_of_address_11() { return &___address_11; }
	inline void set_address_11(String_t* value)
	{
		___address_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_11), (void*)value);
	}

	inline static int32_t get_offset_of_ws_12() { return static_cast<int32_t>(offsetof(face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763, ___ws_12)); }
	inline WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * get_ws_12() const { return ___ws_12; }
	inline WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D ** get_address_of_ws_12() { return &___ws_12; }
	inline void set_ws_12(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * value)
	{
		___ws_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ws_12), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909  : public SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909, ___m_Trackables_9)); }
	inline Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909, ___m_PendingAdds_10)); }
	inline Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};

struct ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields, ___s_Added_11)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields, ___s_Updated_12)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields, ___s_Removed_13)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B  : public SubsystemLifecycleManager_3_tE412F7818499B8C9886AA713B6FD9F15DC2BBAFD
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___stateChanged_10)); }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t5DF84322FFE12A24465E48164961CD724D109521 ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t5DF84322FFE12A24465E48164961CD724D109521 * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARFace
struct ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1  : public ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs> UnityEngine.XR.ARFoundation.ARFace::updated
	Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7 * ___updated_7;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<leftEye>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CleftEyeU3Ek__BackingField_8;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<rightEye>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CrightEyeU3Ek__BackingField_9;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<fixationPoint>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CfixationPointU3Ek__BackingField_10;
	// UnityEngine.XR.ARSubsystems.XRFaceMesh UnityEngine.XR.ARFoundation.ARFace::m_FaceMesh
	XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0  ___m_FaceMesh_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARFace::m_Updated
	bool ___m_Updated_12;

public:
	inline static int32_t get_offset_of_updated_7() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___updated_7)); }
	inline Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7 * get_updated_7() const { return ___updated_7; }
	inline Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7 ** get_address_of_updated_7() { return &___updated_7; }
	inline void set_updated_7(Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7 * value)
	{
		___updated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updated_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___U3CleftEyeU3Ek__BackingField_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CleftEyeU3Ek__BackingField_8() const { return ___U3CleftEyeU3Ek__BackingField_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CleftEyeU3Ek__BackingField_8() { return &___U3CleftEyeU3Ek__BackingField_8; }
	inline void set_U3CleftEyeU3Ek__BackingField_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CleftEyeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___U3CrightEyeU3Ek__BackingField_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CrightEyeU3Ek__BackingField_9() const { return ___U3CrightEyeU3Ek__BackingField_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CrightEyeU3Ek__BackingField_9() { return &___U3CrightEyeU3Ek__BackingField_9; }
	inline void set_U3CrightEyeU3Ek__BackingField_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CrightEyeU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfixationPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___U3CfixationPointU3Ek__BackingField_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CfixationPointU3Ek__BackingField_10() const { return ___U3CfixationPointU3Ek__BackingField_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CfixationPointU3Ek__BackingField_10() { return &___U3CfixationPointU3Ek__BackingField_10; }
	inline void set_U3CfixationPointU3Ek__BackingField_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CfixationPointU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfixationPointU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_FaceMesh_11() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___m_FaceMesh_11)); }
	inline XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0  get_m_FaceMesh_11() const { return ___m_FaceMesh_11; }
	inline XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * get_address_of_m_FaceMesh_11() { return &___m_FaceMesh_11; }
	inline void set_m_FaceMesh_11(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0  value)
	{
		___m_FaceMesh_11 = value;
	}

	inline static int32_t get_offset_of_m_Updated_12() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___m_Updated_12)); }
	inline bool get_m_Updated_12() const { return ___m_Updated_12; }
	inline bool* get_address_of_m_Updated_12() { return &___m_Updated_12; }
	inline void set_m_Updated_12(bool value)
	{
		___m_Updated_12 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARFaceManager
struct ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647  : public ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARFaceManager::m_FacePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FacePrefab_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARFaceManager::m_MaximumFaceCount
	int32_t ___m_MaximumFaceCount_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs> UnityEngine.XR.ARFoundation.ARFaceManager::facesChanged
	Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * ___facesChanged_16;

public:
	inline static int32_t get_offset_of_m_FacePrefab_14() { return static_cast<int32_t>(offsetof(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647, ___m_FacePrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FacePrefab_14() const { return ___m_FacePrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FacePrefab_14() { return &___m_FacePrefab_14; }
	inline void set_m_FacePrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FacePrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FacePrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaximumFaceCount_15() { return static_cast<int32_t>(offsetof(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647, ___m_MaximumFaceCount_15)); }
	inline int32_t get_m_MaximumFaceCount_15() const { return ___m_MaximumFaceCount_15; }
	inline int32_t* get_address_of_m_MaximumFaceCount_15() { return &___m_MaximumFaceCount_15; }
	inline void set_m_MaximumFaceCount_15(int32_t value)
	{
		___m_MaximumFaceCount_15 = value;
	}

	inline static int32_t get_offset_of_facesChanged_16() { return static_cast<int32_t>(offsetof(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647, ___facesChanged_16)); }
	inline Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * get_facesChanged_16() const { return ___facesChanged_16; }
	inline Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 ** get_address_of_facesChanged_16() { return &___facesChanged_16; }
	inline void set_facesChanged_16(Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * value)
	{
		___facesChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facesChanged_16), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Slider[]
struct SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * m_Items[1];

public:
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_gshared (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m352C588E25423AC6F15FCFE8C964C656221186FF_gshared (ARTrackable_2_t0C3A99AF5B35E36F452AD67B5A0F2F26F2F561B2 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARTrackable_2_get_trackableId_m4865C727B15ECEB346A703276462DA6167AD9274_gshared (ARTrackable_2_t0C3A99AF5B35E36F452AD67B5A0F2F26F2F561B2 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD  NativeArray_1_GetEnumerator_mD989135403C8D2F333ECDC69D66CF3E3443273AA_gshared (NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F  Enumerator_get_Current_m2E29783CCFF83F9CFCCEECE96D95EEC2D7C3A46A_gshared (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m86FEA601D9A453957DA0E61642BAD12FF2CA0E5F_gshared (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m670FC38AFF50325569FE539B94E663C97A79FC55_gshared (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m383935C666B52E9F3F6904C08B320CAF4B28213C_gshared (NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mE692B553BBB816D50C60C90825B9AFEEA8130210 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void SliderSceneManager/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mD32B5E2DDE5C6108B623A8A4F5AF5C59516582CD (U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.UI.Slider>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * Object_Instantiate_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mA4129B825AED80A3AB88417D9844E00FB7A988EB (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.UI.Text>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Object_Instantiate_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mCF2A155AE611B8440C39E290C758CA5B30A7A955 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *, const RuntimeMethod*))UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_gshared)(__this, ___call0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mDA68B99DCFBA76DA099422FBFA66662C8DA2A452 (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m6093B1833EF10BDFE7124604300C0C46F23472BD (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.String>()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void WebSocketSharp.WebSocket::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m39E49CA394585C29953BCB94A3B9098F1DD7A9BF (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, String_t* ___url0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___protocols1, const RuntimeMethod* method);
// System.Void SliderSceneManager::ConnectAction(WebSocketSharp.WebSocket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_ConnectAction_m47EA193A58A4B7A9B626424CC75374ED91031AA6 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * ___Client0, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::add_OnOpen(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m3352F1F7990CF2B17AEBBD8A0ACE7D6E9E4B920B (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<WebSocketSharp.MessageEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m3F4C677754E04CC5E95D9BD9CD11C80191DBD774 (EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m0A7654BD293723F60D937ED0CC193998EAE39D30 (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<WebSocketSharp.ErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m6FE9E8462B264584E80C3AE666BA7E40F9EF9CAB (EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_m81E4C2F532D808FD84584FCAA549F540E9210FD2 (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<WebSocketSharp.CloseEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m2F64AADC00E5B107A3C2BF45036DA629638F0D87 (EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m5C5673D52C60228C230FBD971868BED76E9C3BC6 (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 * ___value0, const RuntimeMethod* method);
// System.Void WebSocketSharp.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m64817B63B836D108C492DC3A64E3AD83AB7BDC12 (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String WebSocketSharp.MessageEventArgs::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageEventArgs_get_Data_m39A69CE71CFBAF5A9A98C0114BA8CE2462EF6F0E (MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786 * __this, const RuntimeMethod* method);
// System.String WebSocketSharp.ErrorEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_Message_mC0BD8B4C37DD2340161BA7EF2381DE2356ABFB46 (ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184 (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARFaceManager::add_facesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceManager_add_facesChanged_mC0F1ECFEC0FD0955005367336E675FFA890CAC80 (ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * __this, Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARFaceManager::remove_facesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceManager_remove_facesChanged_mB2902EA16C0B264EC7F86D2436F5648824DD23E1 (ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * __this, Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace> UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ARFacesChangedEventArgs_get_updated_m9AFD1F7B0958F6754D86B18A1840B26863A2047A_inline (ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>::get_Count()
inline int32_t List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_inline (List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>::get_Item(System.Int32)
inline ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_inline (List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * (*) (List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>::get_trackingState()
inline int32_t ARTrackable_2_get_trackingState_m82B5153FD82572CB261CA3429F2F7844592914EC (ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B *, const RuntimeMethod*))ARTrackable_2_get_trackingState_m352C588E25423AC6F15FCFE8C964C656221186FF_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline (const RuntimeMethod* method);
// System.Void face_tracking::UpdateAnimatronicFaceShape(UnityEngine.XR.ARFoundation.ARFace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_UpdateAnimatronicFaceShape_mBB7692EEBAA29320B0111129A4175D27AFCC0077 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * ___arface0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>::get_trackableId()
inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B (ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B * __this, const RuntimeMethod* method)
{
	return ((  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  (*) (ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B *, const RuntimeMethod*))ARTrackable_2_get_trackableId_m4865C727B15ECEB346A703276462DA6167AD9274_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient> UnityEngine.XR.ARKit.ARKitFaceSubsystem::GetBlendShapeCoefficients(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  ARKitFaceSubsystem_GetBlendShapeCoefficients_mE983A3A34A04F8C6340EF79A06138BEA025F9721 (ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___faceId0, int32_t ___allocator1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::GetEnumerator()
inline Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD  NativeArray_1_GetEnumerator_mD989135403C8D2F333ECDC69D66CF3E3443273AA (NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD  (*) (NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_mD989135403C8D2F333ECDC69D66CF3E3443273AA_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::get_Current()
inline ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F  Enumerator_get_Current_m2E29783CCFF83F9CFCCEECE96D95EEC2D7C3A46A (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD * __this, const RuntimeMethod* method)
{
	return ((  ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F  (*) (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD *, const RuntimeMethod*))Enumerator_get_Current_m2E29783CCFF83F9CFCCEECE96D95EEC2D7C3A46A_gshared)(__this, method);
}
// UnityEngine.XR.ARKit.ARKitBlendShapeLocation UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient::get_blendShapeLocation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline (ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient::get_coefficient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline (ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::MoveNext()
inline bool Enumerator_MoveNext_m86FEA601D9A453957DA0E61642BAD12FF2CA0E5F (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD *, const RuntimeMethod*))Enumerator_MoveNext_m86FEA601D9A453957DA0E61642BAD12FF2CA0E5F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::Dispose()
inline void Enumerator_Dispose_m670FC38AFF50325569FE539B94E663C97A79FC55 (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD *, const RuntimeMethod*))Enumerator_Dispose_m670FC38AFF50325569FE539B94E663C97A79FC55_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>::Dispose()
inline void NativeArray_1_Dispose_m383935C666B52E9F3F6904C08B320CAF4B28213C (NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 *, const RuntimeMethod*))NativeArray_1_Dispose_m383935C666B52E9F3F6904C08B320CAF4B28213C_gshared)(__this, method);
}
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>::get_subsystem()
inline XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_inline (SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D * __this, const RuntimeMethod* method)
{
	return ((  XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * (*) (SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D *, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline)(__this, method);
}
// System.Void face_tracking::ConnectAction(WebSocketSharp.WebSocket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_ConnectAction_m1825816BA6F43D25FB47C34765B38F70EB116A0E (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * ___Client0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void SliderSceneManager::makeJson(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_makeJson_mACDD886B20CC35B2CB1FA9B0AC197C04D984046F (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void SliderSceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_Start_m1C1B8ACF5CCF696B5BD9FDDB2756081D3D9439F9 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mE692B553BBB816D50C60C90825B9AFEEA8130210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mA4129B825AED80A3AB88417D9844E00FB7A988EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mCF2A155AE611B8440C39E290C758CA5B30A7A955_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CStartU3Eb__0_m77EC40B518B613ACF5E11D8E0399B0538299917A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35DC0ACAEDA877E5E8DB50EDB148F4A3F927375E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&blendshapeLocations_tB8941D3E7A4A17415B6A63C9C0CC38800FCEF19E_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// input_address = input_address.GetComponent<InputField>();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_input_address_11();
		NullCheck(L_0);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1;
		L_1 = Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mE692B553BBB816D50C60C90825B9AFEEA8130210(L_0, /*hidden argument*/Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mE692B553BBB816D50C60C90825B9AFEEA8130210_RuntimeMethod_var);
		__this->set_input_address_11(L_1);
		// foreach (var i in　Enum.GetValues(typeof(blendshapeLocations)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (blendshapeLocations_tB8941D3E7A4A17415B6A63C9C0CC38800FCEF19E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_4;
		L_4 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0237;
		}

IL_002b:
		{
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_6 = (U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass12_0__ctor_mD32B5E2DDE5C6108B623A8A4F5AF5C59516582CD(L_6, /*hidden argument*/NULL);
			V_1 = L_6;
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_7 = V_1;
			NullCheck(L_7);
			L_7->set_U3CU3E4__this_1(__this);
			// foreach (var i in　Enum.GetValues(typeof(blendshapeLocations)))
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_8 = V_1;
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject * L_10;
			L_10 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_9);
			NullCheck(L_8);
			L_8->set_i_0(L_10);
			// sliders[(int)i] = Instantiate(p_slider, new Vector3(100,(int)i*100-height,0), Quaternion.identity);
			SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_11 = __this->get_sliders_7();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject * L_13 = L_12->get_i_0();
			Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_14 = __this->get_p_slider_4();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_15 = V_1;
			NullCheck(L_15);
			RuntimeObject * L_16 = L_15->get_i_0();
			int32_t L_17 = __this->get_height_10();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			memset((&L_18), 0, sizeof(L_18));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (100.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((int32_t)100))), (int32_t)L_17)))), (0.0f), /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
			L_19 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_20;
			L_20 = Object_Instantiate_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mA4129B825AED80A3AB88417D9844E00FB7A988EB(L_14, L_18, L_19, /*hidden argument*/Object_Instantiate_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mA4129B825AED80A3AB88417D9844E00FB7A988EB_RuntimeMethod_var);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_20);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((*(int32_t*)((int32_t*)UnBox(L_13, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))), (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A *)L_20);
			// sliders[(int)i].transform.SetParent(canvas.transform, false);
			SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_21 = __this->get_sliders_7();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_22 = V_1;
			NullCheck(L_22);
			RuntimeObject * L_23 = L_22->get_i_0();
			NullCheck(L_21);
			int32_t L_24 = ((*(int32_t*)((int32_t*)UnBox(L_23, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
			Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
			NullCheck(L_25);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
			L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_canvas_5();
			NullCheck(L_27);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
			L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
			NullCheck(L_26);
			Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_26, L_28, (bool)0, /*hidden argument*/NULL);
			// texts[(int)i] = Instantiate(text, new Vector3(-300, (int)i * 100 - height, 0), Quaternion.identity);
			TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_29 = __this->get_texts_8();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_30 = V_1;
			NullCheck(L_30);
			RuntimeObject * L_31 = L_30->get_i_0();
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_32 = __this->get_text_6();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_33 = V_1;
			NullCheck(L_33);
			RuntimeObject * L_34 = L_33->get_i_0();
			int32_t L_35 = __this->get_height_10();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
			memset((&L_36), 0, sizeof(L_36));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), (-300.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(int32_t*)((int32_t*)UnBox(L_34, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((int32_t)100))), (int32_t)L_35)))), (0.0f), /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
			L_37 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38;
			L_38 = Object_Instantiate_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mCF2A155AE611B8440C39E290C758CA5B30A7A955(L_32, L_36, L_37, /*hidden argument*/Object_Instantiate_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mCF2A155AE611B8440C39E290C758CA5B30A7A955_RuntimeMethod_var);
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, L_38);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((*(int32_t*)((int32_t*)UnBox(L_31, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))), (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)L_38);
			// texts[(int)i].text = i.ToString();
			TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_39 = __this->get_texts_8();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_40 = V_1;
			NullCheck(L_40);
			RuntimeObject * L_41 = L_40->get_i_0();
			NullCheck(L_39);
			int32_t L_42 = ((*(int32_t*)((int32_t*)UnBox(L_41, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_44 = V_1;
			NullCheck(L_44);
			RuntimeObject * L_45 = L_44->get_i_0();
			NullCheck(L_45);
			String_t* L_46;
			L_46 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
			NullCheck(L_43);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, L_46);
			// texts[(int)i].transform.SetParent(canvas.transform, false);
			TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_47 = __this->get_texts_8();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_48 = V_1;
			NullCheck(L_48);
			RuntimeObject * L_49 = L_48->get_i_0();
			NullCheck(L_47);
			int32_t L_50 = ((*(int32_t*)((int32_t*)UnBox(L_49, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
			NullCheck(L_51);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
			L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_canvas_5();
			NullCheck(L_53);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
			L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
			NullCheck(L_52);
			Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_52, L_54, (bool)0, /*hidden argument*/NULL);
			// debug_text[(int)i] = Instantiate(text, new Vector3(500, (int)i * 100 - height, 0), Quaternion.identity);
			TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_55 = __this->get_debug_text_9();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_56 = V_1;
			NullCheck(L_56);
			RuntimeObject * L_57 = L_56->get_i_0();
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_58 = __this->get_text_6();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_59 = V_1;
			NullCheck(L_59);
			RuntimeObject * L_60 = L_59->get_i_0();
			int32_t L_61 = __this->get_height_10();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
			memset((&L_62), 0, sizeof(L_62));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_62), (500.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(int32_t*)((int32_t*)UnBox(L_60, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((int32_t)100))), (int32_t)L_61)))), (0.0f), /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_63;
			L_63 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_64;
			L_64 = Object_Instantiate_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mCF2A155AE611B8440C39E290C758CA5B30A7A955(L_58, L_62, L_63, /*hidden argument*/Object_Instantiate_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mCF2A155AE611B8440C39E290C758CA5B30A7A955_RuntimeMethod_var);
			NullCheck(L_55);
			ArrayElementTypeCheck (L_55, L_64);
			(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((*(int32_t*)((int32_t*)UnBox(L_57, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))), (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)L_64);
			// debug_text[(int)i].fontSize = 30;
			TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_65 = __this->get_debug_text_9();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_66 = V_1;
			NullCheck(L_66);
			RuntimeObject * L_67 = L_66->get_i_0();
			NullCheck(L_65);
			int32_t L_68 = ((*(int32_t*)((int32_t*)UnBox(L_67, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
			NullCheck(L_69);
			Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411(L_69, ((int32_t)30), /*hidden argument*/NULL);
			// debug_text[(int)i].text = $"\"{i}\":{sliders[(int)i].value}";
			TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_70 = __this->get_debug_text_9();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_71 = V_1;
			NullCheck(L_71);
			RuntimeObject * L_72 = L_71->get_i_0();
			NullCheck(L_70);
			int32_t L_73 = ((*(int32_t*)((int32_t*)UnBox(L_72, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_74 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_75 = V_1;
			NullCheck(L_75);
			RuntimeObject * L_76 = L_75->get_i_0();
			SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_77 = __this->get_sliders_7();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_78 = V_1;
			NullCheck(L_78);
			RuntimeObject * L_79 = L_78->get_i_0();
			NullCheck(L_77);
			int32_t L_80 = ((*(int32_t*)((int32_t*)UnBox(L_79, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
			Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_81 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
			NullCheck(L_81);
			float L_82;
			L_82 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_81);
			float L_83 = L_82;
			RuntimeObject * L_84 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_83);
			String_t* L_85;
			L_85 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral35DC0ACAEDA877E5E8DB50EDB148F4A3F927375E, L_76, L_84, /*hidden argument*/NULL);
			NullCheck(L_74);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_74, L_85);
			// debug_text[(int)i].transform.SetParent(canvas.transform, false);
			TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_86 = __this->get_debug_text_9();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_87 = V_1;
			NullCheck(L_87);
			RuntimeObject * L_88 = L_87->get_i_0();
			NullCheck(L_86);
			int32_t L_89 = ((*(int32_t*)((int32_t*)UnBox(L_88, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
			NullCheck(L_90);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
			L_91 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_90, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92 = __this->get_canvas_5();
			NullCheck(L_92);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
			L_93 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_92, /*hidden argument*/NULL);
			NullCheck(L_91);
			Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_91, L_93, (bool)0, /*hidden argument*/NULL);
			// sliders[(int)i].onValueChanged.AddListener(delegate { makeJson((int)i); });
			SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_94 = __this->get_sliders_7();
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_95 = V_1;
			NullCheck(L_95);
			RuntimeObject * L_96 = L_95->get_i_0();
			NullCheck(L_94);
			int32_t L_97 = ((*(int32_t*)((int32_t*)UnBox(L_96, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
			Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_98 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
			NullCheck(L_98);
			SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * L_99;
			L_99 = Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline(L_98, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * L_100 = V_1;
			UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB * L_101 = (UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)il2cpp_codegen_object_new(UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB_il2cpp_TypeInfo_var);
			UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B(L_101, L_100, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass12_0_U3CStartU3Eb__0_m77EC40B518B613ACF5E11D8E0399B0538299917A_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m8CACADCAC18230FB18DF7A6BEC3D9EAD93FEDC3B_RuntimeMethod_var);
			NullCheck(L_99);
			UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C(L_99, L_101, /*hidden argument*/UnityEvent_1_AddListener_mA73838FBF3836695F5183B32B797E9499BA5E59C_RuntimeMethod_var);
		}

IL_0237:
		{
			// foreach (var i in　Enum.GetValues(typeof(blendshapeLocations)))
			RuntimeObject* L_102 = V_0;
			NullCheck(L_102);
			bool L_103;
			L_103 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_102);
			if (L_103)
			{
				goto IL_002b;
			}
		}

IL_0242:
		{
			IL2CPP_LEAVE(0x255, FINALLY_0244);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0244;
	}

FINALLY_0244:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_104 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_104, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_105 = V_2;
			if (!L_105)
			{
				goto IL_0254;
			}
		}

IL_024e:
		{
			RuntimeObject* L_106 = V_2;
			NullCheck(L_106);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_106);
		}

IL_0254:
		{
			IL2CPP_END_FINALLY(580)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(580)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x255, IL_0255)
	}

IL_0255:
	{
		// }
		return;
	}
}
// System.Void SliderSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_Update_m872CB7521572C2BB9D6F1DE5BDEF7A038CA14927 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SliderSceneManager::makeJson(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_makeJson_mACDD886B20CC35B2CB1FA9B0AC197C04D984046F (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35DC0ACAEDA877E5E8DB50EDB148F4A3F927375E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&blendshapeLocations_tB8941D3E7A4A17415B6A63C9C0CC38800FCEF19E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// string blendshape = ((blendshapeLocations)index).ToString();
		int32_t L_0 = ___index0;
		V_2 = L_0;
		RuntimeObject * L_1 = Box(blendshapeLocations_tB8941D3E7A4A17415B6A63C9C0CC38800FCEF19E_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_2 = *(int32_t*)UnBox(L_1);
		V_0 = L_2;
		// string json_out="";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// json_out+= $"\"{blendshape}\":{Math.Floor(sliders[index].value*100)/100}";
		String_t* L_3 = V_1;
		String_t* L_4 = V_0;
		SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_5 = __this->get_sliders_7();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_9, (float)(100.0f))))));
		double L_11 = ((double)((double)L_10/(double)(100.0)));
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral35DC0ACAEDA877E5E8DB50EDB148F4A3F927375E, L_4, L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// debug_text[index].text = json_out;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_15 = __this->get_debug_text_9();
		int32_t L_16 = ___index0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		String_t* L_19 = V_1;
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_19);
		// if (ws != null)
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_20 = __this->get_ws_13();
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		// ws.Send("{"+json_out+"}");
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_21 = __this->get_ws_13();
		String_t* L_22 = V_1;
		String_t* L_23;
		L_23 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_22, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		NullCheck(L_21);
		WebSocket_Send_mDA68B99DCFBA76DA099422FBFA66662C8DA2A452(L_21, L_23, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void SliderSceneManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_OnDestroy_mE51AB76480C699A1C46B195A5ABF1871C4390D55 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, const RuntimeMethod* method)
{
	{
		// ws.Close();
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = __this->get_ws_13();
		NullCheck(L_0);
		WebSocket_Close_m6093B1833EF10BDFE7124604300C0C46F23472BD(L_0, /*hidden argument*/NULL);
		// ws = null;
		__this->set_ws_13((WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D *)NULL);
		// }
		return;
	}
}
// System.Void SliderSceneManager::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_Connect_m66BF0DA69CA0660549F45C2F21F25EE4C422B1A2 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ws != null)
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = __this->get_ws_13();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// ws.Close();
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_1 = __this->get_ws_13();
		NullCheck(L_1);
		WebSocket_Close_m6093B1833EF10BDFE7124604300C0C46F23472BD(L_1, /*hidden argument*/NULL);
		// ws = null;
		__this->set_ws_13((WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D *)NULL);
	}

IL_001a:
	{
		// address = input_address.text;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_input_address_11();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_2, /*hidden argument*/NULL);
		__this->set_address_12(L_3);
		// ws = new WebSocket($"ws://{address}");
		String_t* L_4 = __this->get_address_12();
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71, L_4, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_7 = (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D *)il2cpp_codegen_object_new(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_il2cpp_TypeInfo_var);
		WebSocket__ctor_m39E49CA394585C29953BCB94A3B9098F1DD7A9BF(L_7, L_5, L_6, /*hidden argument*/NULL);
		__this->set_ws_13(L_7);
		// ConnectAction(ws);
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_8 = __this->get_ws_13();
		SliderSceneManager_ConnectAction_m47EA193A58A4B7A9B626424CC75374ED91031AA6(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SliderSceneManager::ConnectAction(WebSocketSharp.WebSocket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_ConnectAction_m47EA193A58A4B7A9B626424CC75374ED91031AA6 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * ___Client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m2F64AADC00E5B107A3C2BF45036DA629638F0D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m3F4C677754E04CC5E95D9BD9CD11C80191DBD774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m6FE9E8462B264584E80C3AE666BA7E40F9EF9CAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderSceneManager_U3CConnectActionU3Eb__17_0_mFF6D42DE88C0928E93C15FED1F0683FDE2396BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderSceneManager_U3CConnectActionU3Eb__17_1_mC60508F09D413327A4A3A32CA96A2ACEEBC9D1A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderSceneManager_U3CConnectActionU3Eb__17_2_mC2195DD86D4C7E74020DB151D62EF0486C3DD4A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderSceneManager_U3CConnectActionU3Eb__17_3_mF32B3B7D11BDA880ECFD44CABE932F7281C6E606_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.OnOpen += (sender, e) =>
		// {
		//     ws_state = "WebSocket Open";
		// };
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = ___Client0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)SliderSceneManager_U3CConnectActionU3Eb__17_0_mFF6D42DE88C0928E93C15FED1F0683FDE2396BC4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		WebSocket_add_OnOpen_m3352F1F7990CF2B17AEBBD8A0ACE7D6E9E4B920B(L_0, L_1, /*hidden argument*/NULL);
		// Client.OnMessage += (sender, e) =>
		// {
		//     ws_state = e.Data;
		// };
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_2 = ___Client0;
		EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A * L_3 = (EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A *)il2cpp_codegen_object_new(EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3F4C677754E04CC5E95D9BD9CD11C80191DBD774(L_3, __this, (intptr_t)((intptr_t)SliderSceneManager_U3CConnectActionU3Eb__17_1_mC60508F09D413327A4A3A32CA96A2ACEEBC9D1A9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m3F4C677754E04CC5E95D9BD9CD11C80191DBD774_RuntimeMethod_var);
		NullCheck(L_2);
		WebSocket_add_OnMessage_m0A7654BD293723F60D937ED0CC193998EAE39D30(L_2, L_3, /*hidden argument*/NULL);
		// Client.OnError += (sender, e) =>
		// {
		//     ws_state = "Websocket Error: " + e.Message;
		// };
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_4 = ___Client0;
		EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 * L_5 = (EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 *)il2cpp_codegen_object_new(EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m6FE9E8462B264584E80C3AE666BA7E40F9EF9CAB(L_5, __this, (intptr_t)((intptr_t)SliderSceneManager_U3CConnectActionU3Eb__17_2_mC2195DD86D4C7E74020DB151D62EF0486C3DD4A4_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m6FE9E8462B264584E80C3AE666BA7E40F9EF9CAB_RuntimeMethod_var);
		NullCheck(L_4);
		WebSocket_add_OnError_m81E4C2F532D808FD84584FCAA549F540E9210FD2(L_4, L_5, /*hidden argument*/NULL);
		// Client.OnClose += (sender, e) =>
		// {
		//     ws_state = "WebSocket Close";
		// };
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_6 = ___Client0;
		EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 * L_7 = (EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 *)il2cpp_codegen_object_new(EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2F64AADC00E5B107A3C2BF45036DA629638F0D87(L_7, __this, (intptr_t)((intptr_t)SliderSceneManager_U3CConnectActionU3Eb__17_3_mF32B3B7D11BDA880ECFD44CABE932F7281C6E606_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m2F64AADC00E5B107A3C2BF45036DA629638F0D87_RuntimeMethod_var);
		NullCheck(L_6);
		WebSocket_add_OnClose_m5C5673D52C60228C230FBD971868BED76E9C3BC6(L_6, L_7, /*hidden argument*/NULL);
		// Client.Connect();
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_8 = ___Client0;
		NullCheck(L_8);
		WebSocket_Connect_m64817B63B836D108C492DC3A64E3AD83AB7BDC12(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SliderSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager__ctor_m4A8421DB3EF35CCFC451B525F663AFEE53EF00D3 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C27E83B9DFB0DB91B2C168FF473C28E3EEAF23);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Slider[] sliders=new Slider[14];
		SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A* L_0 = (SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A*)(SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A*)SZArrayNew(SliderU5BU5D_t819F98171147BE3B24976AC62AB8B1900BDEE01A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		__this->set_sliders_7(L_0);
		// Text[] texts = new Text[14];
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_1 = (TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F*)(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F*)SZArrayNew(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		__this->set_texts_8(L_1);
		// Text[] debug_text = new Text[14];
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_2 = (TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F*)(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F*)SZArrayNew(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		__this->set_debug_text_9(L_2);
		// int height = 600;
		__this->set_height_10(((int32_t)600));
		// public string address = "192.168.0.9:9998";
		__this->set_address_12(_stringLiteral28C27E83B9DFB0DB91B2C168FF473C28E3EEAF23);
		// string ws_state = "none";
		__this->set_ws_state_14(_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SliderSceneManager::<ConnectAction>b__17_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_U3CConnectActionU3Eb__17_0_mFF6D42DE88C0928E93C15FED1F0683FDE2396BC4 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22160B11970B864AB848328ED0BAACF7FA091137);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ws_state = "WebSocket Open";
		__this->set_ws_state_14(_stringLiteral22160B11970B864AB848328ED0BAACF7FA091137);
		// };
		return;
	}
}
// System.Void SliderSceneManager::<ConnectAction>b__17_1(System.Object,WebSocketSharp.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_U3CConnectActionU3Eb__17_1_mC60508F09D413327A4A3A32CA96A2ACEEBC9D1A9 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, RuntimeObject * ___sender0, MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786 * ___e1, const RuntimeMethod* method)
{
	{
		// ws_state = e.Data;
		MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786 * L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MessageEventArgs_get_Data_m39A69CE71CFBAF5A9A98C0114BA8CE2462EF6F0E(L_0, /*hidden argument*/NULL);
		__this->set_ws_state_14(L_1);
		// };
		return;
	}
}
// System.Void SliderSceneManager::<ConnectAction>b__17_2(System.Object,WebSocketSharp.ErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_U3CConnectActionU3Eb__17_2_mC2195DD86D4C7E74020DB151D62EF0486C3DD4A4 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, RuntimeObject * ___sender0, ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral719A382B9ED8AC783638978FB890914A308AFC44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ws_state = "Websocket Error: " + e.Message;
		ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693 * L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ErrorEventArgs_get_Message_mC0BD8B4C37DD2340161BA7EF2381DE2356ABFB46(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral719A382B9ED8AC783638978FB890914A308AFC44, L_1, /*hidden argument*/NULL);
		__this->set_ws_state_14(L_2);
		// };
		return;
	}
}
// System.Void SliderSceneManager::<ConnectAction>b__17_3(System.Object,WebSocketSharp.CloseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderSceneManager_U3CConnectActionU3Eb__17_3_mF32B3B7D11BDA880ECFD44CABE932F7281C6E606 (SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * __this, RuntimeObject * ___sender0, CloseEventArgs_tA6255FCF485BCD2A23F7225EBADC9E76E085C2B4 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E35AE3D3F1651430B25B9138BA9D1B093310EC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ws_state = "WebSocket Close";
		__this->set_ws_state_14(_stringLiteral3E35AE3D3F1651430B25B9138BA9D1B093310EC0);
		// };
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
// System.Void UnitySceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySceneManager_Start_mD843566BB505A80DC7E3EEA4E100E8C540BC3AF1 (UnitySceneManager_t16BB3F50ED32F89684BE837994BEA48C858A9E75 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnitySceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySceneManager_Update_mCBBAE4655E89DF9D1963750888EBC2A8F591ABA2 (UnitySceneManager_t16BB3F50ED32F89684BE837994BEA48C858A9E75 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnitySceneManager::ChangeToSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySceneManager_ChangeToSlider_mB5A7B2F9D1EAD9CD13FDB863B9B8ED184812CDDE (UnitySceneManager_t16BB3F50ED32F89684BE837994BEA48C858A9E75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE05F8E202A34FE5B0F9C2552FAC237EAE3494A18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SliderScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE05F8E202A34FE5B0F9C2552FAC237EAE3494A18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnitySceneManager::ChangeToFaceTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySceneManager_ChangeToFaceTrack_m204301A0A225B6B4B8C4AA42D2D8EFECAD908BE3 (UnitySceneManager_t16BB3F50ED32F89684BE837994BEA48C858A9E75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0F5C27A5E0E73D16EFC920782F52CF1F98D2B7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("FaceTrackingMode");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC0F5C27A5E0E73D16EFC920782F52CF1F98D2B7F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnitySceneManager::ChangeToHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySceneManager_ChangeToHome_m7835227D0E33A307593A71150E1BC8885E9AFA8C (UnitySceneManager_t16BB3F50ED32F89684BE837994BEA48C858A9E75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B496F869CCA773EA64EB27FB6A8EB2964447749);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("start_up");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral1B496F869CCA773EA64EB27FB6A8EB2964447749, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnitySceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySceneManager__ctor_m58EA9C7D8D7F8025734F2D92AD0C73D7D6E80A57 (UnitySceneManager_t16BB3F50ED32F89684BE837994BEA48C858A9E75 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void face_tracking::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_OnEnable_mDF7C2DEB9E844FD81C4FA4F141BAF41583A49A82 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&face_tracking_OnFaceChanged_m6DC2A9903DA710357DC820722BD31E21643278B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// faceManager.facesChanged += OnFaceChanged;
		ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * L_0 = __this->get_faceManager_4();
		Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * L_1 = (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 *)il2cpp_codegen_object_new(Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184(L_1, __this, (intptr_t)((intptr_t)face_tracking_OnFaceChanged_m6DC2A9903DA710357DC820722BD31E21643278B7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		NullCheck(L_0);
		ARFaceManager_add_facesChanged_mC0F1ECFEC0FD0955005367336E675FFA890CAC80(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void face_tracking::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_OnDisable_m976264AF2D4052F56849AD2ABB0FECA3A7EED22B (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&face_tracking_OnFaceChanged_m6DC2A9903DA710357DC820722BD31E21643278B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// faceManager.facesChanged -= OnFaceChanged;
		ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * L_0 = __this->get_faceManager_4();
		Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * L_1 = (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 *)il2cpp_codegen_object_new(Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184(L_1, __this, (intptr_t)((intptr_t)face_tracking_OnFaceChanged_m6DC2A9903DA710357DC820722BD31E21643278B7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		NullCheck(L_0);
		ARFaceManager_remove_facesChanged_mB2902EA16C0B264EC7F86D2436F5648824DD23E1(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void face_tracking::OnFaceChanged(UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_OnFaceChanged_m6DC2A9903DA710357DC820722BD31E21643278B7 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackingState_m82B5153FD82572CB261CA3429F2F7844592914EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * V_0 = NULL;
	{
		// if (eventArgs.updated.Count != 0)
		List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * L_0;
		L_0 = ARFacesChangedEventArgs_get_updated_m9AFD1F7B0958F6754D86B18A1840B26863A2047A_inline((ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_inline(L_0, /*hidden argument*/List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// var arface = eventArgs.updated[0];
		List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * L_2;
		L_2 = ARFacesChangedEventArgs_get_updated_m9AFD1F7B0958F6754D86B18A1840B26863A2047A_inline((ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_2);
		ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * L_3;
		L_3 = List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_inline(L_2, 0, /*hidden argument*/List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_RuntimeMethod_var);
		V_0 = L_3;
		// if (arface.trackingState == TrackingState.Tracking && ARSession.state > ARSessionState.Ready)
		ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ARTrackable_2_get_trackingState_m82B5153FD82572CB261CA3429F2F7844592914EC(L_4, /*hidden argument*/ARTrackable_2_get_trackingState_m82B5153FD82572CB261CA3429F2F7844592914EC_RuntimeMethod_var);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6;
		L_6 = ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)5)))
		{
			goto IL_0034;
		}
	}
	{
		// UpdateAnimatronicFaceShape(arface);
		ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * L_7 = V_0;
		face_tracking_UpdateAnimatronicFaceShape_mBB7692EEBAA29320B0111129A4175D27AFCC0077(__this, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void face_tracking::UpdateAnimatronicFaceShape(UnityEngine.XR.ARFoundation.ARFace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_UpdateAnimatronicFaceShape_mBB7692EEBAA29320B0111129A4175D27AFCC0077 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * ___arface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m670FC38AFF50325569FE539B94E663C97A79FC55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m86FEA601D9A453957DA0E61642BAD12FF2CA0E5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2E29783CCFF83F9CFCCEECE96D95EEC2D7C3A46A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m383935C666B52E9F3F6904C08B320CAF4B28213C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_mD989135403C8D2F333ECDC69D66CF3E3443273AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral013828B2C7CDB53F82429017F623C1137F737C5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08B9291AC0E57ED37C9C6DB7CEB2C2B1ECD401CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09E4BB6739137675ECA9BD9626DC7A0E685CDCA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D160B02125FEC4F0D8F84AB8C3E661AF0B735E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral388131F9B3667D7C15C2426D6680C5D9D5DC7101);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AF863C1F0EC3761EB1C81AD9BA2A34211CC4C8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C509ECDC57DBCB291B0970903B8541F84818155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral500EFAC7BFE1507F2278E076B7A9DA24157CC041);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78DCFB9FAD63D13FE9A9101BF7605F4A931EF20D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA882110227985390876B88670A26BFDD7E9BF516);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7DB039D09110342F4EE9A9C96559FD5DCE2F3F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0876CFC89FA66DF12BB402D85D4883298AC4C3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7327C017D1E8A2F19C40AE2E6911EDA789AEE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF2286301A288866AEAEF2185AF91BD6C502273);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using var blendShapesARKit = faceSubsystem.GetBlendShapeCoefficients(arface.trackableId, Allocator.Temp);
		ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 * L_0 = __this->get_faceSubsystem_7();
		ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * L_1 = ___arface0;
		NullCheck(L_1);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2;
		L_2 = ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B(L_1, /*hidden argument*/ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B_RuntimeMethod_var);
		NullCheck(L_0);
		NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  L_3;
		L_3 = ARKitFaceSubsystem_GetBlendShapeCoefficients_mE983A3A34A04F8C6340EF79A06138BEA025F9721(L_0, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			// text = "{";
			__this->set_text_8(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
			// foreach(var featureCoefficient in blendShapesARKit)
			Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD  L_4;
			L_4 = NativeArray_1_GetEnumerator_mD989135403C8D2F333ECDC69D66CF3E3443273AA((NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 *)(&V_0), /*hidden argument*/NativeArray_1_GetEnumerator_mD989135403C8D2F333ECDC69D66CF3E3443273AA_RuntimeMethod_var);
			V_1 = L_4;
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				goto IL_041e;
			}

IL_002b:
			{
				// foreach(var featureCoefficient in blendShapesARKit)
				ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F  L_5;
				L_5 = Enumerator_get_Current_m2E29783CCFF83F9CFCCEECE96D95EEC2D7C3A46A((Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2E29783CCFF83F9CFCCEECE96D95EEC2D7C3A46A_RuntimeMethod_var);
				V_2 = L_5;
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.JawOpen)
				int32_t L_6;
				L_6 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)24)))))
				{
					goto IL_007b;
				}
			}

IL_003e:
			{
				// text += $"\"JawOpen\":{Math.Floor(featureCoefficient.coefficient*100)/100},";
				String_t* L_7 = __this->get_text_8();
				float L_8;
				L_8 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_9;
				L_9 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_8, (float)(100.0f))))));
				double L_10 = ((double)((double)L_9/(double)(100.0)));
				RuntimeObject * L_11 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_10);
				String_t* L_12;
				L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral500EFAC7BFE1507F2278E076B7A9DA24157CC041, L_11, /*hidden argument*/NULL);
				String_t* L_13;
				L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, L_12, /*hidden argument*/NULL);
				__this->set_text_8(L_13);
			}

IL_007b:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeBlinkLeft)
				int32_t L_14;
				L_14 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_14) == ((uint32_t)8))))
				{
					goto IL_00c2;
				}
			}

IL_0085:
			{
				// text += $"\"EyeBlinkLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_15 = __this->get_text_8();
				float L_16;
				L_16 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_17;
				L_17 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_16, (float)(100.0f))))));
				double L_18 = ((double)((double)L_17/(double)(100.0)));
				RuntimeObject * L_19 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_18);
				String_t* L_20;
				L_20 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDA7327C017D1E8A2F19C40AE2E6911EDA789AEE8, L_19, /*hidden argument*/NULL);
				String_t* L_21;
				L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, L_20, /*hidden argument*/NULL);
				__this->set_text_8(L_21);
			}

IL_00c2:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeBlinkRight)
				int32_t L_22;
				L_22 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)9)))))
				{
					goto IL_010a;
				}
			}

IL_00cd:
			{
				// text += $"\"EyeBlinkRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_23 = __this->get_text_8();
				float L_24;
				L_24 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_25;
				L_25 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_24, (float)(100.0f))))));
				double L_26 = ((double)((double)L_25/(double)(100.0)));
				RuntimeObject * L_27 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_26);
				String_t* L_28;
				L_28 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral08B9291AC0E57ED37C9C6DB7CEB2C2B1ECD401CF, L_27, /*hidden argument*/NULL);
				String_t* L_29;
				L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_23, L_28, /*hidden argument*/NULL);
				__this->set_text_8(L_29);
			}

IL_010a:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.BrowInnerUp)
				int32_t L_30;
				L_30 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_30) == ((uint32_t)2))))
				{
					goto IL_0151;
				}
			}

IL_0114:
			{
				// text += $"\"BrowInnerUp\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_31 = __this->get_text_8();
				float L_32;
				L_32 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_33;
				L_33 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_32, (float)(100.0f))))));
				double L_34 = ((double)((double)L_33/(double)(100.0)));
				RuntimeObject * L_35 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_34);
				String_t* L_36;
				L_36 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralD0876CFC89FA66DF12BB402D85D4883298AC4C3F, L_35, /*hidden argument*/NULL);
				String_t* L_37;
				L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_31, L_36, /*hidden argument*/NULL);
				__this->set_text_8(L_37);
			}

IL_0151:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.BrowDownLeft)
				int32_t L_38;
				L_38 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if (L_38)
				{
					goto IL_0197;
				}
			}

IL_015a:
			{
				// text += $"\"BrowDownLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_39 = __this->get_text_8();
				float L_40;
				L_40 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_41;
				L_41 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_40, (float)(100.0f))))));
				double L_42 = ((double)((double)L_41/(double)(100.0)));
				RuntimeObject * L_43 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_42);
				String_t* L_44;
				L_44 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral09E4BB6739137675ECA9BD9626DC7A0E685CDCA2, L_43, /*hidden argument*/NULL);
				String_t* L_45;
				L_45 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_39, L_44, /*hidden argument*/NULL);
				__this->set_text_8(L_45);
			}

IL_0197:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.BrowDownRight)
				int32_t L_46;
				L_46 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_46) == ((uint32_t)1))))
				{
					goto IL_01de;
				}
			}

IL_01a1:
			{
				// text += $"\"BrowDownRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_47 = __this->get_text_8();
				float L_48;
				L_48 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_49;
				L_49 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_48, (float)(100.0f))))));
				double L_50 = ((double)((double)L_49/(double)(100.0)));
				RuntimeObject * L_51 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_50);
				String_t* L_52;
				L_52 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral2D160B02125FEC4F0D8F84AB8C3E661AF0B735E6, L_51, /*hidden argument*/NULL);
				String_t* L_53;
				L_53 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_47, L_52, /*hidden argument*/NULL);
				__this->set_text_8(L_53);
			}

IL_01de:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookUpLeft)
				int32_t L_54;
				L_54 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)16)))))
				{
					goto IL_0226;
				}
			}

IL_01e9:
			{
				// text += $"\"EyeLookUpLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_55 = __this->get_text_8();
				float L_56;
				L_56 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_57;
				L_57 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_56, (float)(100.0f))))));
				double L_58 = ((double)((double)L_57/(double)(100.0)));
				RuntimeObject * L_59 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_58);
				String_t* L_60;
				L_60 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral388131F9B3667D7C15C2426D6680C5D9D5DC7101, L_59, /*hidden argument*/NULL);
				String_t* L_61;
				L_61 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_55, L_60, /*hidden argument*/NULL);
				__this->set_text_8(L_61);
			}

IL_0226:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookUpRight)
				int32_t L_62;
				L_62 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)17)))))
				{
					goto IL_026e;
				}
			}

IL_0231:
			{
				// text += $"\"EyeLookUpRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_63 = __this->get_text_8();
				float L_64;
				L_64 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_65;
				L_65 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_64, (float)(100.0f))))));
				double L_66 = ((double)((double)L_65/(double)(100.0)));
				RuntimeObject * L_67 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_66);
				String_t* L_68;
				L_68 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3AF863C1F0EC3761EB1C81AD9BA2A34211CC4C8F, L_67, /*hidden argument*/NULL);
				String_t* L_69;
				L_69 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_63, L_68, /*hidden argument*/NULL);
				__this->set_text_8(L_69);
			}

IL_026e:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookDownLeft)
				int32_t L_70;
				L_70 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)10)))))
				{
					goto IL_02b6;
				}
			}

IL_0279:
			{
				// text += $"\"EyeLookDownLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_71 = __this->get_text_8();
				float L_72;
				L_72 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_73;
				L_73 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_72, (float)(100.0f))))));
				double L_74 = ((double)((double)L_73/(double)(100.0)));
				RuntimeObject * L_75 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_74);
				String_t* L_76;
				L_76 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral78DCFB9FAD63D13FE9A9101BF7605F4A931EF20D, L_75, /*hidden argument*/NULL);
				String_t* L_77;
				L_77 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_71, L_76, /*hidden argument*/NULL);
				__this->set_text_8(L_77);
			}

IL_02b6:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookDownRight)
				int32_t L_78;
				L_78 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_02fe;
				}
			}

IL_02c1:
			{
				// text += $"\"EyeLookDownRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_79 = __this->get_text_8();
				float L_80;
				L_80 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_81;
				L_81 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_80, (float)(100.0f))))));
				double L_82 = ((double)((double)L_81/(double)(100.0)));
				RuntimeObject * L_83 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_82);
				String_t* L_84;
				L_84 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralA882110227985390876B88670A26BFDD7E9BF516, L_83, /*hidden argument*/NULL);
				String_t* L_85;
				L_85 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_79, L_84, /*hidden argument*/NULL);
				__this->set_text_8(L_85);
			}

IL_02fe:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookInLeft)
				int32_t L_86;
				L_86 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_86) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_0346;
				}
			}

IL_0309:
			{
				// text += $"\"EyeLookInLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_87 = __this->get_text_8();
				float L_88;
				L_88 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_89;
				L_89 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_88, (float)(100.0f))))));
				double L_90 = ((double)((double)L_89/(double)(100.0)));
				RuntimeObject * L_91 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_90);
				String_t* L_92;
				L_92 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralEBF2286301A288866AEAEF2185AF91BD6C502273, L_91, /*hidden argument*/NULL);
				String_t* L_93;
				L_93 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_87, L_92, /*hidden argument*/NULL);
				__this->set_text_8(L_93);
			}

IL_0346:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookInRight)
				int32_t L_94;
				L_94 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_94) == ((uint32_t)((int32_t)13)))))
				{
					goto IL_038e;
				}
			}

IL_0351:
			{
				// text += $"\"EyeLookInRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_95 = __this->get_text_8();
				float L_96;
				L_96 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_97;
				L_97 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_96, (float)(100.0f))))));
				double L_98 = ((double)((double)L_97/(double)(100.0)));
				RuntimeObject * L_99 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_98);
				String_t* L_100;
				L_100 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3C509ECDC57DBCB291B0970903B8541F84818155, L_99, /*hidden argument*/NULL);
				String_t* L_101;
				L_101 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_95, L_100, /*hidden argument*/NULL);
				__this->set_text_8(L_101);
			}

IL_038e:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookOutLeft)
				int32_t L_102;
				L_102 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_102) == ((uint32_t)((int32_t)14)))))
				{
					goto IL_03d6;
				}
			}

IL_0399:
			{
				// text += $"\"EyeLookOutLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_103 = __this->get_text_8();
				float L_104;
				L_104 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_105;
				L_105 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_104, (float)(100.0f))))));
				double L_106 = ((double)((double)L_105/(double)(100.0)));
				RuntimeObject * L_107 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_106);
				String_t* L_108;
				L_108 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB7DB039D09110342F4EE9A9C96559FD5DCE2F3F1, L_107, /*hidden argument*/NULL);
				String_t* L_109;
				L_109 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_103, L_108, /*hidden argument*/NULL);
				__this->set_text_8(L_109);
			}

IL_03d6:
			{
				// if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookOutRight)
				int32_t L_110;
				L_110 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_110) == ((uint32_t)((int32_t)15)))))
				{
					goto IL_041e;
				}
			}

IL_03e1:
			{
				// text += $"\"EyeLookOutRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
				String_t* L_111 = __this->get_text_8();
				float L_112;
				L_112 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
				double L_113;
				L_113 = floor(((double)((double)((float)il2cpp_codegen_multiply((float)L_112, (float)(100.0f))))));
				double L_114 = ((double)((double)L_113/(double)(100.0)));
				RuntimeObject * L_115 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_114);
				String_t* L_116;
				L_116 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral013828B2C7CDB53F82429017F623C1137F737C5B, L_115, /*hidden argument*/NULL);
				String_t* L_117;
				L_117 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_111, L_116, /*hidden argument*/NULL);
				__this->set_text_8(L_117);
			}

IL_041e:
			{
				// foreach(var featureCoefficient in blendShapesARKit)
				bool L_118;
				L_118 = Enumerator_MoveNext_m86FEA601D9A453957DA0E61642BAD12FF2CA0E5F((Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m86FEA601D9A453957DA0E61642BAD12FF2CA0E5F_RuntimeMethod_var);
				if (L_118)
				{
					goto IL_002b;
				}
			}

IL_042a:
			{
				IL2CPP_LEAVE(0x43A, FINALLY_042c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_042c;
		}

FINALLY_042c:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m670FC38AFF50325569FE539B94E663C97A79FC55((Enumerator_tDEE7EE0417E98ACD6CFA762C98BC173B6942C9DD *)(&V_1), /*hidden argument*/Enumerator_Dispose_m670FC38AFF50325569FE539B94E663C97A79FC55_RuntimeMethod_var);
			IL2CPP_END_FINALLY(1068)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(1068)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x43A, IL_043a)
		}

IL_043a:
		{
			// text = text.Substring(0, text.Length - 1)+ "}";
			String_t* L_119 = __this->get_text_8();
			String_t* L_120 = __this->get_text_8();
			NullCheck(L_120);
			int32_t L_121;
			L_121 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_120, /*hidden argument*/NULL);
			NullCheck(L_119);
			String_t* L_122;
			L_122 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_119, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_121, (int32_t)1)), /*hidden argument*/NULL);
			String_t* L_123;
			L_123 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_122, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
			__this->set_text_8(L_123);
			// }
			IL2CPP_LEAVE(0x473, FINALLY_0465);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0465;
	}

FINALLY_0465:
	{ // begin finally (depth: 1)
		NativeArray_1_Dispose_m383935C666B52E9F3F6904C08B320CAF4B28213C((NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 *)(&V_0), /*hidden argument*/NativeArray_1_Dispose_m383935C666B52E9F3F6904C08B320CAF4B28213C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1125)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1125)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x473, IL_0473)
	}

IL_0473:
	{
		// }
		return;
	}
}
// System.Void face_tracking::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_Start_mA77182FFB8E66110D0DB4DF00F4C57CC3DDCE4D8 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mE692B553BBB816D50C60C90825B9AFEEA8130210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input_address = input_address.GetComponent<InputField>();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_input_address_10();
		NullCheck(L_0);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1;
		L_1 = Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mE692B553BBB816D50C60C90825B9AFEEA8130210(L_0, /*hidden argument*/Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mE692B553BBB816D50C60C90825B9AFEEA8130210_RuntimeMethod_var);
		__this->set_input_address_10(L_1);
		// faceSubsystem = (ARKitFaceSubsystem)faceManager.subsystem;
		ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * L_2 = __this->get_faceManager_4();
		NullCheck(L_2);
		XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * L_3;
		L_3 = SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_inline(L_2, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_RuntimeMethod_var);
		__this->set_faceSubsystem_7(((ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 *)CastclassClass((RuntimeObject*)L_3, ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1_il2cpp_TypeInfo_var)));
		// ws = null;
		__this->set_ws_12((WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D *)NULL);
		// }
		return;
	}
}
// System.Void face_tracking::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_Update_m8C9FBA2004C10BDE9B139B23A9B3B0413C885AD4 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, const RuntimeMethod* method)
{
	{
		// ui_text.text = text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_ui_text_5();
		String_t* L_1 = __this->get_text_8();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// ws_text.text = ws_state;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_ws_text_6();
		String_t* L_3 = __this->get_ws_state_9();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// if (ws != null)
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_4 = __this->get_ws_12();
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// ws.Send(text);
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_5 = __this->get_ws_12();
		String_t* L_6 = __this->get_text_8();
		NullCheck(L_5);
		WebSocket_Send_mDA68B99DCFBA76DA099422FBFA66662C8DA2A452(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void face_tracking::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_OnDestroy_m71AD3C9F16165B602E5B207BA5338462EEC56035 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, const RuntimeMethod* method)
{
	{
		// ws.Close();
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = __this->get_ws_12();
		NullCheck(L_0);
		WebSocket_Close_m6093B1833EF10BDFE7124604300C0C46F23472BD(L_0, /*hidden argument*/NULL);
		// ws = null;
		__this->set_ws_12((WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D *)NULL);
		// }
		return;
	}
}
// System.Void face_tracking::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_Connect_m274FC170C7149509469D80CD98C10963F6D907DF (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ws != null)
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = __this->get_ws_12();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// ws.Close();
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_1 = __this->get_ws_12();
		NullCheck(L_1);
		WebSocket_Close_m6093B1833EF10BDFE7124604300C0C46F23472BD(L_1, /*hidden argument*/NULL);
		// ws = null;
		__this->set_ws_12((WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D *)NULL);
	}

IL_001a:
	{
		// address = input_address.text;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_input_address_10();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_2, /*hidden argument*/NULL);
		__this->set_address_11(L_3);
		// ws = new WebSocket($"ws://{address}");
		String_t* L_4 = __this->get_address_11();
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral875CF8A46A6E3F0725287DAF52B09AF91CB77C71, L_4, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_inline(/*hidden argument*/Array_Empty_TisString_t_m224DA90A7384ACF7EBE2F94D2DFDE2F310D1E77D_RuntimeMethod_var);
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_7 = (WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D *)il2cpp_codegen_object_new(WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D_il2cpp_TypeInfo_var);
		WebSocket__ctor_m39E49CA394585C29953BCB94A3B9098F1DD7A9BF(L_7, L_5, L_6, /*hidden argument*/NULL);
		__this->set_ws_12(L_7);
		// ConnectAction(ws);
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_8 = __this->get_ws_12();
		face_tracking_ConnectAction_m1825816BA6F43D25FB47C34765B38F70EB116A0E(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void face_tracking::ConnectAction(WebSocketSharp.WebSocket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_ConnectAction_m1825816BA6F43D25FB47C34765B38F70EB116A0E (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * ___Client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m2F64AADC00E5B107A3C2BF45036DA629638F0D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m3F4C677754E04CC5E95D9BD9CD11C80191DBD774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m6FE9E8462B264584E80C3AE666BA7E40F9EF9CAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&face_tracking_U3CConnectActionU3Eb__17_0_m76ED488721DD4BBB74E43DA043FCCFACF7623B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&face_tracking_U3CConnectActionU3Eb__17_1_mDB17E743C03368CB5D43918E227B856CC06C7A8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&face_tracking_U3CConnectActionU3Eb__17_2_mD80B5F568B94EDA61FE85CA08331C3B400FFAAA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&face_tracking_U3CConnectActionU3Eb__17_3_mACD8EBB2BFFC30F6799CDE8D5172303A26F52092_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Client.OnOpen += (sender, e) =>
		// {
		//     ws_state = "WebSocket Open";
		// };
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_0 = ___Client0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_1, __this, (intptr_t)((intptr_t)face_tracking_U3CConnectActionU3Eb__17_0_m76ED488721DD4BBB74E43DA043FCCFACF7623B73_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		WebSocket_add_OnOpen_m3352F1F7990CF2B17AEBBD8A0ACE7D6E9E4B920B(L_0, L_1, /*hidden argument*/NULL);
		// Client.OnMessage += (sender, e) =>
		// {
		//     ws_state = e.Data;
		// };
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_2 = ___Client0;
		EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A * L_3 = (EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A *)il2cpp_codegen_object_new(EventHandler_1_t60C7F544FEDEB55D0F239067E3EC01AC664C8E1A_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3F4C677754E04CC5E95D9BD9CD11C80191DBD774(L_3, __this, (intptr_t)((intptr_t)face_tracking_U3CConnectActionU3Eb__17_1_mDB17E743C03368CB5D43918E227B856CC06C7A8E_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m3F4C677754E04CC5E95D9BD9CD11C80191DBD774_RuntimeMethod_var);
		NullCheck(L_2);
		WebSocket_add_OnMessage_m0A7654BD293723F60D937ED0CC193998EAE39D30(L_2, L_3, /*hidden argument*/NULL);
		// Client.OnError += (sender, e) =>
		// {
		//     ws_state = "Websocket Error: " + e.Message;
		// };
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_4 = ___Client0;
		EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 * L_5 = (EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9 *)il2cpp_codegen_object_new(EventHandler_1_t8C401B9D2E8E25D6DE3FDF163A70E6D5501FAAC9_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m6FE9E8462B264584E80C3AE666BA7E40F9EF9CAB(L_5, __this, (intptr_t)((intptr_t)face_tracking_U3CConnectActionU3Eb__17_2_mD80B5F568B94EDA61FE85CA08331C3B400FFAAA5_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m6FE9E8462B264584E80C3AE666BA7E40F9EF9CAB_RuntimeMethod_var);
		NullCheck(L_4);
		WebSocket_add_OnError_m81E4C2F532D808FD84584FCAA549F540E9210FD2(L_4, L_5, /*hidden argument*/NULL);
		// Client.OnClose += (sender, e) =>
		// {
		//     ws_state = "WebSocket Close";
		// };
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_6 = ___Client0;
		EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 * L_7 = (EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434 *)il2cpp_codegen_object_new(EventHandler_1_tAC8E3A0651493E60E3BDA08CA8E7D83E9BA22434_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m2F64AADC00E5B107A3C2BF45036DA629638F0D87(L_7, __this, (intptr_t)((intptr_t)face_tracking_U3CConnectActionU3Eb__17_3_mACD8EBB2BFFC30F6799CDE8D5172303A26F52092_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m2F64AADC00E5B107A3C2BF45036DA629638F0D87_RuntimeMethod_var);
		NullCheck(L_6);
		WebSocket_add_OnClose_m5C5673D52C60228C230FBD971868BED76E9C3BC6(L_6, L_7, /*hidden argument*/NULL);
		// Client.Connect();
		WebSocket_t07A8BBF48AE58412738005B6824B3988B4FF768D * L_8 = ___Client0;
		NullCheck(L_8);
		WebSocket_Connect_m64817B63B836D108C492DC3A64E3AD83AB7BDC12(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void face_tracking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking__ctor_mF8631D2C76B2F899EE8B462F058C4A0F0772B6B5 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C27E83B9DFB0DB91B2C168FF473C28E3EEAF23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C7C03A7766C6A688D11A2FC1D845425E76B5495);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string text = "{\"none\":\"none\"}";
		__this->set_text_8(_stringLiteral6C7C03A7766C6A688D11A2FC1D845425E76B5495);
		// string ws_state = "none";
		__this->set_ws_state_9(_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		// public string address = "192.168.0.9:9998";
		__this->set_address_11(_stringLiteral28C27E83B9DFB0DB91B2C168FF473C28E3EEAF23);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void face_tracking::<ConnectAction>b__17_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_U3CConnectActionU3Eb__17_0_m76ED488721DD4BBB74E43DA043FCCFACF7623B73 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22160B11970B864AB848328ED0BAACF7FA091137);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ws_state = "WebSocket Open";
		__this->set_ws_state_9(_stringLiteral22160B11970B864AB848328ED0BAACF7FA091137);
		// };
		return;
	}
}
// System.Void face_tracking::<ConnectAction>b__17_1(System.Object,WebSocketSharp.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_U3CConnectActionU3Eb__17_1_mDB17E743C03368CB5D43918E227B856CC06C7A8E (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, RuntimeObject * ___sender0, MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786 * ___e1, const RuntimeMethod* method)
{
	{
		// ws_state = e.Data;
		MessageEventArgs_t1A9A09F24AAEB879F19F68A296B20E9DECD47786 * L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MessageEventArgs_get_Data_m39A69CE71CFBAF5A9A98C0114BA8CE2462EF6F0E(L_0, /*hidden argument*/NULL);
		__this->set_ws_state_9(L_1);
		// };
		return;
	}
}
// System.Void face_tracking::<ConnectAction>b__17_2(System.Object,WebSocketSharp.ErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_U3CConnectActionU3Eb__17_2_mD80B5F568B94EDA61FE85CA08331C3B400FFAAA5 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, RuntimeObject * ___sender0, ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral719A382B9ED8AC783638978FB890914A308AFC44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ws_state = "Websocket Error: " + e.Message;
		ErrorEventArgs_tA140A6F0E474BCF8B024C76EC59ED7A18BCEA693 * L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ErrorEventArgs_get_Message_mC0BD8B4C37DD2340161BA7EF2381DE2356ABFB46(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral719A382B9ED8AC783638978FB890914A308AFC44, L_1, /*hidden argument*/NULL);
		__this->set_ws_state_9(L_2);
		// };
		return;
	}
}
// System.Void face_tracking::<ConnectAction>b__17_3(System.Object,WebSocketSharp.CloseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void face_tracking_U3CConnectActionU3Eb__17_3_mACD8EBB2BFFC30F6799CDE8D5172303A26F52092 (face_tracking_tA123BB4B4F8A093C8FAF4CE813276B7D5CA3B763 * __this, RuntimeObject * ___sender0, CloseEventArgs_tA6255FCF485BCD2A23F7225EBADC9E76E085C2B4 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E35AE3D3F1651430B25B9138BA9D1B093310EC0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ws_state = "WebSocket Close";
		__this->set_ws_state_9(_stringLiteral3E35AE3D3F1651430B25B9138BA9D1B093310EC0);
		// };
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
// System.Void SliderSceneManager/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mD32B5E2DDE5C6108B623A8A4F5AF5C59516582CD (U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SliderSceneManager/<>c__DisplayClass12_0::<Start>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CStartU3Eb__0_m77EC40B518B613ACF5E11D8E0399B0538299917A (U3CU3Ec__DisplayClass12_0_t71BEB6E23A286BC6379999DD602962023B1EBA34 * __this, float ___U3Cp0U3E0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sliders[(int)i].onValueChanged.AddListener(delegate { makeJson((int)i); });
		SliderSceneManager_tA534E74740EF131E8C40C2E02BE980D348AEA723 * L_0 = __this->get_U3CU3E4__this_1();
		RuntimeObject * L_1 = __this->get_i_0();
		NullCheck(L_0);
		SliderSceneManager_makeJson_mACDD886B20CC35B2CB1FA9B0AC197C04D984046F(L_0, ((*(int32_t*)((int32_t*)UnBox(L_1, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// sliders[(int)i].onValueChanged.AddListener(delegate { makeJson((int)i); });
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * Slider_get_onValueChanged_m7F480C569A6D668952BE1436691850D13825E129_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method)
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * L_0 = __this->get_m_OnValueChanged_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ARFacesChangedEventArgs_get_updated_m9AFD1F7B0958F6754D86B18A1840B26863A2047A_inline (ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 * __this, const RuntimeMethod* method)
{
	{
		// public List<ARFace> updated { get; private set; }
		List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m623161F1E2E5BA2752C821DD409880E6647CA130_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B_il2cpp_TypeInfo_var))->get_s_State_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline (ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F * __this, const RuntimeMethod* method)
{
	{
		// public ARKitBlendShapeLocation blendShapeLocation => m_BlendShapeLocation;
		int32_t L_0 = __this->get_m_BlendShapeLocation_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline (ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F * __this, const RuntimeMethod* method)
{
	{
		// public float coefficient => m_Coefficient;
		float L_0 = __this->get_m_Coefficient_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
