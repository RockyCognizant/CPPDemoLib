#import "CPPDemoLib.h"

@implementation CPPDemoLib
+ (void)setCplusplusTerminateHandler:(CPPExceptionHandler)handler {
    CPPTerminateSetHandler(handler);
}
@end
