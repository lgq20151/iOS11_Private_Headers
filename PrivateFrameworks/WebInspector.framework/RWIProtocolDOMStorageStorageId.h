/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (nonatomic) bool isLocalStorage;
@property (nonatomic, copy) NSString *securityOrigin;

- (id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(bool)arg2;
- (bool)isLocalStorage;
- (id)securityOrigin;
- (void)setIsLocalStorage:(bool)arg1;
- (void)setSecurityOrigin:(id)arg1;

@end
