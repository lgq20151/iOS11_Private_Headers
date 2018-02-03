/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNSecurityScopedURL : NSURL {
    NSString * _sandboxExtensionClass;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_allowsDirectEncoding;
- (id)_issueSandboxExtension;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFileURLWithPath:(id)arg1 sandboxExtensionClass:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end