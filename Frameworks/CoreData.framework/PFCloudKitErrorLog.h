/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray * _entries;
}

@property (nonatomic, readonly) NSArray *entries;

- (void)dealloc;
- (id)description;
- (id)entries;
- (id)init;
- (void)logEncounteredError:(id)arg1 withAnnotation:(id)arg2;

@end
