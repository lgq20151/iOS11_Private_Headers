/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTransientPassRequest : NSObject {
    NPKTransientPassAssertionConnection * _owningConnection;
    bool  _serviceModeRequested;
    NSString * _uniqueID;
}

@property (nonatomic) NPKTransientPassAssertionConnection *owningConnection;
@property (nonatomic) bool serviceModeRequested;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (id)owningConnection;
- (bool)serviceModeRequested;
- (void)setOwningConnection:(id)arg1;
- (void)setServiceModeRequested:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;

@end
