/* made by EzioChiu.
 */

@protocol _CPCardViewAppearFeedback <NSObject>

@required

- (_CPCardForFeedback *)card;
- (NSString *)fbr;
- (bool)hasCard;
- (bool)hasFbr;
- (bool)hasLevel;
- (bool)hasTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned int)level;
- (void)setCard:(_CPCardForFeedback *)arg1;
- (void)setFbr:(NSString *)arg1;
- (void)setLevel:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
