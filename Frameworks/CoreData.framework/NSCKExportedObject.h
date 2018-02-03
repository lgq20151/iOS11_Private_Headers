/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKExportedObject : NSObject {
    NSNumber * _changeType;
    NSString * _ckRecordName;
    NSCKExportOperation * _operation;
}

@property (nonatomic, readonly) NSNumber *changeType;
@property (nonatomic, readonly) NSString *ckRecordName;
@property (nonatomic, readonly) NSCKExportOperation *operation;

- (id)changeType;
- (id)ckRecordName;
- (id)operation;

@end
