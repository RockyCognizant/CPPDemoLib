#import <Foundation/Foundation.h>
#import "CPPLib.h"

@interface CPPDemoLib: NSObject
+ (void)setCplusplusTerminateHandler:(CPPExceptionHandler)handler;
@end
