/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAvatarImage : SearchUIImage {
    NSString * _contactIdentifier;
    NSString * _monogramLetters;
}

@property (retain) NSString *contactIdentifier;
@property (retain) NSString *monogramLetters;

+ (id)avatarImageRenderer;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)initWithContactImage:(id)arg1;
- (id)initWithMonogramImage:(id)arg1;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (id)monogramLetters;
- (void)setContactIdentifier:(id)arg1;
- (void)setMonogramLetters:(id)arg1;

@end
