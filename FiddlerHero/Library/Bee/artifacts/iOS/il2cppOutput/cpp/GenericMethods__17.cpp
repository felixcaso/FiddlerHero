#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { &p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD;
struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75;
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
struct Action_2_t6863D0C8AC3729DB6F8C83F07339EE825A84A800;
struct Action_2_tDC791CC86FE7342D01E06A0D39B05C7DF40C953C;
struct Action_2_t0F28FD6DF12DE3C0C0A3C8670D6FF563CB91D7DE;
struct Action_2_t6A77E21F2D500A58262FF81C45072CE9421F1731;
struct Action_2_t9409F7032549C6485B2783BD411C768B07BF3230;
struct Action_2_tC85E3E333079B0AD40C500D3716134CAAA50E71E;
struct Action_2_t4EDE69A2330F8765E31BF3408B8B8EA126137B3B;
struct Action_2_t0D708E493BEEC4A0FA7432BE6002D4765EF5FD76;
struct Action_2_tD600952FE18E28A4C74B03C401311CB865A9D1D6;
struct Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE;
struct Action_2_t02F825E5836331E5028F466633AC99D6659AB01E;
struct Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180;
struct Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0;
struct Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B;
struct Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5;
struct Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277;
struct Action_2_tA39C087131EF098F027F705849BBD38F514ECA50;
struct Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8;
struct Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB;
struct Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2;
struct Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79;
struct Action_3_t69C2D45C6C197D4070F949BFDCB7405529C4DA29;
struct Action_3_t0262FC6270B6E7F95ACEC087FB5BBE5F0A51EDB4;
struct Action_3_tB36C63A6163DE251C9DAB7E491FC68AF20F25B3B;
struct Action_3_tA77E3EB3B729CC4518FEE32E1EBD226DBC9C0B36;
struct Action_3_tE70489C345DA6724466411DACD6BF921598C72FA;
struct Action_3_t2DF341D286CB482CE4C744E8B60E73AEEAAB444A;
struct Action_3_t4B8BBD2F9D04192EE60346F180E1158367D50630;
struct Action_3_t7A7D8F37E60576CA928157EFAB4BA545F40DAB98;
struct Action_3_t97E9FE86398043E046447F3D72D985E4DF383DBA;
struct Action_3_t7C93E6A14E8998072D4A3F39386F719D44FA3AF9;
struct Action_3_t3D631909C0B9D436FE34760BF5570D181CAA2CB1;
struct Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4;
struct Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82;
struct Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C;
struct Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23;
struct Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3;
struct Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7;
struct Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5;
struct Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952;
struct Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66;
struct Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8;
struct Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9;
struct Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C;
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A;
struct Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5;
struct Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94;
struct Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8;
struct Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4;
struct Func_3_t034981816E97D7D05569C188B3229941BC10EB32;
struct Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF;
struct Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79;
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61;
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770;
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A;
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735;
struct InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B;
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct ListCache_1_tEF4AA4BB6AB6DF0984AE1DF5AF78CF1858C24A3C;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4;
struct List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F;
struct List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373;
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E;
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
struct IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93;
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF;
struct MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NetworkManager_t3CF56E00215CFB653E23B2207E7BE9A958E975BF;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
struct UnloadQueueData_tA7D534B39702F891115C9362816A821A533F6D98;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterExtensions_t42D49453F9F4B2FCE4CE8F04DCD92BA1F7CA7C2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B;
struct MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF;
struct MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct GeneratedComparer_1_tF9E5DE8A02D62E3A49C0A5B576F259D525AAFC9B  : public RuntimeObject
{
};
struct GeneratedComparer_1_t567712E52A79262D62EAAAAC0C8261E9675409A3  : public RuntimeObject
{
};
struct GeneratedComparer_1_tF2B80D261186468C5F9D0E469F5A202DFE691FB8  : public RuntimeObject
{
};
struct GenericWriter_1_tCF918059BCC8EE30283493A3CF7403C3AFC29668  : public RuntimeObject
{
};
struct GenericWriter_1_t584D6E2AB181974F6BB4F0B1154282D96AB2ED2F  : public RuntimeObject
{
};
struct GenericWriter_1_t63F518D05C6CD08AD4F796A935EA1C061088BA52  : public RuntimeObject
{
};
struct GenericWriter_1_tB52C8B3A43F01D8D7AA6F7C9020F41C89AA748E8  : public RuntimeObject
{
};
struct GenericWriter_1_t9B346D745C71E6FBAEDC214DA49F71B56FD701C1  : public RuntimeObject
{
};
struct GenericWriter_1_t9CD8FE81621F2BA8579F524FD103725B054D2538  : public RuntimeObject
{
};
struct GenericWriter_1_tC5163517FDD2888726C765836C53BA8E11F23237  : public RuntimeObject
{
};
struct GenericWriter_1_t7D104E1B9BC91999BB7DCB13458A4E5CBD8AD7A1  : public RuntimeObject
{
};
struct GenericWriter_1_tF2B15E9688E116ACC627645C72A0004D233AB8C9  : public RuntimeObject
{
};
struct GenericWriter_1_t06EEEC6B9EFD7565C5AFCF47315E65E6E79C8874  : public RuntimeObject
{
};
struct GenericWriter_1_tCFD188AFB9226EACD0E7C1BBD492A20CF510878E  : public RuntimeObject
{
};
struct ListCache_1_tEF4AA4BB6AB6DF0984AE1DF5AF78CF1858C24A3C  : public RuntimeObject
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___Collection;
	Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* ____cache;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4  : public RuntimeObject
{
	MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F  : public RuntimeObject
{
	MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373  : public RuntimeObject
{
	MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B  : public RuntimeObject
{
	int32_t ___Position;
	int32_t ___Length;
	NetworkManager_t3CF56E00215CFB653E23B2207E7BE9A958E975BF* ___NetworkManager;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct CustomType_tA329BB5AFC2C81F0490A24C9A8CDF0316C7B2808  : public RuntimeObject
{
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct U3CU3Ec__DisplayClass82_0_1_t4A8B1D5D7CE31242EC31E4D9EE27BDC3E98A1460 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_t58A6F8DAAECF3E414E9D54EFD8EF6E47F2E11FFA 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_tE75B2B820E232384F8F1A7692EDF8DAE9C150F94 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_t21AB0A796FBFB58DBD2CF42A945F37A250A72305 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_t491229AEF7906C93495A3F5F982E05939D4A60F4 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_t7ADAF3D59549F8661215EF1D986EFF625672CE25 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_t8113C10ED39CE767984FB1023A0E529C24BF1154 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_tF2AEE9C902203D136EE111EA15E4A310DB558BFE 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_t6AAA9341B2933C31CF18D487D16219917A1F3597 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_t79FC95E469DFCC39F2D5797D225D91E9879AD3DD 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_tFB050F6CB7FFF7C1D9403B85D8E602BA5FFDE515 
{
	Type_t* ___type;
};
struct U3CU3Ec__DisplayClass82_0_1_tBB91763D614F3B42E732F6598121169EF0D64FF4 
{
	Type_t* ___type;
};
struct InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F 
{
	int32_t ___length;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstValue;
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___additionalValues;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 
{
	int32_t ___length;
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___firstValue;
	Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373* ___additionalValues;
};
struct InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 
{
	int32_t ___length;
	InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B* ___firstValue;
	InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E* ___additionalValues;
};
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	int32_t ___length;
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue;
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues;
};
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	int32_t ___length;
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue;
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues;
};
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	int32_t ___length;
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue;
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues;
};
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	int32_t ___length;
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue;
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues;
};
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues;
};
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640  : public InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457
{
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name;
	String_t* ___m_BindingGroup;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
#pragma pack(push, tp, 1)
struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_OffsetPadding[4];
					uint16_t ___sizeInBytes;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_OffsetPadding[6];
					uint16_t ___deviceId;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_OffsetPadding[8];
					double ___time;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_OffsetPadding_forAlignmentOnly[8];
					double ___time_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_OffsetPadding[16];
					int32_t ___eventId;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};
#pragma pack(pop, tp)
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF 
{
	String_t* ___Name;
	uint16_t ___Age;
};
struct Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF_marshaled_pinvoke
{
	char* ___Name;
	uint16_t ___Age;
};
struct Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF_marshaled_com
{
	Il2CppChar* ___Name;
	uint16_t ___Age;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 
{
	UnloadQueueData_tA7D534B39702F891115C9362816A821A533F6D98* ___QueueData;
};
struct UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99_marshaled_pinvoke
{
	UnloadQueueData_tA7D534B39702F891115C9362816A821A533F6D98* ___QueueData;
};
struct UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99_marshaled_com
{
	UnloadQueueData_tA7D534B39702F891115C9362816A821A533F6D98* ___QueueData;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A__padding[1];
	};
};
struct MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF 
{
	float ___Horizontal;
	float ___Vertical;
	uint32_t ____tick;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_pinvoke
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_com
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	alignas(IL2CPP_SIZEOF_VOID_P) TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	alignas(IL2CPP_SIZEOF_VOID_P) BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	alignas(IL2CPP_SIZEOF_VOID_P) InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	bool ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_pinvoke
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	int32_t ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_com
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	int32_t ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C 
{
	bool ___Jump;
	float ___Horizontal;
	float ___Vertical;
	uint32_t ____tick;
};
struct MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_marshaled_pinvoke
{
	int32_t ___Jump;
	float ___Horizontal;
	float ___Vertical;
	uint32_t ____tick;
};
struct MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_marshaled_com
{
	int32_t ___Jump;
	float ___Horizontal;
	float ___Vertical;
	uint32_t ____tick;
};
struct U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2__padding[1];
	};
};
struct U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254__padding[1];
	};
};
struct CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_Callbacks;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToAdd;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToRemove;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_Callbacks;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToAdd;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToRemove;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	int32_t ___length;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues;
};
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	int32_t ___m_Count;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices;
	int32_t ___m_Allocator;
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700  : public RuntimeObject
{
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___maps;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___controls;
	IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93* ___interactions;
	InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64* ___processors;
	InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E* ___composites;
	int32_t ___totalProcessorCount;
	UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 ___memory;
	bool ___m_OnBeforeUpdateHooked;
	bool ___m_OnAfterUpdateHooked;
	bool ___m_InProcessControlStateChange;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_CurrentlyProcessingThisEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnBeforeUpdateDelegate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate;
};
#pragma pack(push, tp, 1)
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					alignas(1) NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					alignas(1) NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5__padding[20];
	};
};
#pragma pack(pop, tp)
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480  : public RuntimeObject
{
	Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7* ___U3ConRecordAddedU3Ek__BackingField;
	Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2* ___U3ConShouldRecordStateChangeU3Ek__BackingField;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Controls;
	int32_t ___m_ControlCount;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_RecordBuffer;
	int32_t ___m_StateSizeInBytes;
	int32_t ___m_RecordCount;
	int32_t ___m_HistoryDepth;
	int32_t ___m_ExtraMemoryPerRecord;
	int32_t ___m_HeadIndex;
	uint32_t ___m_CurrentVersion;
	Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 ___m_UpdateMask;
	bool ___m_AddNewControls;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	uint32_t ____tick;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D 
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___m_ControlScheme;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_pinvoke
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke ___m_ControlScheme;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_com
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com ___m_ControlScheme;
};
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821  : public RuntimeObject
{
	String_t* ___U3CnameU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	Type_t* ___U3CtypeU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CstateFormatU3Ek__BackingField;
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField;
	String_t* ___m_ExtendsLayout;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CupdateBeforeRenderU3Ek__BackingField;
	int32_t ___m_ControlCount;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls;
};
struct RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			double ___time;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___time_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_OffsetPadding[8];
			uint32_t ___version;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___version_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___controlIndex_OffsetPadding[12];
			int32_t ___controlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___controlIndex_OffsetPadding_forAlignmentOnly[12];
			int32_t ___controlIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithoutControlIndex_OffsetPadding[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithoutControlIndex_OffsetPadding_forAlignmentOnly[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithControlIndex_OffsetPadding[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithControlIndex_OffsetPadding_forAlignmentOnly[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_forAlignmentOnly;
		};
	};
};
struct ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___AngularVelocity;
	uint32_t ____tick;
};
struct MoveData_t753DE366344980726A0DE776C583226ADF9B8364 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Movement;
	float ___Horizontal;
	float ___Vertical;
	uint32_t ____tick;
};
struct ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation;
	uint32_t ____tick;
};
struct InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 
{
	int32_t ___length;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___firstValue;
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* ___additionalValues;
};
#pragma pack(push, tp, 1)
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					alignas(1) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent;
				};
				#pragma pack(pop, tp)
				struct
				{
					alignas(1) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlIndex_OffsetPadding[20];
					uint16_t ___m_ControlIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlIndex_OffsetPadding_forAlignmentOnly[20];
					uint16_t ___m_ControlIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_BindingIndex_OffsetPadding[22];
					uint16_t ___m_BindingIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_BindingIndex_OffsetPadding_forAlignmentOnly[22];
					uint16_t ___m_BindingIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionIndex_OffsetPadding[24];
					uint16_t ___m_InteractionIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionIndex_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___m_InteractionIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StateIndex_OffsetPadding[26];
					uint8_t ___m_StateIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StateIndex_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___m_StateIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Phase_OffsetPadding[27];
					uint8_t ___m_Phase;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Phase_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___m_Phase_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StartTime_OffsetPadding[28];
					double ___m_StartTime;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StartTime_OffsetPadding_forAlignmentOnly[28];
					double ___m_StartTime_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ValueData_OffsetPadding[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ValueData_OffsetPadding_forAlignmentOnly[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData_forAlignmentOnly;
				};
			};
		};
		uint8_t ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444__padding[37];
	};
};
#pragma pack(pop, tp)
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	String_t* ___m_Path;
	String_t* ___m_DisplayName;
	String_t* ___m_DisplayNameFromLayout;
	String_t* ___m_ShortDisplayName;
	String_t* ___m_ShortDisplayNameFromLayout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent;
	int32_t ___m_UsageCount;
	int32_t ___m_UsageStartIndex;
	int32_t ___m_AliasCount;
	int32_t ___m_AliasStartIndex;
	int32_t ___m_ChildCount;
	int32_t ___m_ChildStartIndex;
	int32_t ___m_ControlFlags;
	bool ___m_CachedValueIsStale;
	bool ___m_UnprocessedCachedValueIsStale;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType;
};
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	Type_t* ___m_Type;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls;
	String_t* ___m_DisplayName;
	String_t* ___m_Description;
	int32_t ___m_Flags;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470  : public RuntimeObject
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_ActionToRebind;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	Type_t* ___m_ControlType;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_ExpectedLayout;
	int32_t ___m_IncludePathCount;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_IncludePaths;
	int32_t ___m_ExcludePathCount;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludePaths;
	int32_t ___m_TargetBindingIndex;
	String_t* ___m_BindingGroupForNewBinding;
	String_t* ___m_CancelBinding;
	float ___m_MagnitudeThreshold;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Scores;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Magnitudes;
	double ___m_LastMatchTime;
	double ___m_StartTime;
	float ___m_Timeout;
	float ___m_WaitSecondsAfterMatch;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Candidates;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnComplete;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnCancel;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnPotentialMatch;
	Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A* ___m_OnGeneratePath;
	Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4* ___m_OnComputeScore;
	Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79* ___m_OnApplyBinding;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___m_OnEventDelegate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___m_LayoutCache;
	StringBuilder_t* ___m_PathBuilder;
	int32_t ___m_Flags;
	Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C* ___m_StartingActuations;
};
struct Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75  : public MulticastDelegate_t
{
};
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};
struct Action_2_t6863D0C8AC3729DB6F8C83F07339EE825A84A800  : public MulticastDelegate_t
{
};
struct Action_2_tDC791CC86FE7342D01E06A0D39B05C7DF40C953C  : public MulticastDelegate_t
{
};
struct Action_2_t0F28FD6DF12DE3C0C0A3C8670D6FF563CB91D7DE  : public MulticastDelegate_t
{
};
struct Action_2_t6A77E21F2D500A58262FF81C45072CE9421F1731  : public MulticastDelegate_t
{
};
struct Action_2_t9409F7032549C6485B2783BD411C768B07BF3230  : public MulticastDelegate_t
{
};
struct Action_2_tC85E3E333079B0AD40C500D3716134CAAA50E71E  : public MulticastDelegate_t
{
};
struct Action_2_t4EDE69A2330F8765E31BF3408B8B8EA126137B3B  : public MulticastDelegate_t
{
};
struct Action_2_t0D708E493BEEC4A0FA7432BE6002D4765EF5FD76  : public MulticastDelegate_t
{
};
struct Action_2_tD600952FE18E28A4C74B03C401311CB865A9D1D6  : public MulticastDelegate_t
{
};
struct Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE  : public MulticastDelegate_t
{
};
struct Action_2_t02F825E5836331E5028F466633AC99D6659AB01E  : public MulticastDelegate_t
{
};
struct Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180  : public MulticastDelegate_t
{
};
struct Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0  : public MulticastDelegate_t
{
};
struct Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B  : public MulticastDelegate_t
{
};
struct Action_2_tBB7AE098C59A2805EB3A6B985200634BD5D051F0  : public MulticastDelegate_t
{
};
struct Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5  : public MulticastDelegate_t
{
};
struct Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277  : public MulticastDelegate_t
{
};
struct Action_2_tA39C087131EF098F027F705849BBD38F514ECA50  : public MulticastDelegate_t
{
};
struct Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8  : public MulticastDelegate_t
{
};
struct Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB  : public MulticastDelegate_t
{
};
struct Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2  : public MulticastDelegate_t
{
};
struct Action_3_t69C2D45C6C197D4070F949BFDCB7405529C4DA29  : public MulticastDelegate_t
{
};
struct Action_3_t0262FC6270B6E7F95ACEC087FB5BBE5F0A51EDB4  : public MulticastDelegate_t
{
};
struct Action_3_tB36C63A6163DE251C9DAB7E491FC68AF20F25B3B  : public MulticastDelegate_t
{
};
struct Action_3_tA77E3EB3B729CC4518FEE32E1EBD226DBC9C0B36  : public MulticastDelegate_t
{
};
struct Action_3_tE70489C345DA6724466411DACD6BF921598C72FA  : public MulticastDelegate_t
{
};
struct Action_3_t2DF341D286CB482CE4C744E8B60E73AEEAAB444A  : public MulticastDelegate_t
{
};
struct Action_3_t4B8BBD2F9D04192EE60346F180E1158367D50630  : public MulticastDelegate_t
{
};
struct Action_3_t7A7D8F37E60576CA928157EFAB4BA545F40DAB98  : public MulticastDelegate_t
{
};
struct Action_3_t97E9FE86398043E046447F3D72D985E4DF383DBA  : public MulticastDelegate_t
{
};
struct Action_3_t7C93E6A14E8998072D4A3F39386F719D44FA3AF9  : public MulticastDelegate_t
{
};
struct Action_3_t3D631909C0B9D436FE34760BF5570D181CAA2CB1  : public MulticastDelegate_t
{
};
struct Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4  : public MulticastDelegate_t
{
};
struct Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82  : public MulticastDelegate_t
{
};
struct Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C  : public MulticastDelegate_t
{
};
struct Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23  : public MulticastDelegate_t
{
};
struct Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3  : public MulticastDelegate_t
{
};
struct Action_3_t9B559A016FED91C9859DAC4BB8FAD6358BFDF510  : public MulticastDelegate_t
{
};
struct Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7  : public MulticastDelegate_t
{
};
struct Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5  : public MulticastDelegate_t
{
};
struct Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952  : public MulticastDelegate_t
{
};
struct Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66  : public MulticastDelegate_t
{
};
struct Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8  : public MulticastDelegate_t
{
};
struct Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5  : public MulticastDelegate_t
{
};
struct Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94  : public MulticastDelegate_t
{
};
struct Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8  : public MulticastDelegate_t
{
};
struct Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A  : public MulticastDelegate_t
{
};
struct Func_3_t034981816E97D7D05569C188B3229941BC10EB32  : public MulticastDelegate_t
{
};
struct Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF  : public MulticastDelegate_t
{
};
struct Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79  : public MulticastDelegate_t
{
};
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 ___m_ProcessorStack;
	int32_t ___m_CachedValue;
	int32_t ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CachedValue;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack;
	float ___m_CachedValue;
	float ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E {};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A 
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_pinvoke
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_com
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct GeneratedComparer_1_tF9E5DE8A02D62E3A49C0A5B576F259D525AAFC9B_StaticFields
{
	Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* ___U3CIsDefaultU3Ek__BackingField;
	Func_3_t034981816E97D7D05569C188B3229941BC10EB32* ___U3CCompareU3Ek__BackingField;
};
struct GeneratedComparer_1_t567712E52A79262D62EAAAAC0C8261E9675409A3_StaticFields
{
	Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* ___U3CIsDefaultU3Ek__BackingField;
	Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* ___U3CCompareU3Ek__BackingField;
};
struct GeneratedComparer_1_tF2B80D261186468C5F9D0E469F5A202DFE691FB8_StaticFields
{
	Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* ___U3CIsDefaultU3Ek__BackingField;
	Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* ___U3CCompareU3Ek__BackingField;
};
struct GenericWriter_1_tCF918059BCC8EE30283493A3CF7403C3AFC29668_StaticFields
{
	Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* ___U3CWriteU3Ek__BackingField;
	Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_t584D6E2AB181974F6BB4F0B1154282D96AB2ED2F_StaticFields
{
	Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* ___U3CWriteU3Ek__BackingField;
	Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_t63F518D05C6CD08AD4F796A935EA1C061088BA52_StaticFields
{
	Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* ___U3CWriteU3Ek__BackingField;
	Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_tB52C8B3A43F01D8D7AA6F7C9020F41C89AA748E8_StaticFields
{
	Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* ___U3CWriteU3Ek__BackingField;
	Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_t9B346D745C71E6FBAEDC214DA49F71B56FD701C1_StaticFields
{
	Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* ___U3CWriteU3Ek__BackingField;
	Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_t9CD8FE81621F2BA8579F524FD103725B054D2538_StaticFields
{
	Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* ___U3CWriteU3Ek__BackingField;
	Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_tC5163517FDD2888726C765836C53BA8E11F23237_StaticFields
{
	Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* ___U3CWriteU3Ek__BackingField;
	Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_t7D104E1B9BC91999BB7DCB13458A4E5CBD8AD7A1_StaticFields
{
	Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* ___U3CWriteU3Ek__BackingField;
	Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_tF2B15E9688E116ACC627645C72A0004D233AB8C9_StaticFields
{
	Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* ___U3CWriteU3Ek__BackingField;
	Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_t06EEEC6B9EFD7565C5AFCF47315E65E6E79C8874_StaticFields
{
	Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* ___U3CWriteU3Ek__BackingField;
	Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct GenericWriter_1_tCFD188AFB9226EACD0E7C1BBD492A20CF510878E_StaticFields
{
	Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* ___U3CWriteU3Ek__BackingField;
	Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* ___U3CWriteAutoPackU3Ek__BackingField;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4_StaticFields
{
	MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* ___s_emptyArray;
};
struct List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F_StaticFields
{
	MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* ___s_emptyArray;
};
struct List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373_StaticFields
{
	MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* ___s_emptyArray;
};
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Processors;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700_StaticFields
{
	GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A ___s_GlobalState;
};
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant;
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance;
	int32_t ___s_CacheInstanceRef;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B  : public RuntimeArray
{
	ALIGN_FIELD (8) MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF m_Items[1];

	inline MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF value)
	{
		m_Items[index] = value;
	}
};
struct MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF  : public RuntimeArray
{
	ALIGN_FIELD (8) MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C m_Items[1];

	inline MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C value)
	{
		m_Items[index] = value;
	}
};
struct MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E  : public RuntimeArray
{
	ALIGN_FIELD (8) MoveData_t753DE366344980726A0DE776C583226ADF9B8364 m_Items[1];

	inline MoveData_t753DE366344980726A0DE776C583226ADF9B8364 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MoveData_t753DE366344980726A0DE776C583226ADF9B8364* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MoveData_t753DE366344980726A0DE776C583226ADF9B8364 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MoveData_t753DE366344980726A0DE776C583226ADF9B8364* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 value)
	{
		m_Items[index] = value;
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* GenericWriter_1_get_WriteAutoPack_m8B20E3E688F7B0C15067D3265B02C983CEC1CD2A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisStructy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF_m28D43D9008438899C04D319CF28C348781E39B5E_gshared (U3CU3Ec__DisplayClass82_0_1_tE75B2B820E232384F8F1A7692EDF8DAE9C150F94* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mE32D8C4D551EA0F88A03A3267A0253C73AC84413_gshared_inline (Action_3_tB36C63A6163DE251C9DAB7E491FC68AF20F25B3B* __this, RuntimeObject* ___0_arg1, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* GenericWriter_1_get_Write_mF18C30C55853E1E857852C3714644EF94AB0D768_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7665C89484D7D19435EDA534C917DDE0458E65C8_gshared_inline (Action_2_t6863D0C8AC3729DB6F8C83F07339EE825A84A800* __this, RuntimeObject* ___0_arg1, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* GenericWriter_1_get_WriteAutoPack_m8266AB18152122D9E49394CC54C63EFA0A64E07D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisUnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99_m4C187A515EA09459405708D3083826B5EE291D1A_gshared (U3CU3Ec__DisplayClass82_0_1_t21AB0A796FBFB58DBD2CF42A945F37A250A72305* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m315D9531FB32934C020F53D96CEC5B51E81DF759_gshared_inline (Action_3_tA77E3EB3B729CC4518FEE32E1EBD226DBC9C0B36* __this, RuntimeObject* ___0_arg1, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* GenericWriter_1_get_Write_m4CDD00AAB9190F1F6D78D3D979DA8945A0EC7A4D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mA1B55ABBF6C3B5C69231D998CC81BD0467371DB4_gshared_inline (Action_2_tDC791CC86FE7342D01E06A0D39B05C7DF40C953C* __this, RuntimeObject* ___0_arg1, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* GenericWriter_1_get_WriteAutoPack_m124CAAA2D49DF6207EBFE14F25F3A418EBDC7533_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2950C23AD92577B7BF7C7F47FCD1EF96284C6942_gshared (U3CU3Ec__DisplayClass82_0_1_t491229AEF7906C93495A3F5F982E05939D4A60F4* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m0DB7DDF77070882CA97D7CDB85A9A3E0770D5D8E_gshared_inline (Action_3_tE70489C345DA6724466411DACD6BF921598C72FA* __this, RuntimeObject* ___0_arg1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* GenericWriter_1_get_Write_m044FDB6DA90E22017AB9BE24A438DD8E7B2DACBE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m2D4B90EDAB2F9C3DBBC875445EA6142EFB512032_gshared_inline (Action_2_t0F28FD6DF12DE3C0C0A3C8670D6FF563CB91D7DE* __this, RuntimeObject* ___0_arg1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* GenericWriter_1_get_WriteAutoPack_mD4D513487818C65E2996BB0E7AC306FB5DBB562B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m27F845F582F1513955666227360D3D1B4B757795_gshared (U3CU3Ec__DisplayClass82_0_1_t8113C10ED39CE767984FB1023A0E529C24BF1154* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m4D7EF94236FB1D5AE4F798E776C62ACC92C90FF9_gshared_inline (Action_3_t2DF341D286CB482CE4C744E8B60E73AEEAAB444A* __this, RuntimeObject* ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* GenericWriter_1_get_Write_m8F3B7E01CBA23226EDE73E4B9169D04A45B107A8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m1BD8B662FCB8C1E420D2E5FA04FAB602764FAC57_gshared_inline (Action_2_t6A77E21F2D500A58262FF81C45072CE9421F1731* __this, RuntimeObject* ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* GenericWriter_1_get_WriteAutoPack_mC52AC8DE8CF429C24A5F8B79C95C80A55CA399BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E_m47C2053816BFE1DCFD2E74DFC0DCDB728E864556_gshared (U3CU3Ec__DisplayClass82_0_1_tF2AEE9C902203D136EE111EA15E4A310DB558BFE* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m8AFAE94FFB4B1B682AED4014EB2F808E0B3A0524_gshared_inline (Action_3_t4B8BBD2F9D04192EE60346F180E1158367D50630* __this, RuntimeObject* ___0_arg1, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* GenericWriter_1_get_Write_mCA3A7505AEAB91F91B387145D19DC738450BB3FE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mDD7A8E2327FAE5F8C946627C6245C5A7D40B55BA_gshared_inline (Action_2_t9409F7032549C6485B2783BD411C768B07BF3230* __this, RuntimeObject* ___0_arg1, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* GenericWriter_1_get_WriteAutoPack_m9B2FBC9D54A6130AB2980F481F7372F471A8BF75_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mB4775B73D4D7C21EDC40AEBDFFCE69B1697FED10_gshared (U3CU3Ec__DisplayClass82_0_1_t6AAA9341B2933C31CF18D487D16219917A1F3597* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m8B9FB620E50717913B0A3B3F9B43185FBDC119ED_gshared_inline (Action_3_t7A7D8F37E60576CA928157EFAB4BA545F40DAB98* __this, RuntimeObject* ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* GenericWriter_1_get_Write_m0A28F475596EA92A55509356EE694412BA8526BA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB0EF01C116D9523B6A7ADADB18214A896CC0934D_gshared_inline (Action_2_tC85E3E333079B0AD40C500D3716134CAAA50E71E* __this, RuntimeObject* ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* GenericWriter_1_get_WriteAutoPack_m3B850B64815690B5BA2F785B84896CFFA9F4DC4C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00_m14A01CDB4C99A79F979BEE990BC7A50458015AAB_gshared (U3CU3Ec__DisplayClass82_0_1_t79FC95E469DFCC39F2D5797D225D91E9879AD3DD* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mF635D512DC184B8DBA117B9EAB7303E992DE0BE6_gshared_inline (Action_3_t97E9FE86398043E046447F3D72D985E4DF383DBA* __this, RuntimeObject* ___0_arg1, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* GenericWriter_1_get_Write_m0B79255D3F6F23C16615A8D5653FAC038F4D1A98_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mF3C597AC95C1BCE14ABB5953103DE1C855ED688F_gshared_inline (Action_2_t4EDE69A2330F8765E31BF3408B8B8EA126137B3B* __this, RuntimeObject* ___0_arg1, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* GenericWriter_1_get_WriteAutoPack_mA07C3E96060A68F238A85535AF1A76E502E579CA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mD537498A06501E6453EA46B2C28061FABA0D011E_gshared (U3CU3Ec__DisplayClass82_0_1_tFB050F6CB7FFF7C1D9403B85D8E602BA5FFDE515* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m5E69F41A2D869DB329CDA5B74F1AEF397EE8AC08_gshared_inline (Action_3_t7C93E6A14E8998072D4A3F39386F719D44FA3AF9* __this, RuntimeObject* ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* GenericWriter_1_get_Write_m8AC513EB616F0933E637DA872DA2ABC4516C4D76_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m4E1C42A4140AB1D374643E4D69E962322A92E304_gshared_inline (Action_2_t0D708E493BEEC4A0FA7432BE6002D4765EF5FD76* __this, RuntimeObject* ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* GenericWriter_1_get_WriteAutoPack_mABF88440A2023EF331EA2AB432E809E74F4CD060_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92_m46552B2A8388510EEB73311A2AAFB35415D93BD0_gshared (U3CU3Ec__DisplayClass82_0_1_tBB91763D614F3B42E732F6598121169EF0D64FF4* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m363AB5AAB0D4C61AF091032C9662C8A0B8E657BF_gshared_inline (Action_3_t3D631909C0B9D436FE34760BF5570D181CAA2CB1* __this, RuntimeObject* ___0_arg1, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* GenericWriter_1_get_Write_m71F380B18ADA80DEC6A9ADB1C0BBC4BFC8315BE9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mCBAE2606C20FA05CD4033830FE3C68E87E3789AF_gshared_inline (Action_2_tD600952FE18E28A4C74B03C401311CB865A9D1D6* __this, RuntimeObject* ___0_arg1, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteArray_TisRuntimeObject_mE0E77DE528EA3904C48458F4A4B240002F091AE0_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_mB0B25C36F7F523E75D5E773613134C501CC984A9_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m3D64A4056E5974B3C4A19C2813B93CE996F213D4_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m25206A4685D69DB6C4C607AC04F85D463CCCC6FA_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisRuntimeObject_m4B9A5404192A51D674FFEFB9A5797390488AB2F2_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7F1F5F6982C5082A62F284D90F644121EB750226_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A26364BE0CBB5580386932776C8EFBD121F6B3D_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAE8611944BD58213A1AC8A64CDCE9116B20DF815_gshared_inline (List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_3_t034981816E97D7D05569C188B3229941BC10EB32* GeneratedComparer_1_get_Compare_mD39BF9529FF52BF479C5D7EF3B223E7CAD0830B2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* GeneratedComparer_1_get_IsDefault_m1FD722F0721A4C197640EBA973A7384D0C797DB3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF List_1_get_Item_m2856E1C8192F4C98921A28161C072DA186599A61_gshared (List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mEC31A1FAC87C5941D279B2E56A8E93111251971E_gshared_inline (Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mFE3FE260CDDADAFA42A2A36325A266D1A06C25D5_gshared_inline (Func_3_t034981816E97D7D05569C188B3229941BC10EB32* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAB5412E86AE151DA2816A5BE39C8ED9536F18DEA_gshared_inline (List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* GeneratedComparer_1_get_Compare_m6139CC727FCEB9CA92362B870474CB727B4149C7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* GeneratedComparer_1_get_IsDefault_m49630871A467E37723F9047E1B74452EA0624300_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C List_1_get_Item_m2A61A0E74EA6C562DE33A2FBD1CD31380612BCB0_gshared (List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mA1634CED91C0529D40733438A7F732E4F65837CF_gshared_inline (Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mB384F8CE56A3AAEF6584213D7D5A357609931BFE_gshared_inline (Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7CC7E1A36E6D648E9E16E63ABA8DAF754EA58477_gshared_inline (List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* GeneratedComparer_1_get_Compare_m5D1AEF9AB68C975730C2DEA8750E0390CE924F2B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* GeneratedComparer_1_get_IsDefault_m7B8DBEB19EBEC9A46680374BF72492962774450A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MoveData_t753DE366344980726A0DE776C583226ADF9B8364 List_1_get_Item_mB48781AC7271230047505791AFD9A83B12494E7B_gshared (List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mE5F1736D3C7B664BE975ACC9EE78C63E4D9012D9_gshared_inline (Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m0E5E2EA8CD8CC720DBCEA4719C9E3CE327C285CE_gshared_inline (Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_value, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, float ___1_value, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* GenericWriter_1_get_WriteAutoPack_mCAA6CAAC1AB12D88FF651F26885F35FBD255354C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisRuntimeObject_m3E26ED96A92AF7DF3F617552D02EC7EBAE805D49_gshared (U3CU3Ec__DisplayClass82_0_1_t58A6F8DAAECF3E414E9D54EFD8EF6E47F2E11FFA* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m34CDA3BC94B7F84C0679193E385E45BCAAC6509E_gshared_inline (Action_3_t0262FC6270B6E7F95ACEC087FB5BBE5F0A51EDB4* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* GenericWriter_1_get_Write_mF4969C87016962534ED7B4298A49E7C974BD1D2D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* GenericWriter_1_get_WriteAutoPack_m75A044506CA9CD50CEC639333A3738BF2CC69A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17E7493BC38A0257563CFB0D03D4E46D9F33AC29_gshared (U3CU3Ec__DisplayClass82_0_1_t4A8B1D5D7CE31242EC31E4D9EE27BDC3E98A1460* ___0_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m18A634F0CA1D9CEEF3A3D8DB6F0FD0F2F929EB02_gshared_inline (Action_3_t69C2D45C6C197D4070F949BFDCB7405529C4DA29* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* GenericWriter_1_get_Write_m8FAF6FDBB69403902FF46DB764C995B8849C80CC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C (Type_t* ___0_type, int32_t* ___1_packType, const RuntimeMethod* method) ;
inline Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* GenericWriter_1_get_WriteAutoPack_m8B20E3E688F7B0C15067D3265B02C983CEC1CD2A_inline (const RuntimeMethod* method)
{
	return ((  Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_m8B20E3E688F7B0C15067D3265B02C983CEC1CD2A_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisStructy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF_m28D43D9008438899C04D319CF28C348781E39B5E (U3CU3Ec__DisplayClass82_0_1_tE75B2B820E232384F8F1A7692EDF8DAE9C150F94* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_tE75B2B820E232384F8F1A7692EDF8DAE9C150F94*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisStructy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF_m28D43D9008438899C04D319CF28C348781E39B5E_gshared)(___0_p, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4 (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
inline void Action_3_Invoke_mA5590FDF8E1CC0AA208AE154C9FE0210F1F095DF_inline (Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF, int32_t, const RuntimeMethod*))Action_3_Invoke_mE32D8C4D551EA0F88A03A3267A0253C73AC84413_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* GenericWriter_1_get_Write_mF18C30C55853E1E857852C3714644EF94AB0D768_inline (const RuntimeMethod* method)
{
	return ((  Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_mF18C30C55853E1E857852C3714644EF94AB0D768_gshared_inline)(method);
}
inline void Action_2_Invoke_m3D8AB499EA89DB1CC9C683578C760C84D3AC9F62_inline (Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF, const RuntimeMethod*))Action_2_Invoke_m7665C89484D7D19435EDA534C917DDE0458E65C8_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* GenericWriter_1_get_WriteAutoPack_m8266AB18152122D9E49394CC54C63EFA0A64E07D_inline (const RuntimeMethod* method)
{
	return ((  Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_m8266AB18152122D9E49394CC54C63EFA0A64E07D_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisUnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99_m4C187A515EA09459405708D3083826B5EE291D1A (U3CU3Ec__DisplayClass82_0_1_t21AB0A796FBFB58DBD2CF42A945F37A250A72305* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t21AB0A796FBFB58DBD2CF42A945F37A250A72305*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisUnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99_m4C187A515EA09459405708D3083826B5EE291D1A_gshared)(___0_p, method);
}
inline void Action_3_Invoke_m38BD087662060A085B53E431FA28980E4AD8220C_inline (Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99, int32_t, const RuntimeMethod*))Action_3_Invoke_m315D9531FB32934C020F53D96CEC5B51E81DF759_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* GenericWriter_1_get_Write_m4CDD00AAB9190F1F6D78D3D979DA8945A0EC7A4D_inline (const RuntimeMethod* method)
{
	return ((  Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_m4CDD00AAB9190F1F6D78D3D979DA8945A0EC7A4D_gshared_inline)(method);
}
inline void Action_2_Invoke_m6B019EA21087FD70676221E80D0FF1FDB1CD77AA_inline (Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99, const RuntimeMethod*))Action_2_Invoke_mA1B55ABBF6C3B5C69231D998CC81BD0467371DB4_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* GenericWriter_1_get_WriteAutoPack_m124CAAA2D49DF6207EBFE14F25F3A418EBDC7533_inline (const RuntimeMethod* method)
{
	return ((  Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_m124CAAA2D49DF6207EBFE14F25F3A418EBDC7533_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2950C23AD92577B7BF7C7F47FCD1EF96284C6942 (U3CU3Ec__DisplayClass82_0_1_t491229AEF7906C93495A3F5F982E05939D4A60F4* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t491229AEF7906C93495A3F5F982E05939D4A60F4*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2950C23AD92577B7BF7C7F47FCD1EF96284C6942_gshared)(___0_p, method);
}
inline void Action_3_Invoke_m15747D487CB81AB56861AC6CCF16C6823C60A154_inline (Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*))Action_3_Invoke_m0DB7DDF77070882CA97D7CDB85A9A3E0770D5D8E_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* GenericWriter_1_get_Write_m044FDB6DA90E22017AB9BE24A438DD8E7B2DACBE_inline (const RuntimeMethod* method)
{
	return ((  Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_m044FDB6DA90E22017AB9BE24A438DD8E7B2DACBE_gshared_inline)(method);
}
inline void Action_2_Invoke_mF2DD8DD408814613FFC66782DA67C4684C14B43B_inline (Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Action_2_Invoke_m2D4B90EDAB2F9C3DBBC875445EA6142EFB512032_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* GenericWriter_1_get_WriteAutoPack_mD4D513487818C65E2996BB0E7AC306FB5DBB562B_inline (const RuntimeMethod* method)
{
	return ((  Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_mD4D513487818C65E2996BB0E7AC306FB5DBB562B_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m27F845F582F1513955666227360D3D1B4B757795 (U3CU3Ec__DisplayClass82_0_1_t8113C10ED39CE767984FB1023A0E529C24BF1154* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t8113C10ED39CE767984FB1023A0E529C24BF1154*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m27F845F582F1513955666227360D3D1B4B757795_gshared)(___0_p, method);
}
inline void Action_3_Invoke_mBE2EE95D368C8479ADC40E4080FB8EB6C9EDB8AC_inline (Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, int32_t, const RuntimeMethod*))Action_3_Invoke_m4D7EF94236FB1D5AE4F798E776C62ACC92C90FF9_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* GenericWriter_1_get_Write_m8F3B7E01CBA23226EDE73E4B9169D04A45B107A8_inline (const RuntimeMethod* method)
{
	return ((  Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_m8F3B7E01CBA23226EDE73E4B9169D04A45B107A8_gshared_inline)(method);
}
inline void Action_2_Invoke_mC1930706420263EB2ECBD48D87398ADD4AFFA3FD_inline (Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, const RuntimeMethod*))Action_2_Invoke_m1BD8B662FCB8C1E420D2E5FA04FAB602764FAC57_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* GenericWriter_1_get_WriteAutoPack_mC52AC8DE8CF429C24A5F8B79C95C80A55CA399BF_inline (const RuntimeMethod* method)
{
	return ((  Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_mC52AC8DE8CF429C24A5F8B79C95C80A55CA399BF_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E_m47C2053816BFE1DCFD2E74DFC0DCDB728E864556 (U3CU3Ec__DisplayClass82_0_1_tF2AEE9C902203D136EE111EA15E4A310DB558BFE* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_tF2AEE9C902203D136EE111EA15E4A310DB558BFE*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E_m47C2053816BFE1DCFD2E74DFC0DCDB728E864556_gshared)(___0_p, method);
}
inline void Action_3_Invoke_m1E836AD9AFED61886A128DA3BCFAD6AA9D201D63_inline (Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E, int32_t, const RuntimeMethod*))Action_3_Invoke_m8AFAE94FFB4B1B682AED4014EB2F808E0B3A0524_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* GenericWriter_1_get_Write_mCA3A7505AEAB91F91B387145D19DC738450BB3FE_inline (const RuntimeMethod* method)
{
	return ((  Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_mCA3A7505AEAB91F91B387145D19DC738450BB3FE_gshared_inline)(method);
}
inline void Action_2_Invoke_mC6E16F8EE65FDB83D424FC75E9D7E04B28DE9DCC_inline (Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E, const RuntimeMethod*))Action_2_Invoke_mDD7A8E2327FAE5F8C946627C6245C5A7D40B55BA_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* GenericWriter_1_get_WriteAutoPack_m9B2FBC9D54A6130AB2980F481F7372F471A8BF75_inline (const RuntimeMethod* method)
{
	return ((  Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_m9B2FBC9D54A6130AB2980F481F7372F471A8BF75_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mB4775B73D4D7C21EDC40AEBDFFCE69B1697FED10 (U3CU3Ec__DisplayClass82_0_1_t6AAA9341B2933C31CF18D487D16219917A1F3597* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t6AAA9341B2933C31CF18D487D16219917A1F3597*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mB4775B73D4D7C21EDC40AEBDFFCE69B1697FED10_gshared)(___0_p, method);
}
inline void Action_3_Invoke_m9FC48C3251FE138487533232729C74FC617E1518_inline (Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, int32_t, const RuntimeMethod*))Action_3_Invoke_m8B9FB620E50717913B0A3B3F9B43185FBDC119ED_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* GenericWriter_1_get_Write_m0A28F475596EA92A55509356EE694412BA8526BA_inline (const RuntimeMethod* method)
{
	return ((  Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_m0A28F475596EA92A55509356EE694412BA8526BA_gshared_inline)(method);
}
inline void Action_2_Invoke_m75BA4D0ED566BD605E88D81B50C3D84A82F23BB3_inline (Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA39C087131EF098F027F705849BBD38F514ECA50*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, const RuntimeMethod*))Action_2_Invoke_mB0EF01C116D9523B6A7ADADB18214A896CC0934D_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* GenericWriter_1_get_WriteAutoPack_m3B850B64815690B5BA2F785B84896CFFA9F4DC4C_inline (const RuntimeMethod* method)
{
	return ((  Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_m3B850B64815690B5BA2F785B84896CFFA9F4DC4C_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00_m14A01CDB4C99A79F979BEE990BC7A50458015AAB (U3CU3Ec__DisplayClass82_0_1_t79FC95E469DFCC39F2D5797D225D91E9879AD3DD* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t79FC95E469DFCC39F2D5797D225D91E9879AD3DD*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00_m14A01CDB4C99A79F979BEE990BC7A50458015AAB_gshared)(___0_p, method);
}
inline void Action_3_Invoke_m699B9603E8B058F2EC818AEB062D082FC6A50943_inline (Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00, int32_t, const RuntimeMethod*))Action_3_Invoke_mF635D512DC184B8DBA117B9EAB7303E992DE0BE6_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* GenericWriter_1_get_Write_m0B79255D3F6F23C16615A8D5653FAC038F4D1A98_inline (const RuntimeMethod* method)
{
	return ((  Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_m0B79255D3F6F23C16615A8D5653FAC038F4D1A98_gshared_inline)(method);
}
inline void Action_2_Invoke_m389C1B88AF116A895BAA259CF6E381583E2617AD_inline (Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00, const RuntimeMethod*))Action_2_Invoke_mF3C597AC95C1BCE14ABB5953103DE1C855ED688F_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* GenericWriter_1_get_WriteAutoPack_mA07C3E96060A68F238A85535AF1A76E502E579CA_inline (const RuntimeMethod* method)
{
	return ((  Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_mA07C3E96060A68F238A85535AF1A76E502E579CA_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mD537498A06501E6453EA46B2C28061FABA0D011E (U3CU3Ec__DisplayClass82_0_1_tFB050F6CB7FFF7C1D9403B85D8E602BA5FFDE515* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_tFB050F6CB7FFF7C1D9403B85D8E602BA5FFDE515*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mD537498A06501E6453EA46B2C28061FABA0D011E_gshared)(___0_p, method);
}
inline void Action_3_Invoke_mB62715D4D51C31376BF255A2778240F7F8D6229C_inline (Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, int32_t, const RuntimeMethod*))Action_3_Invoke_m5E69F41A2D869DB329CDA5B74F1AEF397EE8AC08_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* GenericWriter_1_get_Write_m8AC513EB616F0933E637DA872DA2ABC4516C4D76_inline (const RuntimeMethod* method)
{
	return ((  Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_m8AC513EB616F0933E637DA872DA2ABC4516C4D76_gshared_inline)(method);
}
inline void Action_2_Invoke_mA74FCE8D7BE9AA471333B1AFC7682F111B02DD2A_inline (Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, const RuntimeMethod*))Action_2_Invoke_m4E1C42A4140AB1D374643E4D69E962322A92E304_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* GenericWriter_1_get_WriteAutoPack_mABF88440A2023EF331EA2AB432E809E74F4CD060_inline (const RuntimeMethod* method)
{
	return ((  Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_mABF88440A2023EF331EA2AB432E809E74F4CD060_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92_m46552B2A8388510EEB73311A2AAFB35415D93BD0 (U3CU3Ec__DisplayClass82_0_1_tBB91763D614F3B42E732F6598121169EF0D64FF4* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_tBB91763D614F3B42E732F6598121169EF0D64FF4*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92_m46552B2A8388510EEB73311A2AAFB35415D93BD0_gshared)(___0_p, method);
}
inline void Action_3_Invoke_mA96EB1CE3D1445A3A7A3E1364594A702B16F3ECC_inline (Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92, int32_t, const RuntimeMethod*))Action_3_Invoke_m363AB5AAB0D4C61AF091032C9662C8A0B8E657BF_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* GenericWriter_1_get_Write_m71F380B18ADA80DEC6A9ADB1C0BBC4BFC8315BE9_inline (const RuntimeMethod* method)
{
	return ((  Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_m71F380B18ADA80DEC6A9ADB1C0BBC4BFC8315BE9_gshared_inline)(method);
}
inline void Action_2_Invoke_mFCBA433E924D2D9B8A0B3C0BD66E80A0C9C289B2_inline (Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92, const RuntimeMethod*))Action_2_Invoke_mCBAE2606C20FA05CD4033830FE3C68E87E3789AF_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void Writer_WriteArray_TisRuntimeObject_mE0E77DE528EA3904C48458F4A4B240002F091AE0_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))Writer_WriteArray_TisRuntimeObject_mE0E77DE528EA3904C48458F4A4B240002F091AE0_gshared_inline)(__this, ___0_value, ___1_offset, ___2_count, method);
}
inline void Writer_WriteArray_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_mB0B25C36F7F523E75D5E773613134C501CC984A9_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B*, int32_t, int32_t, const RuntimeMethod*))Writer_WriteArray_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_mB0B25C36F7F523E75D5E773613134C501CC984A9_gshared_inline)(__this, ___0_value, ___1_offset, ___2_count, method);
}
inline void Writer_WriteArray_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m3D64A4056E5974B3C4A19C2813B93CE996F213D4_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF*, int32_t, int32_t, const RuntimeMethod*))Writer_WriteArray_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m3D64A4056E5974B3C4A19C2813B93CE996F213D4_gshared_inline)(__this, ___0_value, ___1_offset, ___2_count, method);
}
inline void Writer_WriteArray_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m25206A4685D69DB6C4C607AC04F85D463CCCC6FA_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E*, int32_t, int32_t, const RuntimeMethod*))Writer_WriteArray_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m25206A4685D69DB6C4C607AC04F85D463CCCC6FA_gshared_inline)(__this, ___0_value, ___1_offset, ___2_count, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, int32_t ___0_value, int32_t ___1_packType, const RuntimeMethod* method) ;
inline void Writer_Write_TisRuntimeObject_m4B9A5404192A51D674FFEFB9A5797390488AB2F2_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, RuntimeObject*, const RuntimeMethod*))Writer_Write_TisRuntimeObject_m4B9A5404192A51D674FFEFB9A5797390488AB2F2_gshared_inline)(__this, ___0_value, method);
}
inline void Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, const RuntimeMethod*))Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_gshared_inline)(__this, ___0_value, method);
}
inline void Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, const RuntimeMethod*))Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_gshared_inline)(__this, ___0_value, method);
}
inline void Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, const RuntimeMethod*))Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteBoolean_m817C7111AA3410A0C4C1C17FA98789A08D08B0D2_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, bool ___0_value, const RuntimeMethod* method) ;
inline void Writer_WriteList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7F1F5F6982C5082A62F284D90F644121EB750226_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))Writer_WriteList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7F1F5F6982C5082A62F284D90F644121EB750226_gshared_inline)(__this, ___0_value, ___1_offset, ___2_count, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
inline void Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A26364BE0CBB5580386932776C8EFBD121F6B3D_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, int32_t, const RuntimeMethod*))Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A26364BE0CBB5580386932776C8EFBD121F6B3D_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mAE8611944BD58213A1AC8A64CDCE9116B20DF815_inline (List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4*, const RuntimeMethod*))List_1_get_Count_mAE8611944BD58213A1AC8A64CDCE9116B20DF815_gshared_inline)(__this, method);
}
inline Func_3_t034981816E97D7D05569C188B3229941BC10EB32* GeneratedComparer_1_get_Compare_mD39BF9529FF52BF479C5D7EF3B223E7CAD0830B2_inline (const RuntimeMethod* method)
{
	return ((  Func_3_t034981816E97D7D05569C188B3229941BC10EB32* (*) (const RuntimeMethod*))GeneratedComparer_1_get_Compare_mD39BF9529FF52BF479C5D7EF3B223E7CAD0830B2_gshared_inline)(method);
}
inline Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* GeneratedComparer_1_get_IsDefault_m1FD722F0721A4C197640EBA973A7384D0C797DB3_inline (const RuntimeMethod* method)
{
	return ((  Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* (*) (const RuntimeMethod*))GeneratedComparer_1_get_IsDefault_m1FD722F0721A4C197640EBA973A7384D0C797DB3_gshared_inline)(method);
}
inline MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF List_1_get_Item_m2856E1C8192F4C98921A28161C072DA186599A61 (List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF (*) (List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4*, int32_t, const RuntimeMethod*))List_1_get_Item_m2856E1C8192F4C98921A28161C072DA186599A61_gshared)(__this, ___0_index, method);
}
inline bool Func_2_Invoke_mEC31A1FAC87C5941D279B2E56A8E93111251971E_inline (Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, const RuntimeMethod*))Func_2_Invoke_mEC31A1FAC87C5941D279B2E56A8E93111251971E_gshared_inline)(__this, ___0_arg, method);
}
inline bool Func_3_Invoke_mFE3FE260CDDADAFA42A2A36325A266D1A06C25D5_inline (Func_3_t034981816E97D7D05569C188B3229941BC10EB32* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t034981816E97D7D05569C188B3229941BC10EB32*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, const RuntimeMethod*))Func_3_Invoke_mFE3FE260CDDADAFA42A2A36325A266D1A06C25D5_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int32_t List_1_get_Count_mAB5412E86AE151DA2816A5BE39C8ED9536F18DEA_inline (List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F*, const RuntimeMethod*))List_1_get_Count_mAB5412E86AE151DA2816A5BE39C8ED9536F18DEA_gshared_inline)(__this, method);
}
inline Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* GeneratedComparer_1_get_Compare_m6139CC727FCEB9CA92362B870474CB727B4149C7_inline (const RuntimeMethod* method)
{
	return ((  Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* (*) (const RuntimeMethod*))GeneratedComparer_1_get_Compare_m6139CC727FCEB9CA92362B870474CB727B4149C7_gshared_inline)(method);
}
inline Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* GeneratedComparer_1_get_IsDefault_m49630871A467E37723F9047E1B74452EA0624300_inline (const RuntimeMethod* method)
{
	return ((  Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* (*) (const RuntimeMethod*))GeneratedComparer_1_get_IsDefault_m49630871A467E37723F9047E1B74452EA0624300_gshared_inline)(method);
}
inline MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C List_1_get_Item_m2A61A0E74EA6C562DE33A2FBD1CD31380612BCB0 (List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C (*) (List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F*, int32_t, const RuntimeMethod*))List_1_get_Item_m2A61A0E74EA6C562DE33A2FBD1CD31380612BCB0_gshared)(__this, ___0_index, method);
}
inline bool Func_2_Invoke_mA1634CED91C0529D40733438A7F732E4F65837CF_inline (Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, const RuntimeMethod*))Func_2_Invoke_mA1634CED91C0529D40733438A7F732E4F65837CF_gshared_inline)(__this, ___0_arg, method);
}
inline bool Func_3_Invoke_mB384F8CE56A3AAEF6584213D7D5A357609931BFE_inline (Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, const RuntimeMethod*))Func_3_Invoke_mB384F8CE56A3AAEF6584213D7D5A357609931BFE_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int32_t List_1_get_Count_m7CC7E1A36E6D648E9E16E63ABA8DAF754EA58477_inline (List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373*, const RuntimeMethod*))List_1_get_Count_m7CC7E1A36E6D648E9E16E63ABA8DAF754EA58477_gshared_inline)(__this, method);
}
inline Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* GeneratedComparer_1_get_Compare_m5D1AEF9AB68C975730C2DEA8750E0390CE924F2B_inline (const RuntimeMethod* method)
{
	return ((  Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* (*) (const RuntimeMethod*))GeneratedComparer_1_get_Compare_m5D1AEF9AB68C975730C2DEA8750E0390CE924F2B_gshared_inline)(method);
}
inline Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* GeneratedComparer_1_get_IsDefault_m7B8DBEB19EBEC9A46680374BF72492962774450A_inline (const RuntimeMethod* method)
{
	return ((  Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* (*) (const RuntimeMethod*))GeneratedComparer_1_get_IsDefault_m7B8DBEB19EBEC9A46680374BF72492962774450A_gshared_inline)(method);
}
inline MoveData_t753DE366344980726A0DE776C583226ADF9B8364 List_1_get_Item_mB48781AC7271230047505791AFD9A83B12494E7B (List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MoveData_t753DE366344980726A0DE776C583226ADF9B8364 (*) (List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373*, int32_t, const RuntimeMethod*))List_1_get_Item_mB48781AC7271230047505791AFD9A83B12494E7B_gshared)(__this, ___0_index, method);
}
inline bool Func_2_Invoke_mE5F1736D3C7B664BE975ACC9EE78C63E4D9012D9_inline (Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, const RuntimeMethod*))Func_2_Invoke_mE5F1736D3C7B664BE975ACC9EE78C63E4D9012D9_gshared_inline)(__this, ___0_arg, method);
}
inline bool Func_3_Invoke_m0E5E2EA8CD8CC720DBCEA4719C9E3CE327C285CE_inline (Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, const RuntimeMethod*))Func_3_Invoke_m0E5E2EA8CD8CC720DBCEA4719C9E3CE327C285CE_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, double*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uint64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA (int32_t ___0_phase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline int32_t InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_value, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline int32_t InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared)(__this, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared)(__this, method);
}
inline float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, float ___1_value, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, float, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared)(__this, method);
}
inline void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared)((CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_str, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_interaction, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_processor, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868 (Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5* __this, Type_t* ___0_layoutType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_m4FAD0C920C5F78242F300DAA320C32196FCA4CC5 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_m43958B0E5766DDEB56087E4271512A5A97B30AA6 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391 (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared)((ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) ;
inline ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 (*) (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*, RuntimeObject*, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline)(__this, ___0_processor, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
inline void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared)((Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*)__this, il2cppRetVal, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Writer_ZigZagEncode_mA91A7B874D71BC4BECFFF783D84A29B0336C273A (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WritePackedWhole_m38C94586EB23F531727FA068F01AC2CE817456C4_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteUInt32_mDAF20969906045C6567ECA06622A8A24BF5DA07A_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, uint32_t ___0_value, int32_t ___1_packType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* GenericWriter_1_get_WriteAutoPack_mCAA6CAAC1AB12D88FF651F26885F35FBD255354C_inline (const RuntimeMethod* method)
{
	return ((  Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_mCAA6CAAC1AB12D88FF651F26885F35FBD255354C_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisRuntimeObject_m3E26ED96A92AF7DF3F617552D02EC7EBAE805D49 (U3CU3Ec__DisplayClass82_0_1_t58A6F8DAAECF3E414E9D54EFD8EF6E47F2E11FFA* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t58A6F8DAAECF3E414E9D54EFD8EF6E47F2E11FFA*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisRuntimeObject_m3E26ED96A92AF7DF3F617552D02EC7EBAE805D49_gshared)(___0_p, method);
}
inline void Action_3_Invoke_m481F439D06E84B3D18725503107D83783B5D24AC_inline (Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, RuntimeObject*, int32_t, const RuntimeMethod*))Action_3_Invoke_m34CDA3BC94B7F84C0679193E385E45BCAAC6509E_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* GenericWriter_1_get_Write_mF4969C87016962534ED7B4298A49E7C974BD1D2D_inline (const RuntimeMethod* method)
{
	return ((  Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_mF4969C87016962534ED7B4298A49E7C974BD1D2D_gshared_inline)(method);
}
inline void Action_2_Invoke_mCBBC528171E456D3D14F2893E73BCA82215C3103_inline (Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t02F825E5836331E5028F466633AC99D6659AB01E*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, RuntimeObject*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* GenericWriter_1_get_WriteAutoPack_m75A044506CA9CD50CEC639333A3738BF2CC69A58_inline (const RuntimeMethod* method)
{
	return ((  Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* (*) (const RuntimeMethod*))GenericWriter_1_get_WriteAutoPack_m75A044506CA9CD50CEC639333A3738BF2CC69A58_gshared_inline)(method);
}
inline String_t* Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17E7493BC38A0257563CFB0D03D4E46D9F33AC29 (U3CU3Ec__DisplayClass82_0_1_t4A8B1D5D7CE31242EC31E4D9EE27BDC3E98A1460* ___0_p, const RuntimeMethod* method)
{
	return ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t4A8B1D5D7CE31242EC31E4D9EE27BDC3E98A1460*, const RuntimeMethod*))Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17E7493BC38A0257563CFB0D03D4E46D9F33AC29_gshared)(___0_p, method);
}
inline void Action_3_Invoke_mA46224A2F7AD3E62E3B89CD7251171EC811B8235_inline (Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, int32_t, int32_t, const RuntimeMethod*))Action_3_Invoke_m18A634F0CA1D9CEEF3A3D8DB6F0FD0F2F929EB02_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
inline Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* GenericWriter_1_get_Write_m8FAF6FDBB69403902FF46DB764C995B8849C80CC_inline (const RuntimeMethod* method)
{
	return ((  Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* (*) (const RuntimeMethod*))GenericWriter_1_get_Write_m8FAF6FDBB69403902FF46DB764C995B8849C80CC_gshared_inline)(method);
}
inline void Action_2_Invoke_m34F7A820B67C2386E92FA7A38D53050ABB6E6A96_inline (Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* __this, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE*, Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, int32_t, const RuntimeMethod*))Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterExtensions_WriteUInt32_m8E0B48B914E870668BDDC1974C9C77D765559BD5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dst, uint32_t ___1_value, int32_t* ___2_position, const RuntimeMethod* method) ;
inline void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, int32_t, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_gshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisStructy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF_m3D537943985A12A92E80DA248AE1D36AE74117A6_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_tE75B2B820E232384F8F1A7692EDF8DAE9C150F94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* V_3 = NULL;
	bool V_4 = false;
	Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_tE75B2B820E232384F8F1A7692EDF8DAE9C150F94 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_m8B20E3E688F7B0C15067D3265B02C983CEC1CD2A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisStructy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF_m28D43D9008438899C04D319CF28C348781E39B5E((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* L_10 = V_3;
		Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_mA5590FDF8E1CC0AA208AE154C9FE0210F1F095DF_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* L_13;
		L_13 = GenericWriter_1_get_Write_mF18C30C55853E1E857852C3714644EF94AB0D768_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisStructy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF_m28D43D9008438899C04D319CF28C348781E39B5E((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* L_17 = V_5;
		Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_m3D8AB499EA89DB1CC9C683578C760C84D3AC9F62_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisUnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99_m7991D931A761362532FF94F86766219DC64CB020_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t21AB0A796FBFB58DBD2CF42A945F37A250A72305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* V_3 = NULL;
	bool V_4 = false;
	Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t21AB0A796FBFB58DBD2CF42A945F37A250A72305 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_m8266AB18152122D9E49394CC54C63EFA0A64E07D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisUnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99_m4C187A515EA09459405708D3083826B5EE291D1A((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* L_10 = V_3;
		UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_m38BD087662060A085B53E431FA28980E4AD8220C_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* L_13;
		L_13 = GenericWriter_1_get_Write_m4CDD00AAB9190F1F6D78D3D979DA8945A0EC7A4D_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisUnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99_m4C187A515EA09459405708D3083826B5EE291D1A((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* L_17 = V_5;
		UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_m6B019EA21087FD70676221E80D0FF1FDB1CD77AA_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD0979A8CE88D26516FA0D2A262FC8D2B647DAFE9_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t491229AEF7906C93495A3F5F982E05939D4A60F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* V_3 = NULL;
	bool V_4 = false;
	Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t491229AEF7906C93495A3F5F982E05939D4A60F4 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_m124CAAA2D49DF6207EBFE14F25F3A418EBDC7533_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2950C23AD92577B7BF7C7F47FCD1EF96284C6942((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* L_10 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_m15747D487CB81AB56861AC6CCF16C6823C60A154_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* L_13;
		L_13 = GenericWriter_1_get_Write_m044FDB6DA90E22017AB9BE24A438DD8E7B2DACBE_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m2950C23AD92577B7BF7C7F47FCD1EF96284C6942((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* L_17 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_mF2DD8DD408814613FFC66782DA67C4684C14B43B_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericAny_m28E843BA70894876C8ECA716B3B21A8E375AEFC9_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t0230B09E05DA786B2FB4F035CA0C8A891FD382CF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t0230B09E05DA786B2FB4F035CA0C8A891FD382CF);
	const Il2CppFullySharedGenericAny L_18 = L_11;
	U3CU3Ec__DisplayClass82_0_1_t7ADAF3D59549F8661215EF1D986EFF625672CE25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_t9B559A016FED91C9859DAC4BB8FAD6358BFDF510* V_3 = NULL;
	bool V_4 = false;
	Action_2_tBB7AE098C59A2805EB3A6B985200634BD5D051F0* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t7ADAF3D59549F8661215EF1D986EFF625672CE25 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_t9B559A016FED91C9859DAC4BB8FAD6358BFDF510* L_6;
		L_6 = ((  Action_3_t9B559A016FED91C9859DAC4BB8FAD6358BFDF510* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_t9B559A016FED91C9859DAC4BB8FAD6358BFDF510* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_t9B559A016FED91C9859DAC4BB8FAD6358BFDF510*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t7ADAF3D59549F8661215EF1D986EFF625672CE25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_t9B559A016FED91C9859DAC4BB8FAD6358BFDF510* L_10 = V_3;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_T_t0230B09E05DA786B2FB4F035CA0C8A891FD382CF);
		int32_t L_12 = V_1;
		NullCheck(L_10);
		InvokerActionInvoker3< Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_10, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_11: *(void**)L_11), L_12);
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_tBB7AE098C59A2805EB3A6B985200634BD5D051F0* L_13;
		L_13 = ((  Action_2_tBB7AE098C59A2805EB3A6B985200634BD5D051F0* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_tBB7AE098C59A2805EB3A6B985200634BD5D051F0* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_tBB7AE098C59A2805EB3A6B985200634BD5D051F0*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = ((  String_t* (*) (U3CU3Ec__DisplayClass82_0_1_t7ADAF3D59549F8661215EF1D986EFF625672CE25*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_tBB7AE098C59A2805EB3A6B985200634BD5D051F0* L_17 = V_5;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_T_t0230B09E05DA786B2FB4F035CA0C8A891FD382CF);
		NullCheck(L_17);
		InvokerActionInvoker2< Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), L_17, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_18: *(void**)L_18));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t8113C10ED39CE767984FB1023A0E529C24BF1154 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* V_3 = NULL;
	bool V_4 = false;
	Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t8113C10ED39CE767984FB1023A0E529C24BF1154 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_mD4D513487818C65E2996BB0E7AC306FB5DBB562B_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m27F845F582F1513955666227360D3D1B4B757795((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* L_10 = V_3;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_mBE2EE95D368C8479ADC40E4080FB8EB6C9EDB8AC_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* L_13;
		L_13 = GenericWriter_1_get_Write_m8F3B7E01CBA23226EDE73E4B9169D04A45B107A8_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m27F845F582F1513955666227360D3D1B4B757795((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* L_17 = V_5;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_mC1930706420263EB2ECBD48D87398ADD4AFFA3FD_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E_mFBA2B646512EEBF6390F5BC7088B9C9BED7395FF_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_tF2AEE9C902203D136EE111EA15E4A310DB558BFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* V_3 = NULL;
	bool V_4 = false;
	Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_tF2AEE9C902203D136EE111EA15E4A310DB558BFE L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_mC52AC8DE8CF429C24A5F8B79C95C80A55CA399BF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E_m47C2053816BFE1DCFD2E74DFC0DCDB728E864556((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* L_10 = V_3;
		ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_m1E836AD9AFED61886A128DA3BCFAD6AA9D201D63_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* L_13;
		L_13 = GenericWriter_1_get_Write_mCA3A7505AEAB91F91B387145D19DC738450BB3FE_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E_m47C2053816BFE1DCFD2E74DFC0DCDB728E864556((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* L_17 = V_5;
		ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_mC6E16F8EE65FDB83D424FC75E9D7E04B28DE9DCC_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t6AAA9341B2933C31CF18D487D16219917A1F3597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* V_3 = NULL;
	bool V_4 = false;
	Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t6AAA9341B2933C31CF18D487D16219917A1F3597 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_m9B2FBC9D54A6130AB2980F481F7372F471A8BF75_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mB4775B73D4D7C21EDC40AEBDFFCE69B1697FED10((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* L_10 = V_3;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_m9FC48C3251FE138487533232729C74FC617E1518_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* L_13;
		L_13 = GenericWriter_1_get_Write_m0A28F475596EA92A55509356EE694412BA8526BA_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_tA39C087131EF098F027F705849BBD38F514ECA50*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mB4775B73D4D7C21EDC40AEBDFFCE69B1697FED10((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* L_17 = V_5;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_m75BA4D0ED566BD605E88D81B50C3D84A82F23BB3_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00_m55799FB73B8FCFAE9B0123B94A8042EE08C0384B_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t79FC95E469DFCC39F2D5797D225D91E9879AD3DD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* V_3 = NULL;
	bool V_4 = false;
	Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t79FC95E469DFCC39F2D5797D225D91E9879AD3DD L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_m3B850B64815690B5BA2F785B84896CFFA9F4DC4C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00_m14A01CDB4C99A79F979BEE990BC7A50458015AAB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* L_10 = V_3;
		ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_m699B9603E8B058F2EC818AEB062D082FC6A50943_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* L_13;
		L_13 = GenericWriter_1_get_Write_m0B79255D3F6F23C16615A8D5653FAC038F4D1A98_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00_m14A01CDB4C99A79F979BEE990BC7A50458015AAB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* L_17 = V_5;
		ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_m389C1B88AF116A895BAA259CF6E381583E2617AD_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_tFB050F6CB7FFF7C1D9403B85D8E602BA5FFDE515 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* V_3 = NULL;
	bool V_4 = false;
	Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_tFB050F6CB7FFF7C1D9403B85D8E602BA5FFDE515 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_mA07C3E96060A68F238A85535AF1A76E502E579CA_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mD537498A06501E6453EA46B2C28061FABA0D011E((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* L_10 = V_3;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_mB62715D4D51C31376BF255A2778240F7F8D6229C_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* L_13;
		L_13 = GenericWriter_1_get_Write_m8AC513EB616F0933E637DA872DA2ABC4516C4D76_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mD537498A06501E6453EA46B2C28061FABA0D011E((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* L_17 = V_5;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_mA74FCE8D7BE9AA471333B1AFC7682F111B02DD2A_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92_m4B2770004CD6260DDCE76F9E5439C0473A4D2CCA_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_tBB91763D614F3B42E732F6598121169EF0D64FF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* V_3 = NULL;
	bool V_4 = false;
	Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_tBB91763D614F3B42E732F6598121169EF0D64FF4 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_mABF88440A2023EF331EA2AB432E809E74F4CD060_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92_m46552B2A8388510EEB73311A2AAFB35415D93BD0((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* L_10 = V_3;
		ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_mA96EB1CE3D1445A3A7A3E1364594A702B16F3ECC_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* L_13;
		L_13 = GenericWriter_1_get_Write_m71F380B18ADA80DEC6A9ADB1C0BBC4BFC8315BE9_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92_m46552B2A8388510EEB73311A2AAFB35415D93BD0((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* L_17 = V_5;
		ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_mFCBA433E924D2D9B8A0B3C0BD66E80A0C9C289B2_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisRuntimeObject_mE287B50858F7640EA63433D81E5126C1DB9AC8BC_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Writer_WriteArray_TisRuntimeObject_mE0E77DE528EA3904C48458F4A4B240002F091AE0_inline(__this, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0021;
	}

IL_0015:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_value;
		NullCheck(L_3);
		Writer_WriteArray_TisRuntimeObject_mE0E77DE528EA3904C48458F4A4B240002F091AE0_inline(__this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisIl2CppFullySharedGenericAny_mCB4B22250455ABEC164A1EF4D5642CEE46130ED8_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0021;
	}

IL_0015:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_value;
		NullCheck(L_3);
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_mAF7520544102A5287F901FEA6F213F7D0655D5C4_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Writer_WriteArray_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_mB0B25C36F7F523E75D5E773613134C501CC984A9_inline(__this, (MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0021;
	}

IL_0015:
	{
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_2 = ___0_value;
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_3 = ___0_value;
		NullCheck(L_3);
		Writer_WriteArray_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_mB0B25C36F7F523E75D5E773613134C501CC984A9_inline(__this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mCAA54DD84BC3D52B4925126C8AC17CA7FAD24F42_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Writer_WriteArray_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m3D64A4056E5974B3C4A19C2813B93CE996F213D4_inline(__this, (MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0021;
	}

IL_0015:
	{
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_2 = ___0_value;
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_3 = ___0_value;
		NullCheck(L_3);
		Writer_WriteArray_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m3D64A4056E5974B3C4A19C2813B93CE996F213D4_inline(__this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mBA4C32398A2DA2AABEAA470EE9AA0145B9D1A063_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Writer_WriteArray_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m25206A4685D69DB6C4C607AC04F85D463CCCC6FA_inline(__this, (MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0021;
	}

IL_0015:
	{
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_2 = ___0_value;
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_3 = ___0_value;
		NullCheck(L_3);
		Writer_WriteArray_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m25206A4685D69DB6C4C607AC04F85D463CCCC6FA_inline(__this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisIl2CppFullySharedGenericAny_mF23E4E0DD8DC96C48CE3EC81C26CDEAA00AA0211_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_value, int32_t ___1_offset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0023;
	}

IL_0015:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_value;
		int32_t L_3 = ___1_offset;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_value;
		NullCheck(L_4);
		int32_t L_5 = ___1_offset;
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5)), il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisRuntimeObject_mE0E77DE528EA3904C48458F4A4B240002F091AE0_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Writer_Write_TisRuntimeObject_m4B9A5404192A51D674FFEFB9A5797390488AB2F2_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisIl2CppFullySharedGenericAny_mEE87479FA85145A5282B1CEE21D70A8B877F5577_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2FCBA243D1FDCECB32CAA8629387C213262300BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t2FCBA243D1FDCECB32CAA8629387C213262300BD);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t2FCBA243D1FDCECB32CAA8629387C213262300BD);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_11: *(void**)L_11));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_mB0B25C36F7F523E75D5E773613134C501CC984A9_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m3D64A4056E5974B3C4A19C2813B93CE996F213D4_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m25206A4685D69DB6C4C607AC04F85D463CCCC6FA_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m40A02F67FCE3CA776D837D5D22B73CD9BA6EBAAD_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dict, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_Enumerator_tA09AFA85369269E147B6822F71438A9164CBBE91 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const uint32_t SizeOf_KeyValuePair_2_tBA413E0D41DD44B64B05ECE52BFD8ADEAFCAB777 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const uint32_t SizeOf_TKey_t3BF4BE889AC31172C3B3B73DAF0DFD54D8283151 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_t3BF4BE889AC31172C3B3B73DAF0DFD54D8283151);
	const uint32_t SizeOf_TValue_tA2CC5AAF0CE06F37B5DB318127241052F0377C1D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tA2CC5AAF0CE06F37B5DB318127241052F0377C1D);
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_5 = alloca(SizeOf_Enumerator_tA09AFA85369269E147B6822F71438A9164CBBE91);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_7 = alloca(SizeOf_KeyValuePair_2_tBA413E0D41DD44B64B05ECE52BFD8ADEAFCAB777);
	bool V_0 = false;
	Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 V_1 = alloca(SizeOf_Enumerator_tA09AFA85369269E147B6822F71438A9164CBBE91);
	memset(V_1, 0, SizeOf_Enumerator_tA09AFA85369269E147B6822F71438A9164CBBE91);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_2 = alloca(SizeOf_KeyValuePair_2_tBA413E0D41DD44B64B05ECE52BFD8ADEAFCAB777);
	memset(V_2, 0, SizeOf_KeyValuePair_2_tBA413E0D41DD44B64B05ECE52BFD8ADEAFCAB777);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = ___0_dict;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Writer_WriteBoolean_m817C7111AA3410A0C4C1C17FA98789A08D08B0D2_inline(__this, (bool)1, NULL);
		goto IL_0076;
	}

IL_0014:
	{
		Writer_WriteBoolean_m817C7111AA3410A0C4C1C17FA98789A08D08B0D2_inline(__this, (bool)0, NULL);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_2 = ___0_dict;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_3, (int32_t)1, NULL);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_4 = ___0_dict;
		NullCheck(L_4);
		InvokerActionInvoker1< Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_Enumerator_tA09AFA85369269E147B6822F71438A9164CBBE91);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 13), L_6, (void*)(Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_1);
				return;
			}
		});
		try
		{
			{
				goto IL_005c_1;
			}

IL_0036_1:
			{
				InvokerActionInvoker1< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_1, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_7);
				il2cpp_codegen_memcpy(V_2, L_7, SizeOf_KeyValuePair_2_tBA413E0D41DD44B64B05ECE52BFD8ADEAFCAB777);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_8);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 7)) ? L_8: *(void**)L_8));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_2, (Il2CppFullySharedGenericAny*)L_9);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 10)) ? L_9: *(void**)L_9));
			}

IL_005c_1:
			{
				bool L_10;
				L_10 = ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_1, il2cpp_rgctx_method(method->rgctx_data, 12));
				if (L_10)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_0076;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA93D7F7ECBF00C76E242FA3AA0348D116D8F23C7_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Writer_WriteList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7F1F5F6982C5082A62F284D90F644121EB750226_inline(__this, (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0024;
	}

IL_0015:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___0_value;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = ___0_value;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		Writer_WriteList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7F1F5F6982C5082A62F284D90F644121EB750226_inline(__this, L_2, 0, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0024:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteList_TisIl2CppFullySharedGenericAny_m2D51045AA65EE1260FE73B7505482CA0CDAD90D8_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0024;
	}

IL_0015:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_value;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = ___0_value;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_2, 0, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0024:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteList_TisIl2CppFullySharedGenericAny_m82EFEA80C4043CD597B3DCBB3FA6857DC8A378A1_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_value, int32_t ___1_offset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL, 0, 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		goto IL_0026;
	}

IL_0015:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_value;
		int32_t L_3 = ___1_offset;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = ___0_value;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = ___1_offset;
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_2, L_3, ((int32_t)il2cpp_codegen_subtract(L_5, L_6)), il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0026:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7F1F5F6982C5082A62F284D90F644121EB750226_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0053;
	}

IL_0016:
	{
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = ___0_value;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		___2_count = 0;
	}

IL_0029:
	{
		int32_t L_7 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_7, (int32_t)1, NULL);
		V_2 = 0;
		goto IL_004a;
	}

IL_0036:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = ___0_value;
		int32_t L_9 = V_2;
		int32_t L_10 = ___1_offset;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_8, ((int32_t)il2cpp_codegen_add(L_9, L_10)), il2cpp_rgctx_method(method->rgctx_data, 2));
		Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A26364BE0CBB5580386932776C8EFBD121F6B3D_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004a:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0036;
		}
	}
	{
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteList_TisIl2CppFullySharedGenericAny_mF304D92404514B52DF3928DA674BD7869AA8176B_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4D3D772A2F3A41B05A0CA00D1E509EAB57989390 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t4D3D772A2F3A41B05A0CA00D1E509EAB57989390);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0053;
	}

IL_0016:
	{
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = ___0_value;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		___2_count = 0;
	}

IL_0029:
	{
		int32_t L_7 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_7, (int32_t)1, NULL);
		V_2 = 0;
		goto IL_004a;
	}

IL_0036:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8 = ___0_value;
		int32_t L_9 = V_2;
		int32_t L_10 = ___1_offset;
		NullCheck(L_8);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, ((int32_t)il2cpp_codegen_add(L_9, L_10)), (Il2CppFullySharedGenericAny*)L_11);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004a:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0036;
		}
	}
	{
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteListCache_TisIl2CppFullySharedGenericAny_m71420DF58BE3089D2D6B55B902A1A1F0CA108520_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ListCache_1_tEF4AA4BB6AB6DF0984AE1DF5AF78CF1858C24A3C* ___0_lc, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ListCache_1_tEF4AA4BB6AB6DF0984AE1DF5AF78CF1858C24A3C* L_0 = ___0_lc;
		NullCheck(L_0);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = L_0->___Collection;
		((  void (*) (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteReplicate_TisIl2CppFullySharedGenericAny_mE064A0BAD4620E2B1C508082EB5C1808DAA59CC2_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, int32_t ___1_offset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	const Il2CppFullySharedGenericAny L_26 = L_17;
	const Il2CppFullySharedGenericAny L_48 = L_17;
	const Il2CppFullySharedGenericAny L_52 = L_17;
	const Il2CppFullySharedGenericAny L_59 = L_17;
	const Il2CppFullySharedGenericAny L_64 = L_17;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	const Il2CppFullySharedGenericAny L_29 = L_19;
	const Il2CppFullySharedGenericAny L_54 = L_19;
	const Il2CppFullySharedGenericAny L_60 = L_19;
	const Il2CppFullySharedGenericAny L_65 = L_19;
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* V_2 = NULL;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* V_3 = NULL;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	memset(V_4, 0, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Il2CppFullySharedGenericAny V_10 = alloca(SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	memset(V_10, 0, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	Il2CppFullySharedGenericAny V_21 = alloca(SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	memset(V_21, 0, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_values;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___1_offset;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)));
		uint8_t L_4 = V_1;
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, L_4, NULL);
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_5;
		L_5 = ((  Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_5;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6;
		L_6 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_6;
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_7 = V_2;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = V_3;
		G_B3_0 = ((((RuntimeObject*)(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_8 = (bool)G_B3_0;
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_11);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E, L_12, NULL);
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_13, NULL);
		goto IL_0191;
	}

IL_0057:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		V_5 = (uint8_t)0;
		V_6 = (bool)1;
		V_7 = (bool)1;
		int32_t L_14 = ___1_offset;
		V_9 = L_14;
		goto IL_00c5;
	}

IL_006d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_15 = ___0_values;
		int32_t L_16 = V_9;
		NullCheck(L_15);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), L_15, L_16, (Il2CppFullySharedGenericAny*)L_17);
		il2cpp_codegen_memcpy(V_10, L_17, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_18 = V_3;
		il2cpp_codegen_memcpy(L_19, V_10, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		NullCheck(L_18);
		bool L_20;
		L_20 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_19: *(void**)L_19));
		V_11 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		V_7 = (bool)0;
	}

IL_008c:
	{
		int32_t L_22 = V_9;
		int32_t L_23 = ___1_offset;
		V_12 = (bool)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_25 = V_2;
		il2cpp_codegen_memcpy(L_26, V_10, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_27 = ___0_values;
		int32_t L_28 = V_9;
		NullCheck(L_27);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), L_27, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), (Il2CppFullySharedGenericAny*)L_29);
		NullCheck(L_25);
		bool L_30;
		L_30 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_26: *(void**)L_26), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_29: *(void**)L_29));
		V_13 = L_30;
		bool L_31 = V_13;
		V_14 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_14;
		if (!L_32)
		{
			goto IL_00bd;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00d0;
	}

IL_00bd:
	{
	}

IL_00be:
	{
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c5:
	{
		int32_t L_34 = V_9;
		int32_t L_35 = V_0;
		V_15 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_15;
		if (L_36)
		{
			goto IL_006d;
		}
	}

IL_00d0:
	{
		bool L_37 = V_7;
		V_16 = L_37;
		bool L_38 = V_16;
		if (!L_38)
		{
			goto IL_00dd;
		}
	}
	{
		V_5 = (uint8_t)4;
		goto IL_00e8;
	}

IL_00dd:
	{
		bool L_39 = V_6;
		V_17 = L_39;
		bool L_40 = V_17;
		if (!L_40)
		{
			goto IL_00e8;
		}
	}
	{
		V_5 = (uint8_t)3;
	}

IL_00e8:
	{
		uint8_t L_41 = V_5;
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, L_41, NULL);
		bool L_42 = V_6;
		V_18 = L_42;
		bool L_43 = V_18;
		if (!L_43)
		{
			goto IL_0116;
		}
	}
	{
		bool L_44 = V_7;
		V_19 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_46 = ___0_values;
		int32_t L_47 = ___1_offset;
		NullCheck(L_46);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), L_46, L_47, (Il2CppFullySharedGenericAny*)L_48);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)), il2cpp_rgctx_method(method->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_48: *(void**)L_48));
	}

IL_0113:
	{
		goto IL_0191;
	}

IL_0116:
	{
		int32_t L_49 = ___1_offset;
		V_20 = L_49;
		goto IL_0185;
	}

IL_011c:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_50 = ___0_values;
		int32_t L_51 = V_20;
		NullCheck(L_50);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), L_50, L_51, (Il2CppFullySharedGenericAny*)L_52);
		il2cpp_codegen_memcpy(V_21, L_52, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_53 = V_3;
		il2cpp_codegen_memcpy(L_54, V_21, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		NullCheck(L_53);
		bool L_55;
		L_55 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_54: *(void**)L_54));
		V_22 = L_55;
		bool L_56 = V_22;
		V_23 = L_56;
		bool L_57 = V_23;
		if (!L_57)
		{
			goto IL_0145;
		}
	}
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)0, NULL);
		goto IL_017e;
	}

