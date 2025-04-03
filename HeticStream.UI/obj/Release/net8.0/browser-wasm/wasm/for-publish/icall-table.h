#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
192,
202,
203,
204,
205,
206,
207,
208,
209,
210,
213,
214,
310,
311,
312,
340,
341,
342,
362,
363,
364,
365,
482,
483,
484,
487,
523,
524,
525,
526,
530,
532,
534,
536,
541,
549,
550,
551,
552,
553,
554,
555,
556,
557,
558,
559,
560,
609,
610,
658,
659,
726,
732,
735,
737,
742,
743,
745,
746,
750,
751,
753,
755,
756,
759,
760,
761,
764,
766,
769,
771,
773,
782,
846,
848,
850,
860,
861,
862,
863,
865,
872,
873,
874,
875,
876,
884,
885,
886,
890,
891,
893,
895,
1093,
1276,
1277,
8022,
8023,
8025,
8026,
8027,
8028,
8029,
8031,
8033,
8035,
8036,
8047,
8049,
8054,
8056,
8058,
8060,
8110,
8116,
8117,
8119,
8120,
8121,
8122,
8123,
8125,
8127,
9299,
9303,
9305,
9306,
9307,
9308,
9620,
9621,
9622,
9623,
9644,
9645,
9646,
9648,
9698,
9699,
9784,
9786,
9797,
9798,
9799,
9800,
9801,
10216,
10220,
10221,
10247,
10265,
10272,
10279,
10290,
10293,
10309,
10383,
10392,
10394,
10395,
10402,
10416,
10435,
10436,
10444,
10446,
10452,
10453,
10456,
10461,
10469,
10470,
10477,
10479,
10490,
10493,
10496,
10497,
10498,
10508,
10516,
10522,
10523,
10524,
10526,
10527,
10545,
10547,
10561,
10578,
10605,
10634,
10635,
11091,
11092,
11125,
11199,
11200,
11367,
11368,
11375,
11378,
11449,
11822,
11823,
11942,
11947,
11957,
13374,
13395,
13397,
13399,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_AddPressure (uint64_t);
void ves_icall_System_GC_RemovePressure (uint64_t);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Sin (float);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_StartInternal_raw (int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_AssemblyExtensions_ApplyUpdateEnabled (int);
int ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw (int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 192,
ves_icall_System_Array_InternalCreate,
// token 202,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 203,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 204,
ves_icall_System_Array_CanChangePrimitive,
// token 205,
ves_icall_System_Array_FastCopy,
// token 206,
ves_icall_System_Array_GetLengthInternal_raw,
// token 207,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 208,
ves_icall_System_Array_GetGenericValue_icall,
// token 209,
ves_icall_System_Array_GetValueImpl_raw,
// token 210,
ves_icall_System_Array_SetGenericValue_icall,
// token 213,
ves_icall_System_Array_SetValueImpl_raw,
// token 214,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 310,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 311,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 312,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 340,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 341,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 342,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 362,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 363,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 364,
ves_icall_System_Enum_InternalGetCorElementType,
// token 365,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 482,
ves_icall_System_Environment_get_ProcessorCount,
// token 483,
ves_icall_System_Environment_get_TickCount,
// token 484,
ves_icall_System_Environment_get_TickCount64,
// token 487,
ves_icall_System_Environment_FailFast_raw,
// token 523,
ves_icall_System_GC_AddPressure,
// token 524,
ves_icall_System_GC_RemovePressure,
// token 525,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 526,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 530,
ves_icall_System_GC_SuppressFinalize_raw,
// token 532,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 534,
ves_icall_System_GC_GetGCMemoryInfo,
// token 536,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 541,
ves_icall_System_Object_MemberwiseClone_raw,
// token 549,
ves_icall_System_Math_Atan2,
// token 550,
ves_icall_System_Math_Ceiling,
// token 551,
ves_icall_System_Math_Cos,
// token 552,
ves_icall_System_Math_Exp,
// token 553,
ves_icall_System_Math_Floor,
// token 554,
ves_icall_System_Math_Log,
// token 555,
ves_icall_System_Math_Log10,
// token 556,
ves_icall_System_Math_Pow,
// token 557,
ves_icall_System_Math_Sin,
// token 558,
ves_icall_System_Math_Sqrt,
// token 559,
ves_icall_System_Math_Tan,
// token 560,
ves_icall_System_Math_ModF,
// token 609,
ves_icall_System_MathF_Cos,
// token 610,
ves_icall_System_MathF_Sin,
// token 658,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 659,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 726,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 732,
ves_icall_RuntimeType_make_array_type_raw,
// token 735,
ves_icall_RuntimeType_make_byref_type_raw,
// token 737,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 742,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 743,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 745,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 746,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 750,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 751,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 753,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 755,
ves_icall_System_RuntimeType_getFullName_raw,
// token 756,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 759,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 760,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 761,
ves_icall_RuntimeType_GetFields_native_raw,
// token 764,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 766,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 769,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 771,
ves_icall_RuntimeType_GetName_raw,
// token 773,
ves_icall_RuntimeType_GetNamespace_raw,
// token 782,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 846,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 848,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 850,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 860,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 861,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 862,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 863,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 865,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 872,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 873,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 874,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 875,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 876,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 884,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 885,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 886,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 890,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 891,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 893,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 895,
ves_icall_System_String_FastAllocateString_raw,
// token 1093,
ves_icall_System_Type_internal_from_handle_raw,
// token 1276,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1277,
ves_icall_System_ValueType_Equals_raw,
// token 8022,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8023,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8025,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8026,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8027,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8028,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8029,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8031,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8033,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8035,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8036,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8047,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8049,
mono_monitor_exit_icall_raw,
// token 8054,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8056,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8058,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8060,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8110,
ves_icall_System_Threading_Thread_StartInternal_raw,
// token 8116,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8117,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8119,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8120,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8121,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8122,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8123,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8125,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8127,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9299,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9303,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9305,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9306,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9307,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9308,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9620,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9621,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9622,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9623,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9644,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9645,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9646,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9648,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9698,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9699,
ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw,
// token 9784,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9786,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 9797,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9798,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9799,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9800,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9801,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10216,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10220,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10221,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10247,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10265,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10272,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10279,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10290,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10293,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10309,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 10383,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10392,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10394,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10395,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10402,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10416,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10435,
ves_icall_reflection_get_token_raw,
// token 10436,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10444,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10446,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10452,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10453,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10456,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10461,
ves_icall_reflection_get_token_raw,
// token 10469,
ves_icall_get_method_info_raw,
// token 10470,
ves_icall_get_method_attributes,
// token 10477,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10479,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10490,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw,
// token 10493,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10496,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10497,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10498,
ves_icall_reflection_get_token_raw,
// token 10508,
ves_icall_InternalInvoke_raw,
// token 10516,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10522,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10523,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10524,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10526,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10527,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10545,
ves_icall_InvokeClassConstructor_raw,
// token 10547,
ves_icall_InternalInvoke_raw,
// token 10561,
ves_icall_reflection_get_token_raw,
// token 10578,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10605,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10634,
ves_icall_reflection_get_token_raw,
// token 10635,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11091,
ves_icall_AssemblyExtensions_ApplyUpdateEnabled,
// token 11092,
ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw,
// token 11125,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11199,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11200,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11367,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11368,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11375,
ves_icall_ModuleBuilder_getToken_raw,
// token 11378,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11449,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11822,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11823,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11942,
ves_icall_System_Diagnostics_Debugger_Log,
// token 11947,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11957,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 13374,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13395,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13397,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13399,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
0,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
