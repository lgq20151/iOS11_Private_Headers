/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface LocationOfInterestType : NSObject {
    NSString * _customLabel;
    long long  _labelType;
}

@property (nonatomic, copy) NSString *customLabel;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) long long labelType;

- (void).cxx_destruct;
- (id)customLabel;
- (id)initWithContactAddressType:(int)arg1 customLabel:(id)arg2;
- (id)initWithLabelType:(long long)arg1;
- (id)initWithLabelType:(long long)arg1 customLabel:(id)arg2;
- (id)label;
- (long long)labelType;
- (void)setCustomLabel:(id)arg1;

@end
