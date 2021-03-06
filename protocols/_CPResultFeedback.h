/* made by EzioChiu.
 */

@protocol _CPResultFeedback <NSObject>

@required

- (bool)hasResult;
- (bool)hasTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPSearchResultForFeedback *)result;
- (void)setResult:(_CPSearchResultForFeedback *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
