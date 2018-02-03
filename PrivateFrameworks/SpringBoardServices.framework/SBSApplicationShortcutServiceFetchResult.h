/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying> {
    NSArray * _dynamicApplicationShortcutItems;
    NSArray * _staticApplicationShortcutItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dynamicApplicationShortcutItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *staticApplicationShortcutItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dynamicApplicationShortcutItems;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)staticApplicationShortcutItems;

@end