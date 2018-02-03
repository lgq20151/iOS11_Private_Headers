/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXExtensionContextXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    FPXExtensionContext * _context;
    id  _exportedObject;
    NSXPCInterface * _interface;
    NSString * _serviceName;
}

@property (nonatomic, retain) FPXExtensionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) id exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCInterface *interface;
@property (nonatomic, copy) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)exportedObject;
- (id)interface;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)serviceName;
- (void)setContext:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