IL_0145:
	{
		Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_58 = V_2;
		il2cpp_codegen_memcpy(L_59, V_21, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		il2cpp_codegen_memcpy(L_60, V_4, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		NullCheck(L_58);
		bool L_61;
		L_61 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), L_58, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_59: *(void**)L_59), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_60: *(void**)L_60));
		V_24 = L_61;
		bool L_62 = V_24;
		V_25 = L_62;
		bool L_63 = V_25;
		if (!L_63)
		{
			goto IL_0166;
		}
	}
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)1, NULL);
		goto IL_017d;
	}

IL_0166:
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)2, NULL);
		il2cpp_codegen_memcpy(L_64, V_21, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)), il2cpp_rgctx_method(method->rgctx_data, 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 8)) ? L_64: *(void**)L_64));
		il2cpp_codegen_memcpy(L_65, V_21, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
		il2cpp_codegen_memcpy(V_4, L_65, SizeOf_T_t6009795AEFD756CFF72F3C3FFC416565BDCC0AAB);
	}

IL_017d:
	{
	}

IL_017e:
	{
		int32_t L_66 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0185:
	{
		int32_t L_67 = V_20;
		int32_t L_68 = V_0;
		V_26 = (bool)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0);
		bool L_69 = V_26;
		if (L_69)
		{
			goto IL_011c;
		}
	}
	{
	}

