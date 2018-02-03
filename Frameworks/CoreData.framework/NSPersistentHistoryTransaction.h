/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentHistoryTransaction : NSObject <NSCopying>

@property (readonly, copy) NSString *author;
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSArray *changes;
@property (readonly, copy) NSString *contextName;
@property (readonly, copy) NSString *processID;
@property (readonly, copy) NSString *storeID;
@property (readonly, copy) NSDate *timestamp;
@property (readonly) NSPersistentHistoryToken *token;
@property (readonly) long long transactionNumber;

+ (bool)supportsSecureCoding;

- (id)author;
- (id)bundleID;
- (id)changes;
- (id)contextName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIDNotification;
- (id)processID;
- (id)queryGenerationToken;
- (id)storeID;
- (id)timestamp;
- (id)token;
- (long long)transactionNumber;

@end
