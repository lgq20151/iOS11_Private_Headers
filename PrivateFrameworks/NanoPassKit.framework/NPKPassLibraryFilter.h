/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassLibraryFilter : NSObject {
    NSXPCConnection * _connection;
    PKEntitlementWhitelist * _whitelist;
}

@property (readonly) bool allowsSilentAdd;
@property (retain) NSXPCConnection *connection;
@property (retain) PKEntitlementWhitelist *whitelist;

- (void).cxx_destruct;
- (bool)_entitledForObject:(id)arg1;
- (bool)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2 associatedPassTypeIdentifiers:(id)arg3;
- (bool)allowAccessToPass:(id)arg1;
- (bool)allowsSilentAdd;
- (id)connection;
- (id)entitlementFilteredPasses:(id)arg1;
- (id)filterPassIfNeeded:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setWhitelist:(id)arg1;
- (id)whitelist;

@end