IL_0191:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteReplicate_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m3659E1DEA700BDC5A8F0E35B9B0EEA0C17B8AE32_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* ___0_values, int32_t ___1_offset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	Func_3_t034981816E97D7D05569C188B3229941BC10EB32* V_2 = NULL;
	Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* V_3 = NULL;
	MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* L_0 = ___0_values;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAE8611944BD58213A1AC8A64CDCE9116B20DF815_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___1_offset;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)));
		uint8_t L_4 = V_1;
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, L_4, NULL);
		Func_3_t034981816E97D7D05569C188B3229941BC10EB32* L_5;
		L_5 = GeneratedComparer_1_get_Compare_mD39BF9529FF52BF479C5D7EF3B223E7CAD0830B2_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_5;
		Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* L_6;
		L_6 = GeneratedComparer_1_get_IsDefault_m1FD722F0721A4C197640EBA973A7384D0C797DB3_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_6;
		Func_3_t034981816E97D7D05569C188B3229941BC10EB32* L_7 = V_2;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* L_8 = V_3;
		G_B3_0 = ((((RuntimeObject*)(Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_8 = (bool)G_B3_0;
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_11);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E, L_12, NULL);
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_13, NULL);
		goto IL_0191;
	}

IL_0057:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF));
		V_5 = (uint8_t)0;
		V_6 = (bool)1;
		V_7 = (bool)1;
		int32_t L_14 = ___1_offset;
		V_9 = L_14;
		goto IL_00c5;
	}

