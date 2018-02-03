/* made by EzioChiu.
 */

@protocol AudioComponentPreferenceProtocol

@required

- (void)getComponentUserTags:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getExtensionComponentList:(void *)arg1 linkedSDKVersion:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getExtensionIcon:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)getInterAppIcon:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)setComponentUserTags:(NSDictionary *)arg1 tags:(NSArray *)arg2;
- (void)setExtensionComponentList:(void *)arg1 linkedSDKVersion:(void *)arg2 components:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, int, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
