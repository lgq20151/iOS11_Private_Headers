/* made by EzioChiu.
 */

@protocol _CPStoreCardSectionEngagementFeedback <NSObject>

@required

- (int)actionCardType;
- (_CPCardSectionForFeedback *)cardSection;
- (NSString *)cardSectionId;
- (_CPPunchoutForFeedback *)destination;
- (bool)hasActionCardType;
- (bool)hasCardSection;
- (bool)hasCardSectionId;
- (bool)hasDestination;
- (bool)hasProductPageResult;
- (bool)hasResultId;
- (bool)hasTimestamp;
- (bool)hasTriggerEvent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)productPageResult;
- (NSString *)resultId;
- (void)setActionCardType:(int)arg1;
- (void)setCardSection:(_CPCardSectionForFeedback *)arg1;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setDestination:(_CPPunchoutForFeedback *)arg1;
- (void)setProductPageResult:(int)arg1;
- (void)setResultId:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;

@end