IL_006d:
	{
		List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* L_15 = ___0_values;
		int32_t L_16 = V_9;
		NullCheck(L_15);
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_17;
		L_17 = List_1_get_Item_m2856E1C8192F4C98921A28161C072DA186599A61(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 9));
		V_10 = L_17;
		Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* L_18 = V_3;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_19 = V_10;
		NullCheck(L_18);
		bool L_20;
		L_20 = Func_2_Invoke_mEC31A1FAC87C5941D279B2E56A8E93111251971E_inline(L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_11 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		V_7 = (bool)0;
	}

IL_008c:
	{
		int32_t L_22 = V_9;
		int32_t L_23 = ___1_offset;
		V_12 = (bool)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		Func_3_t034981816E97D7D05569C188B3229941BC10EB32* L_25 = V_2;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_26 = V_10;
		List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* L_27 = ___0_values;
		int32_t L_28 = V_9;
		NullCheck(L_27);
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_29;
		L_29 = List_1_get_Item_m2856E1C8192F4C98921A28161C072DA186599A61(L_27, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_25);
		bool L_30;
		L_30 = Func_3_Invoke_mFE3FE260CDDADAFA42A2A36325A266D1A06C25D5_inline(L_25, L_26, L_29, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_13 = L_30;
		bool L_31 = V_13;
		V_14 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_14;
		if (!L_32)
		{
			goto IL_00bd;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00d0;
	}

IL_00bd:
	{
	}

IL_00be:
	{
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c5:
	{
		int32_t L_34 = V_9;
		int32_t L_35 = V_0;
		V_15 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_15;
		if (L_36)
		{
			goto IL_006d;
		}
	}

IL_00d0:
	{
		bool L_37 = V_7;
		V_16 = L_37;
		bool L_38 = V_16;
		if (!L_38)
		{
			goto IL_00dd;
		}
	}
	{
		V_5 = (uint8_t)4;
		goto IL_00e8;
	}

IL_00dd:
	{
		bool L_39 = V_6;
		V_17 = L_39;
		bool L_40 = V_17;
		if (!L_40)
		{
			goto IL_00e8;
		}
	}
	{
		V_5 = (uint8_t)3;
	}

IL_00e8:
	{
		uint8_t L_41 = V_5;
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, L_41, NULL);
		bool L_42 = V_6;
		V_18 = L_42;
		bool L_43 = V_18;
		if (!L_43)
		{
			goto IL_0116;
		}
	}
	{
		bool L_44 = V_7;
		V_19 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* L_46 = ___0_values;
		int32_t L_47 = ___1_offset;
		NullCheck(L_46);
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_48;
		L_48 = List_1_get_Item_m2856E1C8192F4C98921A28161C072DA186599A61(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 9));
		Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_inline(__this, L_48, il2cpp_rgctx_method(method->rgctx_data, 12));
	}

IL_0113:
	{
		goto IL_0191;
	}

IL_0116:
	{
		int32_t L_49 = ___1_offset;
		V_20 = L_49;
		goto IL_0185;
	}

IL_011c:
	{
		List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* L_50 = ___0_values;
		int32_t L_51 = V_20;
		NullCheck(L_50);
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_52;
		L_52 = List_1_get_Item_m2856E1C8192F4C98921A28161C072DA186599A61(L_50, L_51, il2cpp_rgctx_method(method->rgctx_data, 9));
		V_21 = L_52;
		Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* L_53 = V_3;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_54 = V_21;
		NullCheck(L_53);
		bool L_55;
		L_55 = Func_2_Invoke_mEC31A1FAC87C5941D279B2E56A8E93111251971E_inline(L_53, L_54, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_22 = L_55;
		bool L_56 = V_22;
		V_23 = L_56;
		bool L_57 = V_23;
		if (!L_57)
		{
			goto IL_0145;
		}
	}
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)0, NULL);
		goto IL_017e;
	}

