/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject <AVOutputContextManagerImpl> {
    struct OpaqueFigEndpointUIAgent { } * _agent;
    AVOutputContextManager * _parentManager;
    AVWeakReference * _weakObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property AVOutputContextManager *parentOutputContextManager;
@property (readonly) Class superclass;

+ (struct OpaqueFigEndpointUIAgent { }*)copySharedEndpointUIAgent;

- (void).cxx_destruct;
- (void)_showErrorPromptForRouteDescriptor:(struct __CFDictionary { }*)arg1 reason:(struct __CFString { }*)arg2;
- (void)dealloc;
- (id)initWithEndpointUIAgent:(struct OpaqueFigEndpointUIAgent { }*)arg1;
- (id)parentOutputContextManager;
- (void)setParentOutputContextManager:(id)arg1;

@end
