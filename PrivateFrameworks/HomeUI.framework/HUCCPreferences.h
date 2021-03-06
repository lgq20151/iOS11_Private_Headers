/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCPreferences : NSObject

@property (nonatomic) unsigned long long preferredPage;

+ (id)pageNumberByPageString;
+ (id)pageStringByPageNumber;
+ (id)sharedInstance;

- (unsigned long long)preferredPage;
- (void)setPreferredPage:(unsigned long long)arg1;

@end
