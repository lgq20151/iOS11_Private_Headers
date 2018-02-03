/* made by EzioChiu.
 */

@protocol UIItemProviderReading <NSItemProviderReading>

@optional

+ (id)newObjectWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id*)arg4;

- (id)initWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 error:(id*)arg3;

@end
