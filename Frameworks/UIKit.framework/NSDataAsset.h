/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface NSDataAsset : NSObject <NSCopying> {
    CUINamedData * _namedData;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 bundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)typeIdentifier;

@end
