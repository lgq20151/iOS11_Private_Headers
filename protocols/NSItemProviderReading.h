/* made by EzioChiu.
 */

@protocol NSItemProviderReading <NSObject>

@required

+ (id)objectWithItemProviderData:(NSData *)arg1 typeIdentifier:(NSString *)arg2 error:(id*)arg3;
+ (NSArray *)readableTypeIdentifiersForItemProvider;

@end
