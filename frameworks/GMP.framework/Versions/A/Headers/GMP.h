// Objective-C API for talking to github.com/evilnode/cposc-go/GMP Go package.
//   gobind -lang=objc github.com/evilnode/cposc-go/GMP
//
// File is generated by gobind. Do not edit.

#ifndef __GoGMP_H__
#define __GoGMP_H__

#include <Foundation/Foundation.h>

FOUNDATION_EXPORT void GoGMPClearRequestContext();

FOUNDATION_EXPORT void GoGMPEvent();

FOUNDATION_EXPORT void GoGMPPageView();

FOUNDATION_EXPORT void GoGMPSetClearsContextAfterRequest(BOOL clears);

FOUNDATION_EXPORT void GoGMPSetClientIdentifier(NSString* identifier);

FOUNDATION_EXPORT void GoGMPSetDefaultParam(int key, NSString* value);

FOUNDATION_EXPORT void GoGMPSetParam(int key, NSString* value);

FOUNDATION_EXPORT void GoGMPTestEvent();

FOUNDATION_EXPORT void GoGMPTestPageView();

#endif
