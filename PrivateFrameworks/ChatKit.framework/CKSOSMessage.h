/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSOSMessage : NSObject <NSCopying> {
    id /* block */  _failureBlock;
    NSArray * _handles;
    CLLocation * _location;
    NSString * _message;
    NSArray * _recipients;
    bool  _useStandalone;
}

@property (nonatomic, copy) id /* block */ failureBlock;
@property (getter=handles, nonatomic, copy) NSArray *handles;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic) bool useStandalone;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)failureBlock;
- (id)handles;
- (id)initWithMessage:(id)arg1 recipients:(id)arg2;
- (id)location;
- (id)message;
- (id)recipients;
- (void)setFailureBlock:(id /* block */)arg1;
- (void)setHandles:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setUseStandalone:(bool)arg1;
- (bool)useStandalone;

@end
