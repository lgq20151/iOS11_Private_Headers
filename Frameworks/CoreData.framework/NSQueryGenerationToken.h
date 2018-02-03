/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSQueryGenerationToken : NSObject <NSCopying, NSSecureCoding>

+ (id)currentQueryGenerationToken;
+ (void)initialize;
+ (id)nostoresQueryGenerationToken;
+ (bool)supportsSecureCoding;
+ (id)unpinnedQueryGenerationToken;

- (id)_generationalComponentForStore:(id)arg1;
- (bool)_isUnmoored;
- (id)_storeIdentifier;
- (id)_storesForRequestRoutingFrom:(id)arg1 error:(id*)arg2;
- (id)_token;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persistentStoreCoordinator;

@end
