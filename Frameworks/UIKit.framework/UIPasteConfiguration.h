/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPasteConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSMutableOrderedSet * _acceptableTypes;
}

@property (nonatomic, copy) NSArray *acceptableTypeIdentifiers;
@property (nonatomic, copy) NSArray *acceptableTypes;

+ (id)_pasteConfigurationForAcceptingClasses:(id)arg1;
+ (id)pasteConfigurationForAcceptingClasses:(id)arg1;
+ (id)pasteConfigurationWithAcceptableTypes:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptableTypeIdentifiers;
- (id)acceptableTypes;
- (void)addAcceptableTypeIdentifiers:(id)arg1;
- (void)addTypeIdentifiersForAcceptingClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAcceptableTypeIdentifiers:(id)arg1;
- (id)initWithAcceptableTypes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAcceptableTypeIdentifiers:(id)arg1;
- (void)setAcceptableTypes:(id)arg1;

@end