IL_0145:
	{
		Func_3_t034981816E97D7D05569C188B3229941BC10EB32* L_58 = V_2;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_59 = V_21;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_60 = V_4;
		NullCheck(L_58);
		bool L_61;
		L_61 = Func_3_Invoke_mFE3FE260CDDADAFA42A2A36325A266D1A06C25D5_inline(L_58, L_59, L_60, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_24 = L_61;
		bool L_62 = V_24;
		V_25 = L_62;
		bool L_63 = V_25;
		if (!L_63)
		{
			goto IL_0166;
		}
	}
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)1, NULL);
		goto IL_017d;
	}

IL_0166:
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)2, NULL);
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_64 = V_21;
		Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_inline(__this, L_64, il2cpp_rgctx_method(method->rgctx_data, 12));
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_65 = V_21;
		V_4 = L_65;
	}

IL_017d:
	{
	}

IL_017e:
	{
		int32_t L_66 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0185:
	{
		int32_t L_67 = V_20;
		int32_t L_68 = V_0;
		V_26 = (bool)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0);
		bool L_69 = V_26;
		if (L_69)
		{
			goto IL_011c;
		}
	}
	{
	}

IL_0191:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteReplicate_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mBBC88FC3E725B59FF99B19451F9C3EEA3BEBEA3B_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* ___0_values, int32_t ___1_offset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* V_2 = NULL;
	Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* V_3 = NULL;
	MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* L_0 = ___0_values;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAB5412E86AE151DA2816A5BE39C8ED9536F18DEA_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___1_offset;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)));
		uint8_t L_4 = V_1;
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, L_4, NULL);
		Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* L_5;
		L_5 = GeneratedComparer_1_get_Compare_m6139CC727FCEB9CA92362B870474CB727B4149C7_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_5;
		Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* L_6;
		L_6 = GeneratedComparer_1_get_IsDefault_m49630871A467E37723F9047E1B74452EA0624300_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_6;
		Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* L_7 = V_2;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* L_8 = V_3;
		G_B3_0 = ((((RuntimeObject*)(Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_8 = (bool)G_B3_0;
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_11);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E, L_12, NULL);
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_13, NULL);
		goto IL_0191;
	}

IL_0057:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C));
		V_5 = (uint8_t)0;
		V_6 = (bool)1;
		V_7 = (bool)1;
		int32_t L_14 = ___1_offset;
		V_9 = L_14;
		goto IL_00c5;
	}

IL_006d:
	{
		List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* L_15 = ___0_values;
		int32_t L_16 = V_9;
		NullCheck(L_15);
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_17;
		L_17 = List_1_get_Item_m2A61A0E74EA6C562DE33A2FBD1CD31380612BCB0(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 9));
		V_10 = L_17;
		Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* L_18 = V_3;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_19 = V_10;
		NullCheck(L_18);
		bool L_20;
		L_20 = Func_2_Invoke_mA1634CED91C0529D40733438A7F732E4F65837CF_inline(L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_11 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		V_7 = (bool)0;
	}

