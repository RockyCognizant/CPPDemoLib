#include <iostream>
#include "CPPLib.h"

using namespace std;

void CPPTerminateSetHandler(CPPExceptionHandler handler) {
    set_terminate(handler);
}
