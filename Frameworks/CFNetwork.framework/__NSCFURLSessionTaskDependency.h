/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskDependency : NSURLSessionTaskDependency {
    NSURLSessionTask * _mainDocumentTask;
    NSURLSessionTask * _parentTask;
    NSURLSessionTaskDependencyDescription * _taskDependencyDescription;
}

+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;
+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(bool)arg3;

- (void)dealloc;
- (id)init;
- (id)mainDocumentTask;
- (id)parentTask;
- (void)setTaskDependencyDescription:(id)arg1;
- (id)taskDependencyDescription;

@end