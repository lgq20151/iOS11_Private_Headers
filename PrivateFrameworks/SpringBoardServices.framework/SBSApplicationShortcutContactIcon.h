/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon {
    NSString * _contactIdentifier;
    NSString * _firstName;
    NSData * _imageData;
    NSString * _lastName;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSString *lastName;

- (void).cxx_destruct;
- (id)_initForSubclass;
- (id)contactIdentifier;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastName;

@end