IL_008c:
	{
		int32_t L_22 = V_9;
		int32_t L_23 = ___1_offset;
		V_12 = (bool)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* L_25 = V_2;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_26 = V_10;
		List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* L_27 = ___0_values;
		int32_t L_28 = V_9;
		NullCheck(L_27);
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_29;
		L_29 = List_1_get_Item_m2A61A0E74EA6C562DE33A2FBD1CD31380612BCB0(L_27, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_25);
		bool L_30;
		L_30 = Func_3_Invoke_mB384F8CE56A3AAEF6584213D7D5A357609931BFE_inline(L_25, L_26, L_29, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_13 = L_30;
		bool L_31 = V_13;
		V_14 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_14;
		if (!L_32)
		{
			goto IL_00bd;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00d0;
	}

IL_00bd:
	{
	}

IL_00be:
	{
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c5:
	{
		int32_t L_34 = V_9;
		int32_t L_35 = V_0;
		V_15 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_15;
		if (L_36)
		{
			goto IL_006d;
		}
	}

IL_00d0:
	{
		bool L_37 = V_7;
		V_16 = L_37;
		bool L_38 = V_16;
		if (!L_38)
		{
			goto IL_00dd;
		}
	}
	{
		V_5 = (uint8_t)4;
		goto IL_00e8;
	}

IL_00dd:
	{
		bool L_39 = V_6;
		V_17 = L_39;
		bool L_40 = V_17;
		if (!L_40)
		{
			goto IL_00e8;
		}
	}
	{
		V_5 = (uint8_t)3;
	}

IL_00e8:
	{
		uint8_t L_41 = V_5;
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, L_41, NULL);
		bool L_42 = V_6;
		V_18 = L_42;
		bool L_43 = V_18;
		if (!L_43)
		{
			goto IL_0116;
		}
	}
	{
		bool L_44 = V_7;
		V_19 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* L_46 = ___0_values;
		int32_t L_47 = ___1_offset;
		NullCheck(L_46);
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_48;
		L_48 = List_1_get_Item_m2A61A0E74EA6C562DE33A2FBD1CD31380612BCB0(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 9));
		Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_inline(__this, L_48, il2cpp_rgctx_method(method->rgctx_data, 12));
	}

IL_0113:
	{
		goto IL_0191;
	}

IL_0116:
	{
		int32_t L_49 = ___1_offset;
		V_20 = L_49;
		goto IL_0185;
	}

IL_011c:
	{
		List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* L_50 = ___0_values;
		int32_t L_51 = V_20;
		NullCheck(L_50);
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_52;
		L_52 = List_1_get_Item_m2A61A0E74EA6C562DE33A2FBD1CD31380612BCB0(L_50, L_51, il2cpp_rgctx_method(method->rgctx_data, 9));
		V_21 = L_52;
		Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* L_53 = V_3;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_54 = V_21;
		NullCheck(L_53);
		bool L_55;
		L_55 = Func_2_Invoke_mA1634CED91C0529D40733438A7F732E4F65837CF_inline(L_53, L_54, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_22 = L_55;
		bool L_56 = V_22;
		V_23 = L_56;
		bool L_57 = V_23;
		if (!L_57)
		{
			goto IL_0145;
		}
	}
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)0, NULL);
		goto IL_017e;
	}

IL_0145:
	{
		Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* L_58 = V_2;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_59 = V_21;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_60 = V_4;
		NullCheck(L_58);
		bool L_61;
		L_61 = Func_3_Invoke_mB384F8CE56A3AAEF6584213D7D5A357609931BFE_inline(L_58, L_59, L_60, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_24 = L_61;
		bool L_62 = V_24;
		V_25 = L_62;
		bool L_63 = V_25;
		if (!L_63)
		{
			goto IL_0166;
		}
	}
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)1, NULL);
		goto IL_017d;
	}

IL_0166:
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)2, NULL);
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_64 = V_21;
		Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_inline(__this, L_64, il2cpp_rgctx_method(method->rgctx_data, 12));
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_65 = V_21;
		V_4 = L_65;
	}

IL_017d:
	{
	}

IL_017e:
	{
		int32_t L_66 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0185:
	{
		int32_t L_67 = V_20;
		int32_t L_68 = V_0;
		V_26 = (bool)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0);
		bool L_69 = V_26;
		if (L_69)
		{
			goto IL_011c;
		}
	}
	{
	}

IL_0191:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_WriteReplicate_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mEBE232544E418FEA2E14B938316129AB3128601F_gshared (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* ___0_values, int32_t ___1_offset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* V_2 = NULL;
	Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* V_3 = NULL;
	MoveData_t753DE366344980726A0DE776C583226ADF9B8364 V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	MoveData_t753DE366344980726A0DE776C583226ADF9B8364 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	MoveData_t753DE366344980726A0DE776C583226ADF9B8364 V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* L_0 = ___0_values;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m7CC7E1A36E6D648E9E16E63ABA8DAF754EA58477_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___1_offset;
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)));
		uint8_t L_4 = V_1;
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, L_4, NULL);
		Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* L_5;
		L_5 = GeneratedComparer_1_get_Compare_m5D1AEF9AB68C975730C2DEA8750E0390CE924F2B_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_5;
		Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* L_6;
		L_6 = GeneratedComparer_1_get_IsDefault_m7B8DBEB19EBEC9A46680374BF72492962774450A_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		V_3 = L_6;
		Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* L_7 = V_2;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* L_8 = V_3;
		G_B3_0 = ((((RuntimeObject*)(Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		V_8 = (bool)G_B3_0;
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_11);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4B5A7F3FD9C9B700499CDF3744AB624FA447CF0E, L_12, NULL);
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_13, NULL);
		goto IL_0191;
	}

IL_0057:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(MoveData_t753DE366344980726A0DE776C583226ADF9B8364));
		V_5 = (uint8_t)0;
		V_6 = (bool)1;
		V_7 = (bool)1;
		int32_t L_14 = ___1_offset;
		V_9 = L_14;
		goto IL_00c5;
	}

IL_006d:
	{
		List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* L_15 = ___0_values;
		int32_t L_16 = V_9;
		NullCheck(L_15);
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_17;
		L_17 = List_1_get_Item_mB48781AC7271230047505791AFD9A83B12494E7B(L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 9));
		V_10 = L_17;
		Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* L_18 = V_3;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_19 = V_10;
		NullCheck(L_18);
		bool L_20;
		L_20 = Func_2_Invoke_mE5F1736D3C7B664BE975ACC9EE78C63E4D9012D9_inline(L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_11 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_11;
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		V_7 = (bool)0;
	}

IL_008c:
	{
		int32_t L_22 = V_9;
		int32_t L_23 = ___1_offset;
		V_12 = (bool)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* L_25 = V_2;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_26 = V_10;
		List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* L_27 = ___0_values;
		int32_t L_28 = V_9;
		NullCheck(L_27);
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_29;
		L_29 = List_1_get_Item_mB48781AC7271230047505791AFD9A83B12494E7B(L_27, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_25);
		bool L_30;
		L_30 = Func_3_Invoke_m0E5E2EA8CD8CC720DBCEA4719C9E3CE327C285CE_inline(L_25, L_26, L_29, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_13 = L_30;
		bool L_31 = V_13;
		V_14 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_14;
		if (!L_32)
		{
			goto IL_00bd;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00d0;
	}

IL_00bd:
	{
	}

IL_00be:
	{
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c5:
	{
		int32_t L_34 = V_9;
		int32_t L_35 = V_0;
		V_15 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_15;
		if (L_36)
		{
			goto IL_006d;
		}
	}

IL_00d0:
	{
		bool L_37 = V_7;
		V_16 = L_37;
		bool L_38 = V_16;
		if (!L_38)
		{
			goto IL_00dd;
		}
	}
	{
		V_5 = (uint8_t)4;
		goto IL_00e8;
	}

IL_00dd:
	{
		bool L_39 = V_6;
		V_17 = L_39;
		bool L_40 = V_17;
		if (!L_40)
		{
			goto IL_00e8;
		}
	}
	{
		V_5 = (uint8_t)3;
	}

IL_00e8:
	{
		uint8_t L_41 = V_5;
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, L_41, NULL);
		bool L_42 = V_6;
		V_18 = L_42;
		bool L_43 = V_18;
		if (!L_43)
		{
			goto IL_0116;
		}
	}
	{
		bool L_44 = V_7;
		V_19 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0113;
		}
	}
	{
		List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* L_46 = ___0_values;
		int32_t L_47 = ___1_offset;
		NullCheck(L_46);
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_48;
		L_48 = List_1_get_Item_mB48781AC7271230047505791AFD9A83B12494E7B(L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 9));
		Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_inline(__this, L_48, il2cpp_rgctx_method(method->rgctx_data, 12));
	}

IL_0113:
	{
		goto IL_0191;
	}

IL_0116:
	{
		int32_t L_49 = ___1_offset;
		V_20 = L_49;
		goto IL_0185;
	}

IL_011c:
	{
		List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* L_50 = ___0_values;
		int32_t L_51 = V_20;
		NullCheck(L_50);
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_52;
		L_52 = List_1_get_Item_mB48781AC7271230047505791AFD9A83B12494E7B(L_50, L_51, il2cpp_rgctx_method(method->rgctx_data, 9));
		V_21 = L_52;
		Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* L_53 = V_3;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_54 = V_21;
		NullCheck(L_53);
		bool L_55;
		L_55 = Func_2_Invoke_mE5F1736D3C7B664BE975ACC9EE78C63E4D9012D9_inline(L_53, L_54, il2cpp_rgctx_method(method->rgctx_data, 10));
		V_22 = L_55;
		bool L_56 = V_22;
		V_23 = L_56;
		bool L_57 = V_23;
		if (!L_57)
		{
			goto IL_0145;
		}
	}
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)0, NULL);
		goto IL_017e;
	}

IL_0145:
	{
		Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* L_58 = V_2;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_59 = V_21;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_60 = V_4;
		NullCheck(L_58);
		bool L_61;
		L_61 = Func_3_Invoke_m0E5E2EA8CD8CC720DBCEA4719C9E3CE327C285CE_inline(L_58, L_59, L_60, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_24 = L_61;
		bool L_62 = V_24;
		V_25 = L_62;
		bool L_63 = V_25;
		if (!L_63)
		{
			goto IL_0166;
		}
	}
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)1, NULL);
		goto IL_017d;
	}

IL_0166:
	{
		Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline(__this, (uint8_t)2, NULL);
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_64 = V_21;
		Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_inline(__this, L_64, il2cpp_rgctx_method(method->rgctx_data, 12));
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_65 = V_21;
		V_4 = L_65;
	}

IL_017d:
	{
	}

IL_017e:
	{
		int32_t L_66 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0185:
	{
		int32_t L_67 = V_20;
		int32_t L_68 = V_0;
		V_26 = (bool)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0);
		bool L_69 = V_26;
		if (L_69)
		{
			goto IL_011c;
		}
	}
	{
	}

