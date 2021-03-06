/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {
    bool  __automatic_invalidation_invalidated;
    int  __automatic_invalidation_retainCount;
    _UIViewServiceFencingControlProxy * _fencingControlProxy;
    int  _remotePID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3;

- (int)__automatic_invalidation_logic;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
