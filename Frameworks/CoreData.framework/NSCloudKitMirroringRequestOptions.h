/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringRequestOptions : NSObject {
    bool  _allowsCellularAccess;
    long long  _qualityOfService;
}

@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic) long long qualityOfService;

- (bool)allowsCellularAccess;
- (void)applyToOperation:(id)arg1;
- (id)copy;
- (id)init;
- (long long)qualityOfService;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;

@end
