/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAppIconImageCache : NSObject

+ (id)appIconForBundleID:(id)arg1 variant:(unsigned long long)arg2;
+ (id)appIconForBundleID:(id)arg1 webClipID:(id)arg2 variant:(unsigned long long)arg3;
+ (id)appIconForResult:(id)arg1 variant:(unsigned long long)arg2;
+ (void)appIconImageDidChange:(id)arg1;
+ (bool)appIconIsCachedForBundleID:(id)arg1 variant:(unsigned long long)arg2;
+ (id)keyStringWithBundleID:(id)arg1 variant:(unsigned long long)arg2;

@end
