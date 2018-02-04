/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKUserInitiatedAction : NSObject <WKObject> {
    struct ObjectStorage<API::UserInitiatedAction> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _userInitiatedAction;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (getter=isConsumed, nonatomic, readonly) bool consumed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)consume;
- (void)dealloc;
- (id)description;
- (bool)isConsumed;

@end