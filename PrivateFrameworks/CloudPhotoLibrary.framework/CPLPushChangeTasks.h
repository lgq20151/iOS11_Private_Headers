/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushChangeTasks : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _mutableTasksByType;
    NSDictionary * _tasksByType;
}

@property (nonatomic, readonly) bool hasTasks;

+ (id)descriptionForTaskType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commitTasks;
- (id)_descriptionFromTasksByType:(id)arg1;
- (void)addTask:(long long)arg1 forRecordWithIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateTasksWithBlock:(id /* block */)arg1;
- (bool)hasTasks;
- (id)initEmpty;
- (id)initWithCoder:(id)arg1;
- (id)invalidRecordIdentifiers;

@end
