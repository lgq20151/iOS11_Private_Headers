/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAssertion : NSObject {
    NSString * _identifier;
    bool  _invalidateWhenBackgrounded;
    id /* block */  _invalidationHandler;
    NSLock * _invalidationLock;
    NSString * _reason;
    long long  _state;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool invalidateWhenBackgrounded;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic) long long state;
@property (nonatomic, readonly) unsigned long long type;

+ (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
+ (bool)assertionExistsOfType:(unsigned long long)arg1;
+ (void)preheatConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;
- (void)invalidate;
- (bool)invalidateWhenBackgrounded;
- (id /* block */)invalidationHandler;
- (id)reason;
- (void)setIdentifier:(id)arg1;
- (void)setInvalidateWhenBackgrounded:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (unsigned long long)type;

@end
