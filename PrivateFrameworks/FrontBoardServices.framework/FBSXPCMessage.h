/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSXPCMessage : NSObject {
    NSObject<OS_xpc_object> * _payload;
}

@property (nonatomic, readonly, retain) NSObject<OS_xpc_object> *payload;

+ (id)message;
+ (id)messageWithPacker:(id /* block */)arg1;
+ (id)messageWithPayload:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithMessagePacker:(id /* block */)arg1;
- (id)initWithMessagePayload:(id)arg1;
- (id)payload;
- (void)sendReplyMessageWithPacker:(id /* block */)arg1;

@end
