/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SecSOSStatus : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (id)initWithEndpoint:(id)arg1;
- (void)setConnection:(id)arg1;

@end
