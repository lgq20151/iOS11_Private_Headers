/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityExportContext : NSObject {
    NSString * _localPeerID;
    NSMutableDictionary * _storeNameToStoreExportContext;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSMutableDictionary * _ubiquityRootPathToStack;
    bool  _useLocalStorage;
}

@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic) bool useLocalStorage;

- (void)dealloc;
- (id)description;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)localPeerID;
- (void)setUseLocalStorage:(bool)arg1;
- (id)storeExportContextForStore:(id)arg1;
- (id)storeExportContextForStoreName:(id)arg1;
- (bool)useLocalStorage;

@end
