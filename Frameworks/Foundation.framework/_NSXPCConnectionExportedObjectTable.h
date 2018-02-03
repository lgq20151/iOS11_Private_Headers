/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionExportedObjectTable : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned long long  _next;
    struct __CFDictionary { } * _objectToProxyNumber;
    _NSXPCConnectionExportInfo * _proxy1;
    struct __CFDictionary { } * _proxyNumberToObject;
    NSObject<OS_dispatch_group> * _replyGroup;
    bool  _valid;
}

- (void)dealloc;
- (void)decrementOutstandingReplyCount;
- (id)description;
- (id)exportedObjectForProxyNumber:(unsigned long long)arg1;
- (void)incrementOutstandingReplyCount;
- (id)init;
- (id)interfaceForProxyNumber:(unsigned long long)arg1;
- (void)invalidate;
- (unsigned long long)proxyNumberForExportedObject:(id)arg1 interface:(id)arg2;
- (void)receivedReleaseForProxyNumber:(unsigned long long)arg1 userQueue:(id)arg2;
- (void)releaseExportedObject:(unsigned long long)arg1;
- (void)setExportedObject:(id)arg1 forProxyNumber:(unsigned long long)arg2;
- (void)setInterface:(id)arg1 forProxyNumber:(unsigned long long)arg2;

@end
