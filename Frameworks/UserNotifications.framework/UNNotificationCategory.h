/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationCategory : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    NSString * _hiddenPreviewsBodyPlaceholder;
    NSString * _identifier;
    NSArray * _intentIdentifiers;
    NSArray * _minimalActions;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSString *hiddenPreviewsBodyPlaceholder;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *intentIdentifiers;
@property (nonatomic, readonly, copy) NSArray *minimalActions;
@property (nonatomic, readonly) unsigned long long options;

+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 options:(unsigned long long)arg5;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 options:(unsigned long long)arg4;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 options:(unsigned long long)arg6;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 options:(unsigned long long)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 options:(unsigned long long)arg6;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hiddenPreviewsBodyPlaceholder;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)intentIdentifiers;
- (bool)isEqual:(id)arg1;
- (id)minimalActions;
- (unsigned long long)options;

@end
