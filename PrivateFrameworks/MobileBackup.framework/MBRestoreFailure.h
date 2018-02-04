/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBRestoreFailure : NSObject <NSCopying, NSSecureCoding> {
    NSString * _assetType;
    NSString * _dataclass;
    NSString * _displayName;
    NSError * _error;
    NSData * _icon;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, copy) NSString *dataclass;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSData *icon;
@property (nonatomic, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (id)assetType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataclass;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)icon;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 displayName:(id)arg4 error:(id)arg5;
- (void)setAssetType:(id)arg1;
- (void)setDataclass:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end