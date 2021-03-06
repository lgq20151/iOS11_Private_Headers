/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSProgressWithRemoteParent : NSProgress {
    NSXPCConnection * _parentConnection;
    unsigned long long  _sequence;
}

@property (retain) NSXPCConnection *parentConnection;
@property unsigned long long sequence;

- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(bool)arg3;
- (void)_updateFractionCompleted:(id)arg1;
- (void)dealloc;
- (id)parentConnection;
- (unsigned long long)sequence;
- (void)setParentConnection:(id)arg1;
- (void)setSequence:(unsigned long long)arg1;

@end
