/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRBasicCardSection : NSObject <CRCardSection> {
    <SFCardSection> * _backingCardSection;
}

@property (nonatomic, readonly) NSArray *actionCommands;
@property (nonatomic, retain) <SFCardSection> *backingCardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNextCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)basicCardSectionWithBackingCardSection:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backingCardSection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackingCardSection:(id)arg1;

@end
