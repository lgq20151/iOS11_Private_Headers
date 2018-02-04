/* made by EzioChiu.
 */

@protocol _SFPBStringDictionary <NSObject>

@required

- (void)addKeyValues:(_SFPBKeyValueTuple *)arg1;
- (void)clearKeyValues;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSArray *)keyValues;
- (_SFPBKeyValueTuple *)keyValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuesCount;
- (void)setKeyValues:(NSArray *)arg1;

@end