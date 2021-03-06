/* made by EzioChiu.
 */

@protocol _SFPBMediaOffer <NSObject>

@required

- (_SFPBActionItem *)actionItem;
- (bool)hasActionItem;
- (bool)hasImage;
- (bool)hasIsEnabled;
- (bool)hasOfferIdentifier;
- (bool)hasSublabel;
- (_SFPBImage *)image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isEnabled;
- (NSData *)jsonData;
- (NSString *)offerIdentifier;
- (void)setActionItem:(_SFPBActionItem *)arg1;
- (void)setImage:(_SFPBImage *)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setOfferIdentifier:(NSString *)arg1;
- (void)setSublabel:(NSString *)arg1;
- (NSString *)sublabel;

@end
