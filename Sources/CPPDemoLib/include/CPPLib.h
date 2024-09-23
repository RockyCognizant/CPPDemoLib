#ifdef __cplusplus
extern "C" {
#endif

typedef void ( *CPPExceptionHandler )();
void CPPTerminateSetHandler(CPPExceptionHandler);

#ifdef __cplusplus
}
#endif
