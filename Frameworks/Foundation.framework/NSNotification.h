/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotification : NSObject <NSCoding, NSCopying>

@property (readonly, copy) NSString *name;
@property (readonly, retain) id object;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)notificationWithName:(id)arg1 object:(id)arg2;
+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)object;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

@end
