/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmoji : NSObject {
    NSString * _emojiString;
    unsigned long long  _variantMask;
}

@property (nonatomic, retain) NSString *emojiString;
@property unsigned long long variantMask;

+ (id)emojiWithString:(id)arg1 withVariantMask:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)emojiString;
- (id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)setEmojiString:(id)arg1;
- (void)setVariantMask:(unsigned long long)arg1;
- (unsigned long long)variantMask;

@end