IL_0191:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m838397FA34A03D1C68D150CC95FD210252FEC377_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, int64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		int64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58D75192AF2281079E2FDE4034707E9883147B2C_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, uint64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		uint64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113(L_4, L_5, L_6, (InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		int32_t L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5(L_4, L_5, L_6, (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		float L_6 = V_0;
		NullCheck(L_4);
		float L_7;
		L_7 = InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0(L_4, L_5, L_6, (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		float L_11;
		L_11 = InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		float L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5(L_4, L_5, L_6, (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28(L_4, L_5, L_6, (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_7;
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE(L_8, L_9, L_10, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_11;
	}

IL_0051:
	{
		V_0 = G_B4_0;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		V_2 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	const Il2CppFullySharedGenericStruct L_11 = L_6;
	const Il2CppFullySharedGenericStruct L_12 = L_6;
	const Il2CppFullySharedGenericStruct L_13 = L_6;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_2, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct G_B4_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(G_B4_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		V_1 = (bool)((!(((RuntimeObject*)(InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_2, NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_4 = __this->___m_State;
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		NullCheck(L_4);
		InvokerActionInvoker4< int32_t, Il2CppFullySharedGenericStruct, InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_4, L_5, L_6, (InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)NULL, (Il2CppFullySharedGenericStruct*)L_7);
		il2cpp_codegen_memcpy(G_B4_0, L_7, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		goto IL_0051;
	}

IL_0039:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_8 = __this->___m_State;
		int32_t L_9;
		L_9 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_10;
		L_10 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_8);
		InvokerActionInvoker4< int32_t, int32_t, bool, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_8, L_9, L_10, (bool)0, (Il2CppFullySharedGenericStruct*)L_11);
		il2cpp_codegen_memcpy(G_B4_0, L_11, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_0051:
	{
		il2cpp_codegen_memcpy(V_0, G_B4_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_0053:
	{
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		il2cpp_codegen_memcpy(V_2, L_12, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		goto IL_0057;
	}

IL_0057:
	{
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		return;
	}
}
IL2CPP_EXTERN_C  void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_TisRuntimeObject_mD0F2FB39194CC7EAC8E22DFFCD9C9116BAFC7B5E_gshared (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* V_0 = NULL;
	{
		RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5;
		L_5 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors), L_4, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_9, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0053:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_0;
		String_t* L_13;
		L_13 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_12, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_14;
		L_14 = BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B(__this, L_13, NULL);
		V_3 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_5;
		L_5 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors), L_4, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_9, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0053:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_0;
		String_t* L_13;
		L_13 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_12, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_14;
		L_14 = BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC(__this, L_13, NULL);
		V_3 = L_14;
		goto IL_0062;
	}

IL_0062:
	{
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_15 = V_3;
		return L_15;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2;
		L_2 = Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868((&((InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var))->___s_Layouts), L_1, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&V_1), NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck((MemberInfo_t*)L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_8);
		V_0 = L_9;
	}

IL_003e:
	{
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_10, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_3 = L_11;
		goto IL_0051;
	}

IL_0051:
	{
		String_t* L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_OrWithOptionalDevice_m4FAD0C920C5F78242F300DAA320C32196FCA4CC5(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_OrWithRequiredDevice_m43958B0E5766DDEB56087E4271512A5A97B30AA6(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	const Il2CppFullySharedGenericStruct L_29 = L_22;
	const Il2CppFullySharedGenericStruct L_28 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_1, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	void* V_2 = NULL;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_4, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	{
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_0 = __this->___m_Ptr;
		int32_t L_1;
		L_1 = ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_3 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck((MemberInfo_t*)L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		int32_t L_11;
		L_11 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F(__this, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D)), L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0063:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericStruct*)L_22);
		il2cpp_codegen_memcpy(V_1, L_22, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		void* L_23;
		L_23 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((Il2CppFullySharedGenericStruct*)V_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = L_23;
		void* L_24 = V_2;
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_25 = __this->___m_Ptr;
		uint8_t* L_26;
		L_26 = ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_25, NULL);
		int32_t L_27 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_24, (void*)L_26, ((int64_t)L_27), NULL);
		il2cpp_codegen_memcpy(L_28, V_1, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		il2cpp_codegen_memcpy(V_4, L_28, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		goto IL_008a;
	}

IL_008a:
	{
		il2cpp_codegen_memcpy(L_29, V_4, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_29, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		return;
	}
}
IL2CPP_EXTERN_C  void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*>(__this + _offset);
	ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_processor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3;
		L_3 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		RuntimeObject* L_4 = ___0_processor;
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)il2cpp_codegen_get_instance_field_data_pointer(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),0)))), (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_4);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_6 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		V_1 = L_6;
		goto IL_003e;
	}

IL_003e:
	{
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method)
{
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*>(__this + _offset);
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline(_thisAdjusted, ___0_processor, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* Builder_WithType_TisRuntimeObject_m78AB1B3E3CC78CC83E7A66415AD992EF33CF8A7F_gshared (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline(__this, L_1, NULL);
		V_0 = __this;
		goto IL_0016;
	}

IL_0016:
	{
		Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	const Il2CppFullySharedGenericStruct L_3 = L_2;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	memset(V_0, 0, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	{
		Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83(__this, NULL);
		InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* L_0 = __this->___m_Owner;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35(__this, NULL);
		NullCheck(L_0);
		InvokerActionInvoker2< RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		goto IL_001c;
	}

IL_001c:
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		return;
	}
}
IL2CPP_EXTERN_C  void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*>(__this + _offset);
	Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, int32_t ___0_value, int32_t ___1_packType, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___1_packType;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___0_value;
		uint64_t L_3;
		L_3 = Writer_ZigZagEncode_mA91A7B874D71BC4BECFFF783D84A29B0336C273A(__this, ((int64_t)L_2), NULL);
		Writer_WritePackedWhole_m38C94586EB23F531727FA068F01AC2CE817456C4_inline(__this, L_3, NULL);
		goto IL_0023;
	}

IL_001a:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___1_packType;
		Writer_WriteUInt32_mDAF20969906045C6567ECA06622A8A24BF5DA07A_inline(__this, L_4, L_5, NULL);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteBoolean_m817C7111AA3410A0C4C1C17FA98789A08D08B0D2_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_2 = NULL;
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->___Position;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		bool L_4 = ___0_value;
		if (L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_0;
			goto IL_0026;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_0;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0027:
	{
		NullCheck(G_B3_2);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (uint8_t)G_B3_0);
		int32_t L_5 = __this->___Length;
		int32_t L_6 = __this->___Position;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_5, L_6, NULL);
		__this->___Length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteByte_m6A63E71D838F81B024545D03C23981BC44604F7B_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		int32_t L_1 = __this->___Position;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___0_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___Length;
		int32_t L_6 = __this->___Position;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_5, L_6, NULL);
		__this->___Length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) 
{
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CtypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* GenericWriter_1_get_WriteAutoPack_m8B20E3E688F7B0C15067D3265B02C983CEC1CD2A_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_t67C2DFF7D58B0142235D1463394D0F989B7C211C* L_0 = ((GenericWriter_1_t63F518D05C6CD08AD4F796A935EA1C061088BA52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mE32D8C4D551EA0F88A03A3267A0253C73AC84413_gshared_inline (Action_3_tB36C63A6163DE251C9DAB7E491FC68AF20F25B3B* __this, RuntimeObject* ___0_arg1, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* GenericWriter_1_get_Write_mF18C30C55853E1E857852C3714644EF94AB0D768_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_t5C810CE97B6B5EAB524DA292E2C2AC5FE4538180* L_0 = ((GenericWriter_1_t63F518D05C6CD08AD4F796A935EA1C061088BA52_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7665C89484D7D19435EDA534C917DDE0458E65C8_gshared_inline (Action_2_t6863D0C8AC3729DB6F8C83F07339EE825A84A800* __this, RuntimeObject* ___0_arg1, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, Structy_tCDD00FA69F789D90924F9BAFFDE219CFB16E33BF, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* GenericWriter_1_get_WriteAutoPack_m8266AB18152122D9E49394CC54C63EFA0A64E07D_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_tD477E7CA17B5396B2EA6C618AFC782070BA9CE23* L_0 = ((GenericWriter_1_tB52C8B3A43F01D8D7AA6F7C9020F41C89AA748E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m315D9531FB32934C020F53D96CEC5B51E81DF759_gshared_inline (Action_3_tA77E3EB3B729CC4518FEE32E1EBD226DBC9C0B36* __this, RuntimeObject* ___0_arg1, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* GenericWriter_1_get_Write_m4CDD00AAB9190F1F6D78D3D979DA8945A0EC7A4D_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_t4F73B1C4B65C033622343A1D46697991373FB6F0* L_0 = ((GenericWriter_1_tB52C8B3A43F01D8D7AA6F7C9020F41C89AA748E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mA1B55ABBF6C3B5C69231D998CC81BD0467371DB4_gshared_inline (Action_2_tDC791CC86FE7342D01E06A0D39B05C7DF40C953C* __this, RuntimeObject* ___0_arg1, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99 ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, UnloadScenesBroadcast_tD363EF49E27C04059FF09E221F078D9048968B99, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* GenericWriter_1_get_WriteAutoPack_m124CAAA2D49DF6207EBFE14F25F3A418EBDC7533_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_tCF86104AAD260D85834727EA7682903CF370BDB3* L_0 = ((GenericWriter_1_t9B346D745C71E6FBAEDC214DA49F71B56FD701C1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m0DB7DDF77070882CA97D7CDB85A9A3E0770D5D8E_gshared_inline (Action_3_tE70489C345DA6724466411DACD6BF921598C72FA* __this, RuntimeObject* ___0_arg1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* GenericWriter_1_get_Write_m044FDB6DA90E22017AB9BE24A438DD8E7B2DACBE_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_t78C98F55A1F83D87C64D8F78E30C219AD1B00B9B* L_0 = ((GenericWriter_1_t9B346D745C71E6FBAEDC214DA49F71B56FD701C1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m2D4B90EDAB2F9C3DBBC875445EA6142EFB512032_gshared_inline (Action_2_t0F28FD6DF12DE3C0C0A3C8670D6FF563CB91D7DE* __this, RuntimeObject* ___0_arg1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* GenericWriter_1_get_WriteAutoPack_mD4D513487818C65E2996BB0E7AC306FB5DBB562B_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* L_0 = ((GenericWriter_1_t9CD8FE81621F2BA8579F524FD103725B054D2538_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m4D7EF94236FB1D5AE4F798E776C62ACC92C90FF9_gshared_inline (Action_3_t2DF341D286CB482CE4C744E8B60E73AEEAAB444A* __this, RuntimeObject* ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* GenericWriter_1_get_Write_m8F3B7E01CBA23226EDE73E4B9169D04A45B107A8_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* L_0 = ((GenericWriter_1_t9CD8FE81621F2BA8579F524FD103725B054D2538_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m1BD8B662FCB8C1E420D2E5FA04FAB602764FAC57_gshared_inline (Action_2_t6A77E21F2D500A58262FF81C45072CE9421F1731* __this, RuntimeObject* ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* GenericWriter_1_get_WriteAutoPack_mC52AC8DE8CF429C24A5F8B79C95C80A55CA399BF_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_tAA2210FD244BDA650B6C7F962D029D34D7F135D5* L_0 = ((GenericWriter_1_tC5163517FDD2888726C765836C53BA8E11F23237_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m8AFAE94FFB4B1B682AED4014EB2F808E0B3A0524_gshared_inline (Action_3_t4B8BBD2F9D04192EE60346F180E1158367D50630* __this, RuntimeObject* ___0_arg1, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* GenericWriter_1_get_Write_mCA3A7505AEAB91F91B387145D19DC738450BB3FE_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_tC202E5B362007319F8D49D1C935DAE694FB44277* L_0 = ((GenericWriter_1_tC5163517FDD2888726C765836C53BA8E11F23237_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mDD7A8E2327FAE5F8C946627C6245C5A7D40B55BA_gshared_inline (Action_2_t9409F7032549C6485B2783BD411C768B07BF3230* __this, RuntimeObject* ___0_arg1, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReconcileData_tE73380BC019F62207A1ED8C5F450F42FE104BB6E, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* GenericWriter_1_get_WriteAutoPack_m9B2FBC9D54A6130AB2980F481F7372F471A8BF75_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* L_0 = ((GenericWriter_1_t7D104E1B9BC91999BB7DCB13458A4E5CBD8AD7A1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m8B9FB620E50717913B0A3B3F9B43185FBDC119ED_gshared_inline (Action_3_t7A7D8F37E60576CA928157EFAB4BA545F40DAB98* __this, RuntimeObject* ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* GenericWriter_1_get_Write_m0A28F475596EA92A55509356EE694412BA8526BA_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* L_0 = ((GenericWriter_1_t7D104E1B9BC91999BB7DCB13458A4E5CBD8AD7A1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mB0EF01C116D9523B6A7ADADB18214A896CC0934D_gshared_inline (Action_2_tC85E3E333079B0AD40C500D3716134CAAA50E71E* __this, RuntimeObject* ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* GenericWriter_1_get_WriteAutoPack_m3B850B64815690B5BA2F785B84896CFFA9F4DC4C_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_tFCFD137CE159773E14BB19774D57F91F68E05C66* L_0 = ((GenericWriter_1_tF2B15E9688E116ACC627645C72A0004D233AB8C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mF635D512DC184B8DBA117B9EAB7303E992DE0BE6_gshared_inline (Action_3_t97E9FE86398043E046447F3D72D985E4DF383DBA* __this, RuntimeObject* ___0_arg1, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* GenericWriter_1_get_Write_m0B79255D3F6F23C16615A8D5653FAC038F4D1A98_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_t8C20D77D1FA88B07A4ACC8FC37B053F8CD18F0E8* L_0 = ((GenericWriter_1_tF2B15E9688E116ACC627645C72A0004D233AB8C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mF3C597AC95C1BCE14ABB5953103DE1C855ED688F_gshared_inline (Action_2_t4EDE69A2330F8765E31BF3408B8B8EA126137B3B* __this, RuntimeObject* ___0_arg1, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00 ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReconcileData_t88F88A70638951271288A26C8FF621B640B7DB00, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* GenericWriter_1_get_WriteAutoPack_mA07C3E96060A68F238A85535AF1A76E502E579CA_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* L_0 = ((GenericWriter_1_t06EEEC6B9EFD7565C5AFCF47315E65E6E79C8874_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m5E69F41A2D869DB329CDA5B74F1AEF397EE8AC08_gshared_inline (Action_3_t7C93E6A14E8998072D4A3F39386F719D44FA3AF9* __this, RuntimeObject* ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* GenericWriter_1_get_Write_m8AC513EB616F0933E637DA872DA2ABC4516C4D76_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* L_0 = ((GenericWriter_1_t06EEEC6B9EFD7565C5AFCF47315E65E6E79C8874_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m4E1C42A4140AB1D374643E4D69E962322A92E304_gshared_inline (Action_2_t0D708E493BEEC4A0FA7432BE6002D4765EF5FD76* __this, RuntimeObject* ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* GenericWriter_1_get_WriteAutoPack_mABF88440A2023EF331EA2AB432E809E74F4CD060_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_t6FF30872A6F0CF6FAD77F8B22E7D1A1768DB56F9* L_0 = ((GenericWriter_1_tCFD188AFB9226EACD0E7C1BBD492A20CF510878E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m363AB5AAB0D4C61AF091032C9662C8A0B8E657BF_gshared_inline (Action_3_t3D631909C0B9D436FE34760BF5570D181CAA2CB1* __this, RuntimeObject* ___0_arg1, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* GenericWriter_1_get_Write_m71F380B18ADA80DEC6A9ADB1C0BBC4BFC8315BE9_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_tAE67D7D7E35CF2CE01A68D418ACDB541C6FFCAA2* L_0 = ((GenericWriter_1_tCFD188AFB9226EACD0E7C1BBD492A20CF510878E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mCBAE2606C20FA05CD4033830FE3C68E87E3789AF_gshared_inline (Action_2_tD600952FE18E28A4C74B03C401311CB865A9D1D6* __this, RuntimeObject* ___0_arg1, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92 ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ReconcileData_t878FDF0818B66B6329E6BD192FC2D725C595CB92, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteArray_TisRuntimeObject_mE0E77DE528EA3904C48458F4A4B240002F091AE0_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Writer_Write_TisRuntimeObject_m4B9A5404192A51D674FFEFB9A5797390488AB2F2_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_mB0B25C36F7F523E75D5E773613134C501CC984A9_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		MoveDataU5BU5D_tE914592FAF50E83D8EF334C67DDE247313530B4B* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m3D64A4056E5974B3C4A19C2813B93CE996F213D4_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		MoveDataU5BU5D_t77D08A6B251A23E0253E814CDFB4740F1DE110BF* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteArray_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m25206A4685D69DB6C4C607AC04F85D463CCCC6FA_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0060;
	}

IL_0016:
	{
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_2 = ___0_value;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, 0, (int32_t)1, NULL);
		goto IL_005f;
	}

IL_0036:
	{
		int32_t L_6 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_6, (int32_t)1, NULL);
		int32_t L_7 = ___1_offset;
		V_2 = L_7;
		goto IL_0056;
	}

IL_0044:
	{
		MoveDataU5BU5D_tAD435A06582185FDC720DB21AED43A72F5631D3E* L_8 = ___0_value;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
	}

IL_005f:
	{
	}

IL_0060:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisRuntimeObject_m4B9A5404192A51D674FFEFB9A5797390488AB2F2_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t58A6F8DAAECF3E414E9D54EFD8EF6E47F2E11FFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* V_3 = NULL;
	bool V_4 = false;
	Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t58A6F8DAAECF3E414E9D54EFD8EF6E47F2E11FFA L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_mCAA6CAAC1AB12D88FF651F26885F35FBD255354C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisRuntimeObject_m3E26ED96A92AF7DF3F617552D02EC7EBAE805D49((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* L_10 = V_3;
		RuntimeObject* L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_m481F439D06E84B3D18725503107D83783B5D24AC_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* L_13;
		L_13 = GenericWriter_1_get_Write_mF4969C87016962534ED7B4298A49E7C974BD1D2D_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t02F825E5836331E5028F466633AC99D6659AB01E*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisRuntimeObject_m3E26ED96A92AF7DF3F617552D02EC7EBAE805D49((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* L_17 = V_5;
		RuntimeObject* L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_mCBBC528171E456D3D14F2893E73BCA82215C3103_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m33905341CB3C81D6DCD5ACFA71051ADB322A3915_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t8113C10ED39CE767984FB1023A0E529C24BF1154 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* V_3 = NULL;
	bool V_4 = false;
	Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t8113C10ED39CE767984FB1023A0E529C24BF1154 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_mD4D513487818C65E2996BB0E7AC306FB5DBB562B_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m27F845F582F1513955666227360D3D1B4B757795((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tAE083E90269D075B765F53F8583AD89CEA9DCDE7* L_10 = V_3;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_mBE2EE95D368C8479ADC40E4080FB8EB6C9EDB8AC_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* L_13;
		L_13 = GenericWriter_1_get_Write_m8F3B7E01CBA23226EDE73E4B9169D04A45B107A8_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF_m27F845F582F1513955666227360D3D1B4B757795((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t24AF612575DE06942B9EF4A93B3FDB00703BD5E5* L_17 = V_5;
		MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_mC1930706420263EB2ECBD48D87398ADD4AFFA3FD_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_m80159F8F2F36713B2036F380197888998753552A_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t6AAA9341B2933C31CF18D487D16219917A1F3597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* V_3 = NULL;
	bool V_4 = false;
	Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t6AAA9341B2933C31CF18D487D16219917A1F3597 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_m9B2FBC9D54A6130AB2980F481F7372F471A8BF75_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mB4775B73D4D7C21EDC40AEBDFFCE69B1697FED10((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tF239FE916E00D1653611410B2FDF30BB6DD4C952* L_10 = V_3;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_m9FC48C3251FE138487533232729C74FC617E1518_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* L_13;
		L_13 = GenericWriter_1_get_Write_m0A28F475596EA92A55509356EE694412BA8526BA_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_tA39C087131EF098F027F705849BBD38F514ECA50*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C_mB4775B73D4D7C21EDC40AEBDFFCE69B1697FED10((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_tA39C087131EF098F027F705849BBD38F514ECA50* L_17 = V_5;
		MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_m75BA4D0ED566BD605E88D81B50C3D84A82F23BB3_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_m141B1940473AA5FE47E889166C2EFF94AE784328_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_tFB050F6CB7FFF7C1D9403B85D8E602BA5FFDE515 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* V_3 = NULL;
	bool V_4 = false;
	Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_tFB050F6CB7FFF7C1D9403B85D8E602BA5FFDE515 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_mA07C3E96060A68F238A85535AF1A76E502E579CA_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mD537498A06501E6453EA46B2C28061FABA0D011E((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_tE9AB344196BB591BF54518D605C7FF0D2A8863F8* L_10 = V_3;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_mB62715D4D51C31376BF255A2778240F7F8D6229C_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* L_13;
		L_13 = GenericWriter_1_get_Write_m8AC513EB616F0933E637DA872DA2ABC4516C4D76_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisMoveData_t753DE366344980726A0DE776C583226ADF9B8364_mD537498A06501E6453EA46B2C28061FABA0D011E((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t893B9948ACE06638378931FFE820AB8C94BBD6DB* L_17 = V_5;
		MoveData_t753DE366344980726A0DE776C583226ADF9B8364 L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_mA74FCE8D7BE9AA471333B1AFC7682F111B02DD2A_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7F1F5F6982C5082A62F284D90F644121EB750226_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_value, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, (-1), (int32_t)1, NULL);
		goto IL_0053;
	}

IL_0016:
	{
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = ___0_value;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		___2_count = 0;
	}

IL_0029:
	{
		int32_t L_7 = ___2_count;
		Writer_WriteInt32_m2A1CCB2D6EF72B4FC7F7AA1BA3D5B2A670DB9A88_inline(__this, L_7, (int32_t)1, NULL);
		V_2 = 0;
		goto IL_004a;
	}

IL_0036:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = ___0_value;
		int32_t L_9 = V_2;
		int32_t L_10 = ___1_offset;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_8, ((int32_t)il2cpp_codegen_add(L_9, L_10)), il2cpp_rgctx_method(method->rgctx_data, 2));
		Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A26364BE0CBB5580386932776C8EFBD121F6B3D_inline(__this, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004a:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_count;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0036;
		}
	}
	{
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_Write_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1A26364BE0CBB5580386932776C8EFBD121F6B3D_gshared_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass82_0_1_t4A8B1D5D7CE31242EC31E4D9EE27BDC3E98A1460 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* V_3 = NULL;
	bool V_4 = false;
	Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* V_5 = NULL;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___type = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___type), (void*)L_1);
		U3CU3Ec__DisplayClass82_0_1_t4A8B1D5D7CE31242EC31E4D9EE27BDC3E98A1460 L_2 = V_0;
		Type_t* L_3 = L_2.___type;
		bool L_4;
		L_4 = Writer_IsAutoPackType_m5154FBDC960E07524D0F4EE682EC5A0FD551EF7C(L_3, (&V_1), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* L_6;
		L_6 = GenericWriter_1_get_WriteAutoPack_m75A044506CA9CD50CEC639333A3738BF2CC69A58_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_6;
		Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* L_7 = V_3;
		V_4 = (bool)((((RuntimeObject*)(Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_9;
		L_9 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17E7493BC38A0257563CFB0D03D4E46D9F33AC29((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_9, NULL);
		goto IL_004e;
	}

IL_0044:
	{
		Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* L_10 = V_3;
		int32_t L_11 = ___0_value;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Action_3_Invoke_mA46224A2F7AD3E62E3B89CD7251171EC811B8235_inline(L_10, __this, L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_004e:
	{
		goto IL_007f;
	}

IL_0051:
	{
		Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* L_13;
		L_13 = GenericWriter_1_get_Write_m8FAF6FDBB69403902FF46DB764C995B8849C80CC_inline(il2cpp_rgctx_method(method->rgctx_data, 9));
		V_5 = L_13;
		Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* L_14 = V_5;
		V_6 = (bool)((((RuntimeObject*)(Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_16;
		L_16 = Writer_U3CWriteU3Eg__GetLogMessageU7C82_0_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m17E7493BC38A0257563CFB0D03D4E46D9F33AC29((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
		Writer_LogError_mA62BD0EE622F971B9CA8015107A38D6C749E5EF4(__this, L_16, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* L_17 = V_5;
		int32_t L_18 = ___0_value;
		NullCheck(L_17);
		Action_2_Invoke_m34F7A820B67C2386E92FA7A38D53050ABB6E6A96_inline(L_17, __this, L_18, il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_007e:
	{
	}

IL_007f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAE8611944BD58213A1AC8A64CDCE9116B20DF815_gshared_inline (List_1_tD4F53EFD3E80A7C217F5C23281888230C32D5AE4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_3_t034981816E97D7D05569C188B3229941BC10EB32* GeneratedComparer_1_get_Compare_mD39BF9529FF52BF479C5D7EF3B223E7CAD0830B2_gshared_inline (const RuntimeMethod* method) 
{
	{
		Func_3_t034981816E97D7D05569C188B3229941BC10EB32* L_0 = ((GeneratedComparer_1_tF9E5DE8A02D62E3A49C0A5B576F259D525AAFC9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CCompareU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* GeneratedComparer_1_get_IsDefault_m1FD722F0721A4C197640EBA973A7384D0C797DB3_gshared_inline (const RuntimeMethod* method) 
{
	{
		Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* L_0 = ((GeneratedComparer_1_tF9E5DE8A02D62E3A49C0A5B576F259D525AAFC9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CIsDefaultU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mEC31A1FAC87C5941D279B2E56A8E93111251971E_gshared_inline (Func_2_tF3869BA488D157B8691CD7EC693EA5B17BD741C5* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mFE3FE260CDDADAFA42A2A36325A266D1A06C25D5_gshared_inline (Func_3_t034981816E97D7D05569C188B3229941BC10EB32* __this, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___0_arg1, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, MoveData_t0145A401DE777DAE6CAF6BBC04FB50A3F41541FF, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAB5412E86AE151DA2816A5BE39C8ED9536F18DEA_gshared_inline (List_1_t6EEA9F019C9286822F752C5F7B3CBEE04D7DF72F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* GeneratedComparer_1_get_Compare_m6139CC727FCEB9CA92362B870474CB727B4149C7_gshared_inline (const RuntimeMethod* method) 
{
	{
		Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* L_0 = ((GeneratedComparer_1_t567712E52A79262D62EAAAAC0C8261E9675409A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CCompareU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* GeneratedComparer_1_get_IsDefault_m49630871A467E37723F9047E1B74452EA0624300_gshared_inline (const RuntimeMethod* method) 
{
	{
		Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* L_0 = ((GeneratedComparer_1_t567712E52A79262D62EAAAAC0C8261E9675409A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CIsDefaultU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mA1634CED91C0529D40733438A7F732E4F65837CF_gshared_inline (Func_2_t0D4AA0F6FC9AF0730FC8E51BFA74B27DB6FDAB94* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mB384F8CE56A3AAEF6584213D7D5A357609931BFE_gshared_inline (Func_3_tBF2276ADC12B3DDB7D1600849265A266FE2321CF* __this, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___0_arg1, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, MoveData_t7C53CB5878C08884AE0F8BCB96251823CC3F4F6C, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7CC7E1A36E6D648E9E16E63ABA8DAF754EA58477_gshared_inline (List_1_t78F7C4FE39B223190AEF854129DEEF677EECC373* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* GeneratedComparer_1_get_Compare_m5D1AEF9AB68C975730C2DEA8750E0390CE924F2B_gshared_inline (const RuntimeMethod* method) 
{
	{
		Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* L_0 = ((GeneratedComparer_1_tF2B80D261186468C5F9D0E469F5A202DFE691FB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CCompareU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* GeneratedComparer_1_get_IsDefault_m7B8DBEB19EBEC9A46680374BF72492962774450A_gshared_inline (const RuntimeMethod* method) 
{
	{
		Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* L_0 = ((GeneratedComparer_1_tF2B80D261186468C5F9D0E469F5A202DFE691FB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CIsDefaultU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mE5F1736D3C7B664BE975ACC9EE78C63E4D9012D9_gshared_inline (Func_2_t2CDB4939F32CE4E01489CDE017E905704436D3B8* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m0E5E2EA8CD8CC720DBCEA4719C9E3CE327C285CE_gshared_inline (Func_3_t67194D2902A3C9D2044EB6E1FDFCE70F6A512F79* __this, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___0_arg1, MoveData_t753DE366344980726A0DE776C583226ADF9B8364 ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, MoveData_t753DE366344980726A0DE776C583226ADF9B8364, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_processor;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3;
		L_3 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		RuntimeObject* L_4 = ___0_processor;
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)il2cpp_codegen_get_instance_field_data_pointer(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 1),0)))), (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_4);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_6 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		V_1 = L_6;
		goto IL_003e;
	}

IL_003e:
	{
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WritePackedWhole_m38C94586EB23F531727FA068F01AC2CE817456C4_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		uint64_t L_0 = ___0_value;
		V_0 = (bool)((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)128)))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____buffer;
		int32_t L_3 = __this->___Position;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		uint64_t L_6 = ___0_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int64_t)((int64_t)L_6&((int64_t)((int32_t)127))))));
		goto IL_079f;
	}

IL_003b:
	{
		uint64_t L_7 = ___0_value;
		V_2 = (bool)((!(((uint64_t)L_7) >= ((uint64_t)((int64_t)((int32_t)16384)))))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_009c;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->____buffer;
		int32_t L_10 = __this->___Position;
		V_1 = L_10;
		int32_t L_11 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_1;
		uint64_t L_13 = ___0_value;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)((int64_t)L_13&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____buffer;
		int32_t L_15 = __this->___Position;
		V_1 = L_15;
		int32_t L_16 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_1;
		uint64_t L_18 = ___0_value;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_18>>7))&((int64_t)((int32_t)127))))));
		goto IL_079f;
	}

IL_009c:
	{
		uint64_t L_19 = ___0_value;
		V_3 = (bool)((!(((uint64_t)L_19) >= ((uint64_t)((int64_t)((int32_t)2097152)))))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0125;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->____buffer;
		int32_t L_22 = __this->___Position;
		V_1 = L_22;
		int32_t L_23 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = V_1;
		uint64_t L_25 = ___0_value;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)((int64_t)L_25&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->____buffer;
		int32_t L_27 = __this->___Position;
		V_1 = L_27;
		int32_t L_28 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_1;
		uint64_t L_30 = ___0_value;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_30>>7))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->____buffer;
		int32_t L_32 = __this->___Position;
		V_1 = L_32;
		int32_t L_33 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = V_1;
		uint64_t L_35 = ___0_value;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_35>>((int32_t)14)))&((int64_t)((int32_t)127))))));
		goto IL_079f;
	}

IL_0125:
	{
		uint64_t L_36 = ___0_value;
		V_4 = (bool)((!(((uint64_t)L_36) >= ((uint64_t)((int64_t)((int32_t)268435456)))))? 1 : 0);
		bool L_37 = V_4;
		if (!L_37)
		{
			goto IL_01db;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->____buffer;
		int32_t L_39 = __this->___Position;
		V_1 = L_39;
		int32_t L_40 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = V_1;
		uint64_t L_42 = ___0_value;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)((int64_t)L_42&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->____buffer;
		int32_t L_44 = __this->___Position;
		V_1 = L_44;
		int32_t L_45 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_1;
		uint64_t L_47 = ___0_value;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_47>>7))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->____buffer;
		int32_t L_49 = __this->___Position;
		V_1 = L_49;
		int32_t L_50 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_1;
		uint64_t L_52 = ___0_value;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_52>>((int32_t)14)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->____buffer;
		int32_t L_54 = __this->___Position;
		V_1 = L_54;
		int32_t L_55 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_1;
		uint64_t L_57 = ___0_value;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_57>>((int32_t)21)))&((int64_t)((int32_t)127))))));
		goto IL_079f;
	}

IL_01db:
	{
		uint64_t L_58 = ___0_value;
		V_5 = (bool)((!(((uint64_t)L_58) >= ((uint64_t)((int64_t)4294967296LL))))? 1 : 0);
		bool L_59 = V_5;
		if (!L_59)
		{
			goto IL_02bc;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->____buffer;
		int32_t L_61 = __this->___Position;
		V_1 = L_61;
		int32_t L_62 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t L_63 = V_1;
		uint64_t L_64 = ___0_value;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)((int64_t)L_64&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->____buffer;
		int32_t L_66 = __this->___Position;
		V_1 = L_66;
		int32_t L_67 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_1;
		uint64_t L_69 = ___0_value;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_69>>7))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = __this->____buffer;
		int32_t L_71 = __this->___Position;
		V_1 = L_71;
		int32_t L_72 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = V_1;
		uint64_t L_74 = ___0_value;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_74>>((int32_t)14)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = __this->____buffer;
		int32_t L_76 = __this->___Position;
		V_1 = L_76;
		int32_t L_77 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int32_t L_78 = V_1;
		uint64_t L_79 = ___0_value;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_79>>((int32_t)21)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = __this->____buffer;
		int32_t L_81 = __this->___Position;
		V_1 = L_81;
		int32_t L_82 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = V_1;
		uint64_t L_84 = ___0_value;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_84>>((int32_t)28)))&((int64_t)((int32_t)15))))));
		goto IL_079f;
	}

IL_02bc:
	{
		uint64_t L_85 = ___0_value;
		V_6 = (bool)((!(((uint64_t)L_85) >= ((uint64_t)((int64_t)1099511627776LL))))? 1 : 0);
		bool L_86 = V_6;
		if (!L_86)
		{
			goto IL_03c5;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = __this->____buffer;
		int32_t L_88 = __this->___Position;
		V_1 = L_88;
		int32_t L_89 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_1;
		uint64_t L_91 = ___0_value;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)((int64_t)L_91&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = __this->____buffer;
		int32_t L_93 = __this->___Position;
		V_1 = L_93;
		int32_t L_94 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_94, 1));
		int32_t L_95 = V_1;
		uint64_t L_96 = ___0_value;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_96>>7))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = __this->____buffer;
		int32_t L_98 = __this->___Position;
		V_1 = L_98;
		int32_t L_99 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_99, 1));
		int32_t L_100 = V_1;
		uint64_t L_101 = ___0_value;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_101>>((int32_t)14)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = __this->____buffer;
		int32_t L_103 = __this->___Position;
		V_1 = L_103;
		int32_t L_104 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_104, 1));
		int32_t L_105 = V_1;
		uint64_t L_106 = ___0_value;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_105), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_106>>((int32_t)21)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = __this->____buffer;
		int32_t L_108 = __this->___Position;
		V_1 = L_108;
		int32_t L_109 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_109, 1));
		int32_t L_110 = V_1;
		uint64_t L_111 = ___0_value;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_110), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)16))|((int64_t)(((int64_t)((uint64_t)L_111>>((int32_t)28)))&((int64_t)((int32_t)15))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = __this->____buffer;
		int32_t L_113 = __this->___Position;
		V_1 = L_113;
		int32_t L_114 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_114, 1));
		int32_t L_115 = V_1;
		uint64_t L_116 = ___0_value;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_116>>((int32_t)32)))&((int64_t)((int32_t)255))))));
		goto IL_079f;
	}

IL_03c5:
	{
		uint64_t L_117 = ___0_value;
		V_7 = (bool)((!(((uint64_t)L_117) >= ((uint64_t)((int64_t)281474976710656LL))))? 1 : 0);
		bool L_118 = V_7;
		if (!L_118)
		{
			goto IL_04f2;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = __this->____buffer;
		int32_t L_120 = __this->___Position;
		V_1 = L_120;
		int32_t L_121 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_121, 1));
		int32_t L_122 = V_1;
		uint64_t L_123 = ___0_value;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(L_122), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)((int64_t)L_123&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = __this->____buffer;
		int32_t L_125 = __this->___Position;
		V_1 = L_125;
		int32_t L_126 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_126, 1));
		int32_t L_127 = V_1;
		uint64_t L_128 = ___0_value;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_127), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_128>>7))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = __this->____buffer;
		int32_t L_130 = __this->___Position;
		V_1 = L_130;
		int32_t L_131 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_131, 1));
		int32_t L_132 = V_1;
		uint64_t L_133 = ___0_value;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_133>>((int32_t)14)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = __this->____buffer;
		int32_t L_135 = __this->___Position;
		V_1 = L_135;
		int32_t L_136 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_136, 1));
		int32_t L_137 = V_1;
		uint64_t L_138 = ___0_value;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(L_137), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_138>>((int32_t)21)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = __this->____buffer;
		int32_t L_140 = __this->___Position;
		V_1 = L_140;
		int32_t L_141 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_141, 1));
		int32_t L_142 = V_1;
		uint64_t L_143 = ___0_value;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_142), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)32))|((int64_t)(((int64_t)((uint64_t)L_143>>((int32_t)28)))&((int64_t)((int32_t)15))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = __this->____buffer;
		int32_t L_145 = __this->___Position;
		V_1 = L_145;
		int32_t L_146 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_146, 1));
		int32_t L_147 = V_1;
		uint64_t L_148 = ___0_value;
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(L_147), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_148>>((int32_t)32)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149 = __this->____buffer;
		int32_t L_150 = __this->___Position;
		V_1 = L_150;
		int32_t L_151 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_151, 1));
		int32_t L_152 = V_1;
		uint64_t L_153 = ___0_value;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_152), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_153>>((int32_t)40)))&((int64_t)((int32_t)255))))));
		goto IL_079f;
	}

IL_04f2:
	{
		uint64_t L_154 = ___0_value;
		V_8 = (bool)((!(((uint64_t)L_154) >= ((uint64_t)((int64_t)72057594037927936LL))))? 1 : 0);
		bool L_155 = V_8;
		if (!L_155)
		{
			goto IL_0643;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_156 = __this->____buffer;
		int32_t L_157 = __this->___Position;
		V_1 = L_157;
		int32_t L_158 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_158, 1));
		int32_t L_159 = V_1;
		uint64_t L_160 = ___0_value;
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(L_159), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)((int64_t)L_160&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_161 = __this->____buffer;
		int32_t L_162 = __this->___Position;
		V_1 = L_162;
		int32_t L_163 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_163, 1));
		int32_t L_164 = V_1;
		uint64_t L_165 = ___0_value;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_165>>7))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_166 = __this->____buffer;
		int32_t L_167 = __this->___Position;
		V_1 = L_167;
		int32_t L_168 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_168, 1));
		int32_t L_169 = V_1;
		uint64_t L_170 = ___0_value;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(L_169), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_170>>((int32_t)14)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_171 = __this->____buffer;
		int32_t L_172 = __this->___Position;
		V_1 = L_172;
		int32_t L_173 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_173, 1));
		int32_t L_174 = V_1;
		uint64_t L_175 = ___0_value;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_175>>((int32_t)21)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = __this->____buffer;
		int32_t L_177 = __this->___Position;
		V_1 = L_177;
		int32_t L_178 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_178, 1));
		int32_t L_179 = V_1;
		uint64_t L_180 = ___0_value;
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(L_179), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)48))|((int64_t)(((int64_t)((uint64_t)L_180>>((int32_t)28)))&((int64_t)((int32_t)15))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_181 = __this->____buffer;
		int32_t L_182 = __this->___Position;
		V_1 = L_182;
		int32_t L_183 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_183, 1));
		int32_t L_184 = V_1;
		uint64_t L_185 = ___0_value;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(L_184), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_185>>((int32_t)32)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_186 = __this->____buffer;
		int32_t L_187 = __this->___Position;
		V_1 = L_187;
		int32_t L_188 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_188, 1));
		int32_t L_189 = V_1;
		uint64_t L_190 = ___0_value;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(L_189), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_190>>((int32_t)40)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_191 = __this->____buffer;
		int32_t L_192 = __this->___Position;
		V_1 = L_192;
		int32_t L_193 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_193, 1));
		int32_t L_194 = V_1;
		uint64_t L_195 = ___0_value;
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(L_194), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_195>>((int32_t)48)))&((int64_t)((int32_t)255))))));
		goto IL_079f;
	}

IL_0643:
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, ((int32_t)9), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_196 = __this->____buffer;
		int32_t L_197 = __this->___Position;
		V_1 = L_197;
		int32_t L_198 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int32_t L_199 = V_1;
		uint64_t L_200 = ___0_value;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(L_199), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)((int64_t)L_200&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201 = __this->____buffer;
		int32_t L_202 = __this->___Position;
		V_1 = L_202;
		int32_t L_203 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_203, 1));
		int32_t L_204 = V_1;
		uint64_t L_205 = ___0_value;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(L_204), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_205>>7))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_206 = __this->____buffer;
		int32_t L_207 = __this->___Position;
		V_1 = L_207;
		int32_t L_208 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_208, 1));
		int32_t L_209 = V_1;
		uint64_t L_210 = ___0_value;
		NullCheck(L_206);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(L_209), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_210>>((int32_t)14)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_211 = __this->____buffer;
		int32_t L_212 = __this->___Position;
		V_1 = L_212;
		int32_t L_213 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_213, 1));
		int32_t L_214 = V_1;
		uint64_t L_215 = ___0_value;
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(L_214), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)128))|((int64_t)(((int64_t)((uint64_t)L_215>>((int32_t)21)))&((int64_t)((int32_t)127))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = __this->____buffer;
		int32_t L_217 = __this->___Position;
		V_1 = L_217;
		int32_t L_218 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_218, 1));
		int32_t L_219 = V_1;
		uint64_t L_220 = ___0_value;
		NullCheck(L_216);
		(L_216)->SetAt(static_cast<il2cpp_array_size_t>(L_219), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((int32_t)64))|((int64_t)(((int64_t)((uint64_t)L_220>>((int32_t)28)))&((int64_t)((int32_t)15))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_221 = __this->____buffer;
		int32_t L_222 = __this->___Position;
		V_1 = L_222;
		int32_t L_223 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_223, 1));
		int32_t L_224 = V_1;
		uint64_t L_225 = ___0_value;
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(L_224), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_225>>((int32_t)32)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_226 = __this->____buffer;
		int32_t L_227 = __this->___Position;
		V_1 = L_227;
		int32_t L_228 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_228, 1));
		int32_t L_229 = V_1;
		uint64_t L_230 = ___0_value;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(L_229), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_230>>((int32_t)40)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_231 = __this->____buffer;
		int32_t L_232 = __this->___Position;
		V_1 = L_232;
		int32_t L_233 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_233, 1));
		int32_t L_234 = V_1;
		uint64_t L_235 = ___0_value;
		NullCheck(L_231);
		(L_231)->SetAt(static_cast<il2cpp_array_size_t>(L_234), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_235>>((int32_t)48)))&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_236 = __this->____buffer;
		int32_t L_237 = __this->___Position;
		V_1 = L_237;
		int32_t L_238 = V_1;
		__this->___Position = ((int32_t)il2cpp_codegen_add(L_238, 1));
		int32_t L_239 = V_1;
		uint64_t L_240 = ___0_value;
		NullCheck(L_236);
		(L_236)->SetAt(static_cast<il2cpp_array_size_t>(L_239), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)((uint64_t)L_240>>((int32_t)56)))&((int64_t)((int32_t)255))))));
	}

