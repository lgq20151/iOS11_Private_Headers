/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationShortcutIcon : NSObject <NSCopying> {
    SBSApplicationShortcutIcon * _sbsShortcutIcon;
}

@property (nonatomic, readonly) SBSApplicationShortcutIcon *sbsShortcutIcon;

+ (id)iconWithCustomImage:(id)arg1;
+ (id)iconWithCustomImage:(id)arg1 isTemplate:(bool)arg2;
+ (id)iconWithTemplateImageName:(id)arg1;
+ (id)iconWithType:(long long)arg1;
+ (long long)sbsIconTypeForIconType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSBSApplicationShortcutIcon:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sbsShortcutIcon;

@end
