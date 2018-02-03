/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {
    NSExtension * _extension;
}

@property (nonatomic, retain) NSExtension *extension;

- (id)containingBundle;
- (id)containingBundleDisplayName;
- (void)dealloc;
- (bool)defaultLayoutIsASCIICapable;
- (id)displayName;
- (id)extendedDisplayName;
- (id)extension;
- (id)hardwareLayout;
- (id)identifierWithLayouts;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAllowedForTraits:(id)arg1;
- (bool)isDefaultRightToLeft;
- (bool)isDesiredForTraits:(id)arg1;
- (bool)isExtensionInputMode;
- (bool)isStalledExtensionInputMode;
- (id)normalizedIdentifierLevels;
- (void)setExtension:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;

@end