IL_079f:
	{
		int32_t L_241 = __this->___Length;
		int32_t L_242 = __this->___Position;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_243;
		L_243 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_241, L_242, NULL);
		__this->___Length = L_243;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_WriteUInt32_mDAF20969906045C6567ECA06622A8A24BF5DA07A_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, uint32_t ___0_value, int32_t ___1_packType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterExtensions_t42D49453F9F4B2FCE4CE8F04DCD92BA1F7CA7C2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___1_packType;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline(__this, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____buffer;
		uint32_t L_3 = ___0_value;
		int32_t* L_4 = (int32_t*)(&__this->___Position);
		il2cpp_codegen_runtime_class_init_inline(WriterExtensions_t42D49453F9F4B2FCE4CE8F04DCD92BA1F7CA7C2D_il2cpp_TypeInfo_var);
		WriterExtensions_WriteUInt32_m8E0B48B914E870668BDDC1974C9C77D765559BD5(L_2, L_3, L_4, NULL);
		int32_t L_5 = __this->___Length;
		int32_t L_6 = __this->___Position;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_5, L_6, NULL);
		__this->___Length = L_7;
		goto IL_004a;
	}

IL_003f:
	{
		uint32_t L_8 = ___0_value;
		Writer_WritePackedWhole_m38C94586EB23F531727FA068F01AC2CE817456C4_inline(__this, ((int64_t)(uint64_t)L_8), NULL);
	}

IL_004a:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Writer_EnsureBufferLength_m16E0B6B2324D10373616117F8FF70DC401B67C9F_inline (Writer_tCAA1EDF933A12E7970BA243F6B87AEAA551FF02B* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___Position;
		int32_t L_1 = ___0_count;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____buffer;
		NullCheck(L_2);
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) > ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer;
		NullCheck(L_4);
		int32_t L_5 = ___0_count;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_4)->max_length)), 2)), L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)(&__this->____buffer);
		int32_t L_7 = V_1;
		Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297(L_6, L_7, Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* GenericWriter_1_get_WriteAutoPack_mCAA6CAAC1AB12D88FF651F26885F35FBD255354C_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_tC588F65615985B3F9CB64B11471A676B24F17C82* L_0 = ((GenericWriter_1_t584D6E2AB181974F6BB4F0B1154282D96AB2ED2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m34CDA3BC94B7F84C0679193E385E45BCAAC6509E_gshared_inline (Action_3_t0262FC6270B6E7F95ACEC087FB5BBE5F0A51EDB4* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* GenericWriter_1_get_Write_mF4969C87016962534ED7B4298A49E7C974BD1D2D_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_t02F825E5836331E5028F466633AC99D6659AB01E* L_0 = ((GenericWriter_1_t584D6E2AB181974F6BB4F0B1154282D96AB2ED2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* GenericWriter_1_get_WriteAutoPack_m75A044506CA9CD50CEC639333A3738BF2CC69A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_3_t482D101BAE5D63D859C67B06E87871FDCD8DDDE4* L_0 = ((GenericWriter_1_tCF918059BCC8EE30283493A3CF7403C3AFC29668_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteAutoPackU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_m18A634F0CA1D9CEEF3A3D8DB6F0FD0F2F929EB02_gshared_inline (Action_3_t69C2D45C6C197D4070F949BFDCB7405529C4DA29* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* GenericWriter_1_get_Write_m8FAF6FDBB69403902FF46DB764C995B8849C80CC_gshared_inline (const RuntimeMethod* method) 
{
	{
		Action_2_t9610E4BF8A10AEBF0D45E6762A25A40A6F0855BE* L_0 = ((GenericWriter_1_tCF918059BCC8EE30283493A3CF7403C3AFC29668_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CWriteU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m88484A213EB00FF7254FE3DB935BFB06DD3F5753_gshared_inline (Action_2_tAC461AE4F7B507965CE2E6A32853473F8C02CD75* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
